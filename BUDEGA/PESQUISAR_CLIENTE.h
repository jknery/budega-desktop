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
	/// Summary for PESQUISAR_CLIENTE
	/// </summary>
	public ref class PESQUISAR_CLIENTE : public System::Windows::Forms::Form
	{
	public:
		PESQUISAR_CLIENTE(void)
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
		~PESQUISAR_CLIENTE()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBoxVERRIFICAR;
	protected:
	private: System::Windows::Forms::Button^  buttonPesquisarVENDAS;
	private: System::Windows::Forms::TextBox^  textBoxNomeVENDAS;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PESQUISAR_CLIENTE::typeid));
			this->richTextBoxVERRIFICAR = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonPesquisarVENDAS = (gcnew System::Windows::Forms::Button());
			this->textBoxNomeVENDAS = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBoxVERRIFICAR
			// 
			this->richTextBoxVERRIFICAR->Location = System::Drawing::Point(12, 95);
			this->richTextBoxVERRIFICAR->Name = L"richTextBoxVERRIFICAR";
			this->richTextBoxVERRIFICAR->Size = System::Drawing::Size(304, 240);
			this->richTextBoxVERRIFICAR->TabIndex = 7;
			this->richTextBoxVERRIFICAR->Text = L"";
			// 
			// buttonPesquisarVENDAS
			// 
			this->buttonPesquisarVENDAS->Location = System::Drawing::Point(12, 62);
			this->buttonPesquisarVENDAS->Name = L"buttonPesquisarVENDAS";
			this->buttonPesquisarVENDAS->Size = System::Drawing::Size(134, 27);
			this->buttonPesquisarVENDAS->TabIndex = 6;
			this->buttonPesquisarVENDAS->Text = L"PESQUISAR";
			this->buttonPesquisarVENDAS->UseVisualStyleBackColor = true;
			this->buttonPesquisarVENDAS->Click += gcnew System::EventHandler(this, &PESQUISAR_CLIENTE::buttonPesquisarVENDAS_Click);
			// 
			// textBoxNomeVENDAS
			// 
			this->textBoxNomeVENDAS->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxNomeVENDAS->Location = System::Drawing::Point(12, 29);
			this->textBoxNomeVENDAS->Name = L"textBoxNomeVENDAS";
			this->textBoxNomeVENDAS->Size = System::Drawing::Size(304, 27);
			this->textBoxNomeVENDAS->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(9, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"NOME DO CLIENTE:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(182, 341);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 27);
			this->button1->TabIndex = 8;
			this->button1->Text = L"LIMPAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PESQUISAR_CLIENTE::button1_Click);
			// 
			// PESQUISAR_CLIENTE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(438, 380);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBoxVERRIFICAR);
			this->Controls->Add(this->buttonPesquisarVENDAS);
			this->Controls->Add(this->textBoxNomeVENDAS);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->Name = L"PESQUISAR_CLIENTE";
			this->Text = L"SGMB - Pesquisar Cliente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonPesquisarVENDAS_Click(System::Object^  sender, System::EventArgs^  e) {


				 int Qntd = 0, itens = 0, cont = 0;

				 float total = 0;

				 bool Acess = false;

				 string LINE, NomeVendas, Total, QntdITENS, SubTotalVendas;
				 String ^NOME_VENDAS, ^LINHA, ^NOME;

				 ifstream DEL1, DEL2, DEL3, DEL4;

				 NOME_VENDAS = textBoxNomeVENDAS->Text;
				 NomeVendas = msclr::interop::marshal_as<std::string>(NOME_VENDAS);


				
						 DEL1.open("CLIENTES.mdf");

						 if (DEL1.is_open())
						 {
							 while (getline(DEL1, LINE))
							 {
								 if (LINE == ESCAPE)
								 {
									 Acess = false;
								 }

								 if (LINE == NomeVendas)
								 {
									 Acess = true;
								 }
								 if (LINE == NomeVendas && Acess == true)
								 {
									 LINHA = msclr::interop::marshal_as<String^>(LINE);
									 NOME = msclr::interop::marshal_as<String^>(LINE);
									 richTextBoxVERRIFICAR->AppendText(LINHA);
									 richTextBoxVERRIFICAR->AppendText("\n");
									 ++cont;
								 }

								 if (LINE != ESCAPE)
								 {
									 if (LINE != NomeVendas && Acess == true)
									 {
										 if (cont <= 11)
										 {
											 LINHA = msclr::interop::marshal_as<String^>(LINE);
											 richTextBoxVERRIFICAR->AppendText(LINHA);
											 richTextBoxVERRIFICAR->AppendText("\n");
											 ++cont;
										 }

										 

									 }
								 }
							 }
						 }
						 DEL1.close();
					 



	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 richTextBoxVERRIFICAR->Clear();
			 textBoxNomeVENDAS->Clear();

}
};
}
