#pragma once
#include "user.h"
#include <stdio.h>
#include <regex>
#include <iostream>
#include <string>
#include "LoginForm.h"
namespace AutoData {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbWelcome;






	private: System::Windows::Forms::TextBox^ tbSurname;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbFirstname;
	private: System::Windows::Forms::TextBox^ tbAdress;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;

	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->tbSurname = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbFirstname = (gcnew System::Windows::Forms::TextBox());
			this->tbAdress = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbWelcome
			// 
			this->lbWelcome->BackColor = System::Drawing::Color::Transparent;
			this->lbWelcome->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold));
			this->lbWelcome->Location = System::Drawing::Point(466, 9);
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->Size = System::Drawing::Size(440, 65);
			this->lbWelcome->TabIndex = 0;
			this->lbWelcome->Text = L"Create your account!";
			this->lbWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbSurname
			// 
			this->tbSurname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbSurname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbSurname->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbSurname->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbSurname->Location = System::Drawing::Point(533, 107);
			this->tbSurname->Multiline = true;
			this->tbSurname->Name = L"tbSurname";
			this->tbSurname->Size = System::Drawing::Size(298, 35);
			this->tbSurname->TabIndex = 7;
			this->tbSurname->Text = L"surname";
			this->tbSurname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbEmail
			// 
			this->tbEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbEmail->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbEmail->Location = System::Drawing::Point(533, 189);
			this->tbEmail->Multiline = true;
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(298, 35);
			this->tbEmail->TabIndex = 8;
			this->tbEmail->Text = L"email";
			this->tbEmail->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbFirstname
			// 
			this->tbFirstname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbFirstname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbFirstname->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbFirstname->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbFirstname->Location = System::Drawing::Point(533, 148);
			this->tbFirstname->Multiline = true;
			this->tbFirstname->Name = L"tbFirstname";
			this->tbFirstname->Size = System::Drawing::Size(298, 35);
			this->tbFirstname->TabIndex = 9;
			this->tbFirstname->Text = L"firstname";
			this->tbFirstname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbAdress
			// 
			this->tbAdress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbAdress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbAdress->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbAdress->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbAdress->Location = System::Drawing::Point(533, 230);
			this->tbAdress->Multiline = true;
			this->tbAdress->Name = L"tbAdress";
			this->tbAdress->Size = System::Drawing::Size(298, 35);
			this->tbAdress->TabIndex = 10;
			this->tbAdress->Text = L"address";
			this->tbAdress->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbPassword->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbPassword->Location = System::Drawing::Point(533, 312);
			this->tbPassword->Multiline = true;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(298, 35);
			this->tbPassword->TabIndex = 11;
			this->tbPassword->Text = L"password";
			this->tbPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbConfirmPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbConfirmPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbConfirmPassword->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbConfirmPassword->Location = System::Drawing::Point(533, 353);
			this->tbConfirmPassword->Multiline = true;
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(298, 35);
			this->tbConfirmPassword->TabIndex = 12;
			this->tbConfirmPassword->Text = L"password";
			this->tbConfirmPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbPhone
			// 
			this->tbPhone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->tbPhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPhone->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16));
			this->tbPhone->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbPhone->Location = System::Drawing::Point(533, 271);
			this->tbPhone->Multiline = true;
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(298, 35);
			this->tbPhone->TabIndex = 14;
			this->tbPhone->Text = L"phone";
			this->tbPhone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->btnCancel->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13, System::Drawing::FontStyle::Bold));
			this->btnCancel->Location = System::Drawing::Point(709, 403);
			this->btnCancel->Margin = System::Windows::Forms::Padding(2);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(122, 33);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"CANCEL";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->BackColor = System::Drawing::Color::Transparent;
			this->llLogin->DisabledLinkColor = System::Drawing::SystemColors::ControlLight;
			this->llLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold));
			this->llLogin->LinkColor = System::Drawing::Color::Transparent;
			this->llLogin->Location = System::Drawing::Point(655, 451);
			this->llLogin->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(64, 28);
			this->llLogin->TabIndex = 17;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"LogIn";
			this->llLogin->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// btnOk
			// 
			this->btnOk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->btnOk->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnOk->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13, System::Drawing::FontStyle::Bold));
			this->btnOk->Location = System::Drawing::Point(549, 403);
			this->btnOk->Margin = System::Windows::Forms::Padding(2);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(122, 33);
			this->btnOk->TabIndex = 5;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &RegisterForm::btnOk_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(425, 514);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(918, 508);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbAdress);
			this->Controls->Add(this->tbFirstname);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbSurname);
			this->Controls->Add(this->lbWelcome);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"RegisterForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e); 

private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
public: User^ user = nullptr;
private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e);
};
}
