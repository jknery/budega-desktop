#pragma once

#include "BUDEGAGUI.h"

namespace BUDEGA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EXIBIR_USUARIOS
	/// </summary>
	public ref class EXIBIR_USUARIOS : public System::Windows::Forms::Form
	{
	public:
		EXIBIR_USUARIOS(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EXIBIR_USUARIOS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  QNTDUSERS;
	private: System::Windows::Forms::Button^  buttonOKuser;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EXIBIR_USUARIOS::typeid));
			this->richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->QNTDUSERS = (gcnew System::Windows::Forms::Label());
			this->buttonOKuser = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox
			// 
			this->richTextBox->Location = System::Drawing::Point(12, 27);
			this->richTextBox->Name = L"richTextBox";
			this->richTextBox->ReadOnly = true;
			this->richTextBox->Size = System::Drawing::Size(355, 250);
			this->richTextBox->TabIndex = 0;
			this->richTextBox->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(13, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(305, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nº DE USUÁRIOS CADASTRADOS:";
			// 
			// QNTDUSERS
			// 
			this->QNTDUSERS->AutoSize = true;
			this->QNTDUSERS->BackColor = System::Drawing::Color::Transparent;
			this->QNTDUSERS->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->QNTDUSERS->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->QNTDUSERS->Location = System::Drawing::Point(324, 6);
			this->QNTDUSERS->Name = L"QNTDUSERS";
			this->QNTDUSERS->Size = System::Drawing::Size(2, 20);
			this->QNTDUSERS->TabIndex = 2;
			// 
			// buttonOKuser
			// 
			this->buttonOKuser->Location = System::Drawing::Point(12, 285);
			this->buttonOKuser->Name = L"buttonOKuser";
			this->buttonOKuser->Size = System::Drawing::Size(93, 30);
			this->buttonOKuser->TabIndex = 3;
			this->buttonOKuser->Text = L"OK";
			this->buttonOKuser->UseVisualStyleBackColor = true;
			this->buttonOKuser->Click += gcnew System::EventHandler(this, &EXIBIR_USUARIOS::buttonOKuser_Click);
			// 
			// EXIBIR_USUARIOS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(382, 326);
			this->Controls->Add(this->buttonOKuser);
			this->Controls->Add(this->QNTDUSERS);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EXIBIR_USUARIOS";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SGMB - Usuários Cadastrados";
			this->Load += gcnew System::EventHandler(this, &EXIBIR_USUARIOS::EXIBIR_USUARIOS_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EXIBIR_USUARIOS_Load(System::Object^  sender, System::EventArgs^  e)
	{
				 int Acess = 0, Cont = 0;

				 stringstream convert;

				 string LINE, CONT;
				 String^ LINHA, ^CONTA;

				 ifstream LIST;

				 LIST.open("Login.mdf");

				 if (LIST.is_open())
				 {
					 while (getline(LIST, LINE))
					 {

						 if (LINE != ESCAPE && Acess == 0)
						 {
							 LINHA = msclr::interop::marshal_as<String^>(LINE);
							 richTextBox->AppendText(LINHA);
							 richTextBox->AppendText("\n");
							 Acess = 1;
						 }

						 if (LINE == ESCAPE)
						 {
							 ++Cont;
							 Acess = 0;
						 }

					 }

					 convert << Cont;
					 CONT = convert.str();
					 CONTA = msclr::interop::marshal_as<String^>(CONT);
					 QNTDUSERS->Text = CONTA;

				 }
				 LIST.close();

	}
	private: System::Void buttonOKuser_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Close();
	}
	};
}
