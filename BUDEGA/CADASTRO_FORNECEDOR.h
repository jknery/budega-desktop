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
	/// Summary for CADASTRO_FORNECEDOR
	/// </summary>
	public ref class CADASTRO_FORNECEDOR : public System::Windows::Forms::Form
	{
	public:
		CADASTRO_FORNECEDOR(void)
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
		~CADASTRO_FORNECEDOR()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  CancelarCadastrarFornecedor;
	protected:

	private: System::Windows::Forms::Button^  CadastrarFornecedor;
	protected:

	private: System::Windows::Forms::TextBox^  textBoxEmail;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::MaskedTextBox^  TextBoxMovel;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::MaskedTextBox^  TextBoxFixo;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::MaskedTextBox^  TextBoxCep;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBoxBairro;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBoxNumCasa;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBoxRua;
	private: System::Windows::Forms::MaskedTextBox^  TextBoxCNPJ;
	private: System::Windows::Forms::TextBox^  textBoxNomeCliente;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  labelNome;
	private: System::Windows::Forms::TextBox^  textBoxNomeFantasia;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MaskedTextBox^  TextBoxANVISA;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBoxTIPOPRODUTOSFORN;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CADASTRO_FORNECEDOR::typeid));
			this->CancelarCadastrarFornecedor = (gcnew System::Windows::Forms::Button());
			this->CadastrarFornecedor = (gcnew System::Windows::Forms::Button());
			this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TextBoxMovel = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TextBoxFixo = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TextBoxCep = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxBairro = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxNumCasa = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxRua = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxCNPJ = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxNomeCliente = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelNome = (gcnew System::Windows::Forms::Label());
			this->textBoxNomeFantasia = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TextBoxANVISA = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxTIPOPRODUTOSFORN = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// CancelarCadastrarFornecedor
			// 
			this->CancelarCadastrarFornecedor->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->CancelarCadastrarFornecedor->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelarCadastrarFornecedor->Location = System::Drawing::Point(243, 445);
			this->CancelarCadastrarFornecedor->Name = L"CancelarCadastrarFornecedor";
			this->CancelarCadastrarFornecedor->Size = System::Drawing::Size(131, 30);
			this->CancelarCadastrarFornecedor->TabIndex = 57;
			this->CancelarCadastrarFornecedor->Text = L"CANCELAR";
			this->CancelarCadastrarFornecedor->UseVisualStyleBackColor = true;
			this->CancelarCadastrarFornecedor->Click += gcnew System::EventHandler(this, &CADASTRO_FORNECEDOR::CancelarCadastrarFornecedor_Click);
			// 
			// CadastrarFornecedor
			// 
			this->CadastrarFornecedor->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->CadastrarFornecedor->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CadastrarFornecedor->Location = System::Drawing::Point(17, 445);
			this->CadastrarFornecedor->Name = L"CadastrarFornecedor";
			this->CadastrarFornecedor->Size = System::Drawing::Size(131, 30);
			this->CadastrarFornecedor->TabIndex = 56;
			this->CadastrarFornecedor->Text = L"CADASTRAR";
			this->CadastrarFornecedor->UseVisualStyleBackColor = true;
			this->CadastrarFornecedor->Click += gcnew System::EventHandler(this, &CADASTRO_FORNECEDOR::CadastrarFornecedor_Click);
			// 
			// textBoxEmail
			// 
			this->textBoxEmail->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxEmail->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxEmail->Location = System::Drawing::Point(20, 409);
			this->textBoxEmail->Name = L"textBoxEmail";
			this->textBoxEmail->Size = System::Drawing::Size(354, 23);
			this->textBoxEmail->TabIndex = 52;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(17, 388);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 18);
			this->label9->TabIndex = 51;
			this->label9->Text = L"EMAIL:";
			// 
			// TextBoxMovel
			// 
			this->TextBoxMovel->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBoxMovel->Location = System::Drawing::Point(168, 356);
			this->TextBoxMovel->Mask = L"(00) 0-0000-0000";
			this->TextBoxMovel->Name = L"TextBoxMovel";
			this->TextBoxMovel->Size = System::Drawing::Size(157, 23);
			this->TextBoxMovel->TabIndex = 50;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(165, 335);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(139, 18);
			this->label8->TabIndex = 49;
			this->label8->Text = L"TEL. CELULAR:";
			// 
			// TextBoxFixo
			// 
			this->TextBoxFixo->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBoxFixo->Location = System::Drawing::Point(21, 356);
			this->TextBoxFixo->Mask = L"(00) 0000-0000";
			this->TextBoxFixo->Name = L"TextBoxFixo";
			this->TextBoxFixo->Size = System::Drawing::Size(141, 23);
			this->TextBoxFixo->TabIndex = 48;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(18, 335);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 18);
			this->label7->TabIndex = 47;
			this->label7->Text = L"TEL. FIXO:";
			// 
			// TextBoxCep
			// 
			this->TextBoxCep->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBoxCep->Location = System::Drawing::Point(259, 301);
			this->TextBoxCep->Mask = L"00,000-000";
			this->TextBoxCep->Name = L"TextBoxCep";
			this->TextBoxCep->Size = System::Drawing::Size(115, 23);
			this->TextBoxCep->TabIndex = 46;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(256, 280);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 18);
			this->label6->TabIndex = 45;
			this->label6->Text = L"CEP:";
			// 
			// textBoxBairro
			// 
			this->textBoxBairro->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxBairro->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxBairro->Location = System::Drawing::Point(78, 301);
			this->textBoxBairro->Name = L"textBoxBairro";
			this->textBoxBairro->Size = System::Drawing::Size(175, 23);
			this->textBoxBairro->TabIndex = 44;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(75, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 18);
			this->label5->TabIndex = 43;
			this->label5->Text = L"BAIRRO:";
			// 
			// textBoxNumCasa
			// 
			this->textBoxNumCasa->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxNumCasa->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNumCasa->Location = System::Drawing::Point(20, 301);
			this->textBoxNumCasa->Name = L"textBoxNumCasa";
			this->textBoxNumCasa->Size = System::Drawing::Size(52, 23);
			this->textBoxNumCasa->TabIndex = 42;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(17, 280);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 18);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Nº:";
			// 
			// textBoxRua
			// 
			this->textBoxRua->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxRua->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxRua->Location = System::Drawing::Point(20, 243);
			this->textBoxRua->Name = L"textBoxRua";
			this->textBoxRua->Size = System::Drawing::Size(354, 23);
			this->textBoxRua->TabIndex = 40;
			// 
			// TextBoxCNPJ
			// 
			this->TextBoxCNPJ->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBoxCNPJ->Location = System::Drawing::Point(20, 134);
			this->TextBoxCNPJ->Mask = L"00,000,000/0000-00";
			this->TextBoxCNPJ->Name = L"TextBoxCNPJ";
			this->TextBoxCNPJ->Size = System::Drawing::Size(145, 23);
			this->TextBoxCNPJ->TabIndex = 38;
			// 
			// textBoxNomeCliente
			// 
			this->textBoxNomeCliente->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxNomeCliente->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNomeCliente->Location = System::Drawing::Point(20, 34);
			this->textBoxNomeCliente->Name = L"textBoxNomeCliente";
			this->textBoxNomeCliente->Size = System::Drawing::Size(354, 23);
			this->textBoxNomeCliente->TabIndex = 37;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(17, 222);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 18);
			this->label3->TabIndex = 36;
			this->label3->Text = L"AV/RUA:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(17, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 18);
			this->label2->TabIndex = 34;
			this->label2->Text = L"CNPJ:";
			// 
			// labelNome
			// 
			this->labelNome->AutoSize = true;
			this->labelNome->BackColor = System::Drawing::Color::Transparent;
			this->labelNome->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNome->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelNome->Location = System::Drawing::Point(17, 13);
			this->labelNome->Name = L"labelNome";
			this->labelNome->Size = System::Drawing::Size(148, 18);
			this->labelNome->TabIndex = 33;
			this->labelNome->Text = L"RAZÃO SOCIAL:";
			// 
			// textBoxNomeFantasia
			// 
			this->textBoxNomeFantasia->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxNomeFantasia->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNomeFantasia->Location = System::Drawing::Point(20, 85);
			this->textBoxNomeFantasia->Name = L"textBoxNomeFantasia";
			this->textBoxNomeFantasia->Size = System::Drawing::Size(354, 23);
			this->textBoxNomeFantasia->TabIndex = 59;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(17, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 18);
			this->label1->TabIndex = 58;
			this->label1->Text = L"NOME FANTASIA:";
			// 
			// TextBoxANVISA
			// 
			this->TextBoxANVISA->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBoxANVISA->Location = System::Drawing::Point(195, 134);
			this->TextBoxANVISA->Mask = L"0,0000,0000,000-0";
			this->TextBoxANVISA->Name = L"TextBoxANVISA";
			this->TextBoxANVISA->Size = System::Drawing::Size(168, 23);
			this->TextBoxANVISA->TabIndex = 61;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(192, 113);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(182, 18);
			this->label10->TabIndex = 60;
			this->label10->Text = L"REGISTRO ANVISA:";
			// 
			// textBoxTIPOPRODUTOSFORN
			// 
			this->textBoxTIPOPRODUTOSFORN->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxTIPOPRODUTOSFORN->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTIPOPRODUTOSFORN->Location = System::Drawing::Point(20, 184);
			this->textBoxTIPOPRODUTOSFORN->Name = L"textBoxTIPOPRODUTOSFORN";
			this->textBoxTIPOPRODUTOSFORN->Size = System::Drawing::Size(354, 23);
			this->textBoxTIPOPRODUTOSFORN->TabIndex = 63;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(17, 163);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(319, 18);
			this->label11->TabIndex = 62;
			this->label11->Text = L"TIPO DE PRUDUTOS FORNECIDOS:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(151, 443);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(90, 62);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 64;
			this->pictureBox1->TabStop = false;
			// 
			// CADASTRO_FORNECEDOR
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(391, 512);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBoxTIPOPRODUTOSFORN);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->TextBoxANVISA);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBoxNomeFantasia);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CancelarCadastrarFornecedor);
			this->Controls->Add(this->CadastrarFornecedor);
			this->Controls->Add(this->textBoxEmail);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->TextBoxMovel);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->TextBoxFixo);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TextBoxCep);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxBairro);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxNumCasa);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxRua);
			this->Controls->Add(this->TextBoxCNPJ);
			this->Controls->Add(this->textBoxNomeCliente);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelNome);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CADASTRO_FORNECEDOR";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SGMB - Cadastro Fornecedores";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CancelarCadastrarFornecedor_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Close();
	}


	private: System::Void CadastrarFornecedor_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 FORNECEDORES *Forn = new FORNECEDORES;
				 DATA_BASE_FORNECEDORES *DB_FORNC = new DATA_BASE_FORNECEDORES;

				 string nome, nomeFant, cnpj, email, rua, numCasa, bairro, cep, fixo, movel, anvisa, tipoProd;
				 String ^NOME, ^NOMEFANT, ^CNPJ, ^EMAIL, ^RUA, ^NUMCASA, ^BAIRRO, ^CEP, ^FIXO, ^MOVEL, ^ANVISA, ^TIPOPROD;

				 NOME = textBoxNomeCliente->Text;
				 nome = msclr::interop::marshal_as<std::string>(NOME);
				 Forn->SET_NOME(nome);

				 NOMEFANT = textBoxNomeFantasia->Text;
				 nomeFant = msclr::interop::marshal_as<std::string>(NOMEFANT);
				 Forn->SET_NOME_FANTASIA(nomeFant);

				 CNPJ = TextBoxCNPJ->Text;
				 cnpj = msclr::interop::marshal_as<std::string>(CNPJ);
				 Forn->SET_CPF_CNPJ(cnpj);

				 ANVISA = TextBoxANVISA->Text;
				 anvisa = msclr::interop::marshal_as<std::string>(ANVISA);
				 Forn->SET_CPF_CNPJ(anvisa);

				 TIPOPROD = textBoxTIPOPRODUTOSFORN->Text;
				 tipoProd = msclr::interop::marshal_as<std::string>(TIPOPROD);
				 Forn->SET_TIPO_DE_PRODUTO_FORNECIDO(tipoProd);

				 RUA = textBoxRua->Text;
				 rua = msclr::interop::marshal_as<std::string>(RUA);

				 NUMCASA = textBoxNumCasa->Text;
				 numCasa = msclr::interop::marshal_as<std::string>(NUMCASA);

				 BAIRRO = textBoxBairro->Text;
				 bairro = msclr::interop::marshal_as<std::string>(BAIRRO);

				 CEP = TextBoxCep->Text;
				 cep = msclr::interop::marshal_as<std::string>(CEP);
				 Forn->SET_ENDERECO(rua, numCasa, bairro, cep);

				 FIXO = TextBoxFixo->Text;
				 fixo = msclr::interop::marshal_as<std::string>(FIXO);
				 Forn->SET_TELEFONE_FIXO(fixo);

				 MOVEL = TextBoxMovel->Text;
				 movel = msclr::interop::marshal_as<std::string>(MOVEL);
				 Forn->SET_TELEFONE_MOVEL(movel);

				 EMAIL = textBoxEmail->Text;
				 email = msclr::interop::marshal_as<std::string>(EMAIL);
				 Forn->SET_EMAIL(email);

				 DB_FORNC->GRAVA_DADOS(Forn);

				 this->Close();

	}
	};
}
