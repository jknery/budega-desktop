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
	/// Summary for EXIBIR_FORNECEDORES
	/// </summary>
	public ref class EXIBIR_FORNECEDORES : public System::Windows::Forms::Form
	{
	public:
		EXIBIR_FORNECEDORES(void)
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
		~EXIBIR_FORNECEDORES()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonOKfornecedor;
	protected:
	private: System::Windows::Forms::Label^  QNTDFornecedor;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBoxFornecedor;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EXIBIR_FORNECEDORES::typeid));
			this->buttonOKfornecedor = (gcnew System::Windows::Forms::Button());
			this->QNTDFornecedor = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBoxFornecedor = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// buttonOKfornecedor
			// 
			this->buttonOKfornecedor->Location = System::Drawing::Point(12, 285);
			this->buttonOKfornecedor->Name = L"buttonOKfornecedor";
			this->buttonOKfornecedor->Size = System::Drawing::Size(93, 30);
			this->buttonOKfornecedor->TabIndex = 7;
			this->buttonOKfornecedor->Text = L"OK";
			this->buttonOKfornecedor->UseVisualStyleBackColor = true;
			this->buttonOKfornecedor->Click += gcnew System::EventHandler(this, &EXIBIR_FORNECEDORES::buttonOKfornecedor_Click);
			// 
			// QNTDFornecedor
			// 
			this->QNTDFornecedor->AutoSize = true;
			this->QNTDFornecedor->BackColor = System::Drawing::Color::Transparent;
			this->QNTDFornecedor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->QNTDFornecedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->QNTDFornecedor->Location = System::Drawing::Point(324, 6);
			this->QNTDFornecedor->Name = L"QNTDFornecedor";
			this->QNTDFornecedor->Size = System::Drawing::Size(2, 20);
			this->QNTDFornecedor->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(13, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(307, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Nº DE FORNECED CADASTRADOS:";
			// 
			// richTextBoxFornecedor
			// 
			this->richTextBoxFornecedor->Location = System::Drawing::Point(12, 27);
			this->richTextBoxFornecedor->Name = L"richTextBoxFornecedor";
			this->richTextBoxFornecedor->ReadOnly = true;
			this->richTextBoxFornecedor->Size = System::Drawing::Size(355, 250);
			this->richTextBoxFornecedor->TabIndex = 4;
			this->richTextBoxFornecedor->Text = L"";
			// 
			// EXIBIR_FORNECEDORES
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(382, 323);
			this->Controls->Add(this->buttonOKfornecedor);
			this->Controls->Add(this->QNTDFornecedor);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBoxFornecedor);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"EXIBIR_FORNECEDORES";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SGMB - Fornecedores Cadastrados";
			this->Load += gcnew System::EventHandler(this, &EXIBIR_FORNECEDORES::EXIBIR_FORNECEDORES_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonOKfornecedor_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Close();
	}
	private: System::Void EXIBIR_FORNECEDORES_Load(System::Object^  sender, System::EventArgs^  e)
	{
				 int Acess = 0, Cont = 0;

				 stringstream convert;

				 string LINE, CONT;
				 String^ LINHA, ^CONTA;

				 ifstream LIST;

				 LIST.open("FORNECEDORES.mdf");

				 if (LIST.is_open())
				 {
					 while (getline(LIST, LINE))
					 {

						 if (LINE != ESCAPE && Acess == 0)
						 {
							 LINHA = msclr::interop::marshal_as<String^>(LINE);
							 richTextBoxFornecedor->AppendText(LINHA);
							 richTextBoxFornecedor->AppendText("\n");
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
					 QNTDFornecedor->Text = CONTA;

				 }
				 LIST.close();
	}
	};
}
