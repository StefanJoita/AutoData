#include "LoginForm.h"
#include "Dashbord.h"
System::Void AutoData::LoginForm::btnCancel_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
System::Void AutoData::LoginForm::btnOk_Click(System::Object^ sender, System::EventArgs^ e)
{
	{
		String^ email = this->tbEmail->Text;
		String^ password = this->tbPassword->Text;


		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password",
				"Email or Password Empty", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ connString = "Data Source=jse-pc;Initial Catalog=auto-data;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM utilizatori WHERE email=@email AND password=@pwd;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->nume = reader->GetString(1);
				user->prenume = reader->GetString(2);
				user->email = reader->GetString(3);
				user->phone = reader->GetString(4);
				user->address = reader->GetString(5);
				user->password = reader->GetString(6);
				this->Hide();
				Dashbord Dashbord(user);
				Dashbord.ShowDialog();
				
			}
			else {
				MessageBox::Show("Email or password is incorrect",
					"Email or Password Error", MessageBoxButtons::OK);
			}
			
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connect to database",
				"DB CONNECTION ERROR", MessageBoxButtons::OK);
		}
		
		

	}
}

System::Void AutoData::LoginForm::llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	this->Hide();
	RegisterForm registerForm;
	registerForm.ShowDialog();
	
}
