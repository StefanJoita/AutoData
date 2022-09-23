#pragma once
#include "user.h"
#include "Dashbord.h"
namespace AutoData {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for addCarForm
	/// </summary>
	public ref class addCarForm : public System::Windows::Forms::Form
	{ 
	public: User^ user;
	public:
		addCarForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->user = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addCarForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbSell;
	private: System::Windows::Forms::TextBox^ tbBrand;
	private: System::Windows::Forms::TextBox^ tbPower;


	private: System::Windows::Forms::TextBox^ tbYear;
	private: System::Windows::Forms::TextBox^ tbModel;


	private: System::Windows::Forms::TextBox^ tbPrice;
	private: System::Windows::Forms::TextBox^ tbDescription;
	private: System::Windows::Forms::ComboBox^ cbFuelType;
	private: System::Windows::Forms::Button^ btnPost;
	private: System::Windows::Forms::Button^ btnCancel;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addCarForm::typeid));
			this->lbSell = (gcnew System::Windows::Forms::Label());
			this->tbBrand = (gcnew System::Windows::Forms::TextBox());
			this->tbPower = (gcnew System::Windows::Forms::TextBox());
			this->tbYear = (gcnew System::Windows::Forms::TextBox());
			this->tbModel = (gcnew System::Windows::Forms::TextBox());
			this->tbPrice = (gcnew System::Windows::Forms::TextBox());
			this->tbDescription = (gcnew System::Windows::Forms::TextBox());
			this->cbFuelType = (gcnew System::Windows::Forms::ComboBox());
			this->btnPost = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbSell
			// 
			this->lbSell->BackColor = System::Drawing::Color::Transparent;
			this->lbSell->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSell->Location = System::Drawing::Point(75, 9);
			this->lbSell->Name = L"lbSell";
			this->lbSell->Size = System::Drawing::Size(698, 54);
			this->lbSell->TabIndex = 0;
			this->lbSell->Text = L"Sell your car! Post it now and just wait...";
			this->lbSell->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbBrand
			// 
			this->tbBrand->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbBrand->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbBrand->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbBrand->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbBrand->Location = System::Drawing::Point(38, 91);
			this->tbBrand->Margin = System::Windows::Forms::Padding(2);
			this->tbBrand->Multiline = true;
			this->tbBrand->Name = L"tbBrand";
			this->tbBrand->Size = System::Drawing::Size(288, 40);
			this->tbBrand->TabIndex = 1;
			this->tbBrand->Text = L"brand";
			this->tbBrand->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbPower
			// 
			this->tbPower->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbPower->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPower->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbPower->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbPower->Location = System::Drawing::Point(38, 207);
			this->tbPower->Margin = System::Windows::Forms::Padding(2);
			this->tbPower->Multiline = true;
			this->tbPower->Name = L"tbPower";
			this->tbPower->Size = System::Drawing::Size(288, 40);
			this->tbPower->TabIndex = 2;
			this->tbPower->Text = L"power";
			this->tbPower->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbYear
			// 
			this->tbYear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbYear->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbYear->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbYear->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbYear->Location = System::Drawing::Point(38, 265);
			this->tbYear->Margin = System::Windows::Forms::Padding(2);
			this->tbYear->Multiline = true;
			this->tbYear->Name = L"tbYear";
			this->tbYear->Size = System::Drawing::Size(288, 40);
			this->tbYear->TabIndex = 3;
			this->tbYear->Text = L"year";
			this->tbYear->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbModel
			// 
			this->tbModel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbModel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbModel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbModel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbModel->Location = System::Drawing::Point(38, 149);
			this->tbModel->Margin = System::Windows::Forms::Padding(2);
			this->tbModel->Multiline = true;
			this->tbModel->Name = L"tbModel";
			this->tbModel->Size = System::Drawing::Size(288, 40);
			this->tbModel->TabIndex = 4;
			this->tbModel->Text = L"model";
			this->tbModel->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbPrice
			// 
			this->tbPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbPrice->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbPrice->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbPrice->Location = System::Drawing::Point(38, 319);
			this->tbPrice->Margin = System::Windows::Forms::Padding(2);
			this->tbPrice->Multiline = true;
			this->tbPrice->Name = L"tbPrice";
			this->tbPrice->Size = System::Drawing::Size(288, 40);
			this->tbPrice->TabIndex = 5;
			this->tbPrice->Text = L"price";
			this->tbPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbDescription
			// 
			this->tbDescription->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbDescription->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbDescription->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbDescription->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbDescription->Location = System::Drawing::Point(422, 91);
			this->tbDescription->Margin = System::Windows::Forms::Padding(2);
			this->tbDescription->Multiline = true;
			this->tbDescription->Name = L"tbDescription";
			this->tbDescription->Size = System::Drawing::Size(312, 321);
			this->tbDescription->TabIndex = 6;
			this->tbDescription->Text = L"Write here a short description about your car!";
			this->tbDescription->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// cbFuelType
			// 
			this->cbFuelType->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->cbFuelType->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->cbFuelType->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cbFuelType->FormattingEnabled = true;
			this->cbFuelType->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"diesel", L"benzina", L"electric", L"gpl" });
			this->cbFuelType->Location = System::Drawing::Point(38, 374);
			this->cbFuelType->Name = L"cbFuelType";
			this->cbFuelType->Size = System::Drawing::Size(288, 38);
			this->cbFuelType->TabIndex = 7;
			this->cbFuelType->Text = L"fuel type";
			// 
			// btnPost
			// 
			this->btnPost->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->btnPost->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnPost->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPost->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->btnPost->Location = System::Drawing::Point(455, 433);
			this->btnPost->Name = L"btnPost";
			this->btnPost->Size = System::Drawing::Size(105, 42);
			this->btnPost->TabIndex = 8;
			this->btnPost->Text = L"POST";
			this->btnPost->UseVisualStyleBackColor = true;
			this->btnPost->Click += gcnew System::EventHandler(this, &addCarForm::btnPost_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->btnCancel->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->btnCancel->Location = System::Drawing::Point(605, 433);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(101, 42);
			this->btnCancel->TabIndex = 9;
			this->btnCancel->Text = L"CANCEL";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &addCarForm::btnCancel_Click);
			// 
			// addCarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(816, 552);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnPost);
			this->Controls->Add(this->cbFuelType);
			this->Controls->Add(this->tbDescription);
			this->Controls->Add(this->tbPrice);
			this->Controls->Add(this->tbModel);
			this->Controls->Add(this->tbYear);
			this->Controls->Add(this->tbPower);
			this->Controls->Add(this->tbBrand);
			this->Controls->Add(this->lbSell);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"addCarForm";
			this->RightToLeftLayout = true;
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"addCarForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnPost_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e);
};
}
