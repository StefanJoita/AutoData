#pragma once
#include "RegisterForm.h"
#include "viewyourcarsForm.h"
#include "user.h"

namespace AutoData {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashbord
	/// </summary>
	public ref class Dashbord : public System::Windows::Forms::Form
	{
	public: User^ user = nullptr;
	public:
		Dashbord(User^ user)
		{
			InitializeComponent();
			this->user = user;
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashbord()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAddCar;
	protected:
	private: System::Windows::Forms::Button^ btnViewAllCars;

	private: System::Windows::Forms::Button^ btnViewYourCars;
	private: System::Windows::Forms::Label^ lbWelcome;
	private: System::Windows::Forms::LinkLabel^ llLogout;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashbord::typeid));
			this->btnAddCar = (gcnew System::Windows::Forms::Button());
			this->btnViewAllCars = (gcnew System::Windows::Forms::Button());
			this->btnViewYourCars = (gcnew System::Windows::Forms::Button());
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->llLogout = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// btnAddCar
			// 
			this->btnAddCar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->btnAddCar->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAddCar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddCar->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->btnAddCar->Location = System::Drawing::Point(128, 118);
			this->btnAddCar->Name = L"btnAddCar";
			this->btnAddCar->Size = System::Drawing::Size(213, 75);
			this->btnAddCar->TabIndex = 0;
			this->btnAddCar->Text = L"Add a car";
			this->btnAddCar->UseVisualStyleBackColor = true;
			this->btnAddCar->Click += gcnew System::EventHandler(this, &Dashbord::btnAddCar_Click);
			// 
			// btnViewAllCars
			// 
			this->btnViewAllCars->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->btnViewAllCars->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnViewAllCars->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnViewAllCars->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->btnViewAllCars->Location = System::Drawing::Point(128, 336);
			this->btnViewAllCars->Name = L"btnViewAllCars";
			this->btnViewAllCars->Size = System::Drawing::Size(213, 75);
			this->btnViewAllCars->TabIndex = 1;
			this->btnViewAllCars->Text = L"View all cars";
			this->btnViewAllCars->UseVisualStyleBackColor = true;
			this->btnViewAllCars->Click += gcnew System::EventHandler(this, &Dashbord::btnViewAllCars_Click);
			// 
			// btnViewYourCars
			// 
			this->btnViewYourCars->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->btnViewYourCars->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnViewYourCars->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnViewYourCars->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->btnViewYourCars->Location = System::Drawing::Point(128, 228);
			this->btnViewYourCars->Name = L"btnViewYourCars";
			this->btnViewYourCars->Size = System::Drawing::Size(213, 75);
			this->btnViewYourCars->TabIndex = 3;
			this->btnViewYourCars->Text = L"View your cars";
			this->btnViewYourCars->UseVisualStyleBackColor = true;
			this->btnViewYourCars->Click += gcnew System::EventHandler(this, &Dashbord::btnViewYourCars_Click);
			// 
			// lbWelcome
			// 
			this->lbWelcome->BackColor = System::Drawing::Color::Transparent;
			this->lbWelcome->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbWelcome->Location = System::Drawing::Point(20, 0);
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->Size = System::Drawing::Size(433, 98);
			this->lbWelcome->TabIndex = 4;
			this->lbWelcome->Text = L"Welcome to AUTO-DATA";
			this->lbWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// llLogout
			// 
			this->llLogout->BackColor = System::Drawing::Color::Transparent;
			this->llLogout->DisabledLinkColor = System::Drawing::SystemColors::ControlLight;
			this->llLogout->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->llLogout->LinkColor = System::Drawing::Color::Transparent;
			this->llLogout->Location = System::Drawing::Point(197, 426);
			this->llLogout->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->llLogout->Name = L"llLogout";
			this->llLogout->Size = System::Drawing::Size(144, 28);
			this->llLogout->TabIndex = 5;
			this->llLogout->TabStop = true;
			this->llLogout->Text = L"logout";
			this->llLogout->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->llLogout->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Dashbord::llLogout_LinkClicked);
			// 
			// Dashbord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(446, 485);
			this->Controls->Add(this->llLogout);
			this->Controls->Add(this->lbWelcome);
			this->Controls->Add(this->btnViewYourCars);
			this->Controls->Add(this->btnViewAllCars);
			this->Controls->Add(this->btnAddCar);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Dashbord";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashbord";
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void btnAddCar_Click(System::Object^ sender, System::EventArgs^ e);
	
private: System::Void llLogout_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

	
private: System::Void btnViewYourCars_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnViewAllCars_Click(System::Object^ sender, System::EventArgs^ e);
};
}
