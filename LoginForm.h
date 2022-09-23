#pragma once
#include <stdio.h>
#include <regex>
#include <iostream>
#include <string>
#include "user.h"
#include "RegisterForm.h"
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
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public: User^ user = nullptr;
	public:
		
		LoginForm()
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ loginLabel;
	protected:

	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llRegister;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// loginLabel
			// 
			this->loginLabel->BackColor = System::Drawing::Color::Transparent;
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 33, System::Drawing::FontStyle::Bold));
			this->loginLabel->Location = System::Drawing::Point(524, 69);
			this->loginLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(333, 58);
			this->loginLabel->TabIndex = 0;
			this->loginLabel->Text = L"Sign in";
			this->loginLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbEmail
			// 
			this->tbEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbEmail->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbEmail->Location = System::Drawing::Point(549, 152);
			this->tbEmail->Margin = System::Windows::Forms::Padding(2);
			this->tbEmail->Multiline = true;
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(298, 35);
			this->tbEmail->TabIndex = 2;
			this->tbEmail->Text = L"someone@mail.com";
			this->tbEmail->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
	 			static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbPassword->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbPassword->Location = System::Drawing::Point(549, 209);
			this->tbPassword->Margin = System::Windows::Forms::Padding(2);
			this->tbPassword->Multiline = true;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(298, 35);
			this->tbPassword->TabIndex = 4;
			this->tbPassword->Text = L"Password";
			this->tbPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnOk
			// 
			this->btnOk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->btnOk->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnOk->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13, System::Drawing::FontStyle::Bold));
			this->btnOk->Location = System::Drawing::Point(549, 277);
			this->btnOk->Margin = System::Windows::Forms::Padding(2);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(122, 33);
			this->btnOk->TabIndex = 5;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &LoginForm::btnOk_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->btnCancel->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13, System::Drawing::FontStyle::Bold));
			this->btnCancel->Location = System::Drawing::Point(725, 278);
			this->btnCancel->Margin = System::Windows::Forms::Padding(2);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(122, 33);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"CANCEL";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->BackColor = System::Drawing::Color::Transparent;
			this->llRegister->DisabledLinkColor = System::Drawing::SystemColors::ControlLight;
			this->llRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->llRegister->LinkColor = System::Drawing::Color::Transparent;
			this->llRegister->Location = System::Drawing::Point(632, 352);
			this->llRegister->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(144, 28);
			this->llRegister->TabIndex = 7;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Go To Register";
			this->llRegister->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(-34, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(512, 516);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(918, 508);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->loginLabel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoginForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
};
}
