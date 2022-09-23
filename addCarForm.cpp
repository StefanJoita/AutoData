#include "addCarForm.h"	
System::Void AutoData::addCarForm::btnPost_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ brand = this->tbBrand->Text;
	String^ model = this->tbModel->Text;
	String^ power = this->tbPower->Text;
	String^ year = this->tbYear->Text;
	String^ price = this->tbPrice->Text; 
	String^ description = this->tbDescription->Text;
	String^ fueltype = this->cbFuelType->SelectedItem->ToString();


		if (model->Length == 0) {
			MessageBox::Show("Please enter the model of the car!",
				"Model Name Empty", MessageBoxButtons::OK);
			return;
		}
		if (brand->Length == 0) {
			MessageBox::Show("Please enter the brand of the car!",
				"Brand Name Empty", MessageBoxButtons::OK);
			return;
		}
		if (price->Length == 0) {
			MessageBox::Show("Please enter the price of the car!",
				"Price Empty", MessageBoxButtons::OK);
			return;
		}
		if (description->Length == 0) {
			MessageBox::Show("Please describe your car!",
				"Description Empty", MessageBoxButtons::OK);
			return;
		}
	try {
		String^ connString = "Data Source=jse-pc;Initial Catalog=auto-data;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO cars " +
			"(brand,year, fueltype, power, price,userID,model,description) VALUES " +
			"(@brand,@year,@fueltype, @power, @price,@userID,@model,@description);";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@brand", brand);
		command.Parameters->AddWithValue("@year", year);
		command.Parameters->AddWithValue("@fueltype", fueltype);
		command.Parameters->AddWithValue("@power", power);
		command.Parameters->AddWithValue("@price", price);
		command.Parameters->AddWithValue("@userID", user->id);
		command.Parameters->AddWithValue("@model", model);
		command.Parameters->AddWithValue("@description", description);
		if (command.ExecuteNonQuery()) {
			MessageBox::Show("Car Added",
				"SUCCES!", MessageBoxButtons::OK);
			this->Hide();
			AutoData::Dashbord dashbord(user);
			dashbord.ShowDialog();
		}
		else {
			MessageBox::Show("Car not added",
				"Error", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to connect to database",
			"DB CONNECTION ERROR", MessageBoxButtons::OK);
	}
}

System::Void AutoData::addCarForm::btnCancel_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	AutoData::Dashbord dashbord(user);
	dashbord.ShowDialog();
}
