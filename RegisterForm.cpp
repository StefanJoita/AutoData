#include "RegisterForm.h"
#include "LoginForm.h"
System::Void AutoData::RegisterForm::btnCancel_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Void AutoData::RegisterForm::llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	this->Hide();
	LoginForm loginForm;
	loginForm.ShowDialog();
	

}
System::Void AutoData::RegisterForm::btnOk_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ firstname = tbFirstname->Text;
	String^ surname = tbSurname->Text;
	String^ email = tbEmail->Text;
	String^ phone = tbPhone->Text;
	String^ address = tbAdress->Text;
	String^ password = tbPassword->Text;
	String^ confirmPassword = tbConfirmPassword->Text;

	if (firstname->Length == 0 || surname->Length == 0 || email->Length == 0
		|| phone->Length == 0 || address->Length == 0
		|| password->Length == 0) {

		MessageBox::Show("Please enter all the fields",
			"On or more empty fields", MessageBoxButtons::OK);
		return;
	}

	if (String::Compare(password, confirmPassword) != 0) {
		MessageBox::Show("Password and Confirm Password do not match",
			"Password Error", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connString = "Data Source=jse-pc;Initial Catalog=auto-data;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO utilizatori " +
			"(nume,prenume, email, phone, adress, password) VALUES " +
			"(@firstname,@surname, @email, @phone, @adress, @password);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@firstname", firstname);
		command.Parameters->AddWithValue("@surname", surname);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@phone", phone);
		command.Parameters->AddWithValue("@adress", address);
		command.Parameters->AddWithValue("@password", password);

		command.ExecuteNonQuery();
		LoginForm loginForm;
		loginForm.ShowDialog();
		this->Close();

		
	}
	catch (Exception^ ex) {

		MessageBox::Show("Failed to register new user",
			"Register Failure", MessageBoxButtons::OK);
	}
}



