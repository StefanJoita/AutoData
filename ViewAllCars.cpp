#include "ViewAllCars.h"
#include "Dashbord.h"
System::Void AutoData::ViewAllCars::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	Dashbord dashboard(user);
	dashboard.ShowDialog();
}

System::Void AutoData::ViewAllCars::ViewAllCars_Load(System::Object^ sender, System::EventArgs^ e)
{

	String^ connString = "Data Source=jse-pc;Initial Catalog=auto-data;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(connString);
	conDataBase->Open();
	SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT brand,model,fueltype,power, price, adress,description,nume,prenume,phone FROM cars as c inner join utilizatori as u on c.userID = u.id;", conDataBase);
	SqlDataReader^ reader;
	try {



		SqlDataAdapter^ sda = gcnew SqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();
		bSource->DataSource = dbdataset;
		dataGridView1->DataSource = bSource;
		sda->Update(dbdataset);



	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect to database",
			"DB CONNECTION ERROR", MessageBoxButtons::OK);
	}
	conDataBase->Close();
}
