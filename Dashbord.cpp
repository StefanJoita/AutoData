#include "Dashbord.h"
#include "LoginForm.h"
#include "addCarForm.h"
#include "ViewAllCars.h"
System::Void AutoData::Dashbord::btnAddCar_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	addCarForm addcarForm(user);
	addcarForm.ShowDialog();
}
System::Void AutoData::Dashbord::llLogout_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	this->Close();
	LoginForm loginForm;
	loginForm.user = nullptr;
	loginForm.ShowDialog();

}

System::Void AutoData::Dashbord::btnViewYourCars_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	viewyourcarsForm viewYCForm(user);
	viewYCForm.ShowDialog();
}

System::Void AutoData::Dashbord::btnViewAllCars_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	ViewAllCars viewallcars(user);
	viewallcars.ShowDialog();
}
