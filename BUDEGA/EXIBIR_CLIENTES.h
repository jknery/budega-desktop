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
	/// Summary for EXIBIR_CLIENTES
	/// </summary>
	public ref class EXIBIR_CLIENTES : public System::Windows::Forms::Form
	{
	public:
		EXIBIR_CLIENTES(void)
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
		~EXIBIR_CLIENTES()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonOKCliente;
	protected:
	private: System::Windows::Forms::Label^  QNTDClientes;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBoxCliente;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EXIBIR_CLIENTES::typeid));
			this->buttonOKCliente = (gcnew System::Windows::Forms::Button());
			this->QNTDClientes = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBoxCliente = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// buttonOKCliente
			// 
			this->buttonOKCliente->Location = System::Drawing::Point(12, 285);
			this->buttonOKCliente->Name = L"buttonOKCliente";
			this->buttonOKCliente->Size = System::Drawing::Size(93, 30);
			this->buttonOKCliente->TabIndex = 7;
			this->buttonOKCliente->Text = L"OK";
			this->buttonOKCliente->UseVisualStyleBackColor = true;
			this->buttonOKCliente->Click += gcnew System::EventHandler(this, &EXIBIR_CLIENTES::buttonOKCliente_Click);
			// 
			// QNTDClientes
			// 
			this->QNTDClientes->AutoSize = true;
			this->QNTDClientes->BackColor = System::Drawing::Color::Transparent;
			this->QNTDClientes->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->QNTDClientes->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->QNTDClientes->Location = System::Drawing::Point(317, 6);
			this->QNTDClientes->Name = L"QNTDClientes";
			this->QNTDClientes->Size = System::Drawing::Size(2, 20);
			this->QNTDClientes->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(13, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(298, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Nº DE CLIENTES CADASTRADOS:";
			// 
			// richTextBoxCliente
			// 
			this->richTextBoxCliente->Location = System::Drawing::Point(12, 27);
			this->richTextBoxCliente->Name = L"richTextBoxCliente";
			this->richTextBoxCliente->ReadOnly = true;
			this->richTextBoxCliente->Size = System::Drawing::Size(355, 250);
			this->richTextBoxCliente->TabIndex = 4;
			this->richTextBoxCliente->Text = L"";
			// 
			// EXIBIR_CLIENTES
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(382, 325);
			this->Controls->Add(this->buttonOKCliente);
			this->Controls->Add(this->QNTDClientes);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBoxCliente);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EXIBIR_CLIENTES";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SGMB - Clientes Cadastrados";
			this->Load += gcnew System::EventHandler(this, &EXIBIR_CLIENTES::EXIBIR_CLIENTES_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EXIBIR_CLIENTES_Load(System::Object^  sender, System::EventArgs^  e)
	{
				 int Acess = 0, Cont = 0;

				 stringstream convert;

				 string LINE, CONT;
				 String^ LINHA, ^CONTA;

				 ifstream LIST;

				 LIST.open("CLIENTES.mdf");

				 if (LIST.is_open())
				 {
					 while (getline(LIST, LINE))
					 {

						 if (LINE != ESCAPE && Acess == 0)
						 {
							 LINHA = msclr::interop::marshal_as<String^>(LINE);
							 richTextBoxCliente->AppendText(LINHA);
							 richTextBoxCliente->AppendText("\n");
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
					 QNTDClientes->Text = CONTA;

				 }
				 LIST.close();
	}
	private: System::Void buttonOKCliente_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Close();
	}
	};
}
