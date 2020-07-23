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
	/// Summary for TelaCadastroCientes
	/// </summary>
	public ref class CADASTRO_CLIENTES : public System::Windows::Forms::Form
	{
	public:
		CADASTRO_CLIENTES(void)
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
		~CADASTRO_CLIENTES()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelNome;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxNomeCliente;
	private: System::Windows::Forms::MaskedTextBox^  TextBoxCpf;
	private: System::Windows::Forms::MaskedTextBox^  TextBoxRg;
	private: System::Windows::Forms::TextBox^  textBoxRua;
	private: System::Windows::Forms::TextBox^  textBoxNumCasa;





	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBoxBairro;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::MaskedTextBox^  TextBoxCep;
	private: System::Windows::Forms::MaskedTextBox^  TextBoxFixo;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::MaskedTextBox^  TextBoxMovel;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBoxEmail;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::RadioButton^  radioButtonMasculino;
	private: System::Windows::Forms::RadioButton^  radioButtonFeminino;
















	private: System::Windows::Forms::Button^  CadastrarCliente;
	private: System::Windows::Forms::Button^  CancelarCadastrarCliente;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CADASTRO_CLIENTES::typeid));
			this->labelNome = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxNomeCliente = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxCpf = (gcnew System::Windows::Forms::MaskedTextBox());
			this->TextBoxRg = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxRua = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumCasa = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxBairro = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TextBoxCep = (gcnew System::Windows::Forms::MaskedTextBox());
			this->TextBoxFixo = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TextBoxMovel = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->radioButtonMasculino = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFeminino = (gcnew System::Windows::Forms::RadioButton());
			this->CadastrarCliente = (gcnew System::Windows::Forms::Button());
			this->CancelarCadastrarCliente = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// labelNome
			// 
			this->labelNome->AutoSize = true;
			this->labelNome->BackColor = System::Drawing::Color::Transparent;
			this->labelNome->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNome->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelNome->Location = System::Drawing::Point(12, 9);
			this->labelNome->Name = L"labelNome";
			this->labelNome->Size = System::Drawing::Size(67, 18);
			this->labelNome->TabIndex = 0;
			this->labelNome->Text = L"NOME:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(12, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CPF:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(217, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"RG:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(12, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"AV/RUA:";
			// 
			// textBoxNomeCliente
			// 
			this->textBoxNomeCliente->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxNomeCliente->Location = System::Drawing::Point(15, 30);
			this->textBoxNomeCliente->Name = L"textBoxNomeCliente";
			this->textBoxNomeCliente->Size = System::Drawing::Size(354, 27);
			this->textBoxNomeCliente->TabIndex = 4;
			// 
			// TextBoxCpf
			// 
			this->TextBoxCpf->Location = System::Drawing::Point(15, 88);
			this->TextBoxCpf->Mask = L"000,000,000-00";
			this->TextBoxCpf->Name = L"TextBoxCpf";
			this->TextBoxCpf->Size = System::Drawing::Size(149, 27);
			this->TextBoxCpf->TabIndex = 5;
			// 
			// TextBoxRg
			// 
			this->TextBoxRg->Location = System::Drawing::Point(220, 88);
			this->TextBoxRg->Mask = L"000,000,000";
			this->TextBoxRg->Name = L"TextBoxRg";
			this->TextBoxRg->Size = System::Drawing::Size(149, 27);
			this->TextBoxRg->TabIndex = 6;
			// 
			// textBoxRua
			// 
			this->textBoxRua->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxRua->Location = System::Drawing::Point(15, 153);
			this->textBoxRua->Name = L"textBoxRua";
			this->textBoxRua->Size = System::Drawing::Size(354, 27);
			this->textBoxRua->TabIndex = 7;
			// 
			// textBoxNumCasa
			// 
			this->textBoxNumCasa->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxNumCasa->Location = System::Drawing::Point(15, 211);
			this->textBoxNumCasa->Name = L"textBoxNumCasa";
			this->textBoxNumCasa->Size = System::Drawing::Size(52, 27);
			this->textBoxNumCasa->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(12, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 18);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Nº:";
			// 
			// textBoxBairro
			// 
			this->textBoxBairro->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxBairro->Location = System::Drawing::Point(73, 211);
			this->textBoxBairro->Name = L"textBoxBairro";
			this->textBoxBairro->Size = System::Drawing::Size(175, 27);
			this->textBoxBairro->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(70, 190);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"BAIRRO:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(251, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 18);
			this->label6->TabIndex = 12;
			this->label6->Text = L"CEP:";
			// 
			// TextBoxCep
			// 
			this->TextBoxCep->Location = System::Drawing::Point(254, 211);
			this->TextBoxCep->Mask = L"00,000-000";
			this->TextBoxCep->Name = L"TextBoxCep";
			this->TextBoxCep->Size = System::Drawing::Size(115, 27);
			this->TextBoxCep->TabIndex = 13;
			// 
			// TextBoxFixo
			// 
			this->TextBoxFixo->Location = System::Drawing::Point(15, 272);
			this->TextBoxFixo->Mask = L"(00) 0000-0000";
			this->TextBoxFixo->Name = L"TextBoxFixo";
			this->TextBoxFixo->Size = System::Drawing::Size(141, 27);
			this->TextBoxFixo->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(12, 251);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 18);
			this->label7->TabIndex = 14;
			this->label7->Text = L"TEL. FIXO:";
			// 
			// TextBoxMovel
			// 
			this->TextBoxMovel->Location = System::Drawing::Point(162, 272);
			this->TextBoxMovel->Mask = L"(00) 0-0000-0000";
			this->TextBoxMovel->Name = L"TextBoxMovel";
			this->TextBoxMovel->Size = System::Drawing::Size(157, 27);
			this->TextBoxMovel->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(159, 251);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(139, 18);
			this->label8->TabIndex = 16;
			this->label8->Text = L"TEL. CELULAR:";
			// 
			// textBoxEmail
			// 
			this->textBoxEmail->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxEmail->Location = System::Drawing::Point(15, 333);
			this->textBoxEmail->Name = L"textBoxEmail";
			this->textBoxEmail->Size = System::Drawing::Size(354, 27);
			this->textBoxEmail->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(12, 312);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 18);
			this->label9->TabIndex = 18;
			this->label9->Text = L"EMAIL:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(12, 375);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 18);
			this->label10->TabIndex = 20;
			this->label10->Text = L"SEXO:";
			// 
			// radioButtonMasculino
			// 
			this->radioButtonMasculino->AutoSize = true;
			this->radioButtonMasculino->BackColor = System::Drawing::Color::Transparent;
			this->radioButtonMasculino->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonMasculino->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButtonMasculino->Location = System::Drawing::Point(80, 373);
			this->radioButtonMasculino->Name = L"radioButtonMasculino";
			this->radioButtonMasculino->Size = System::Drawing::Size(134, 22);
			this->radioButtonMasculino->TabIndex = 21;
			this->radioButtonMasculino->TabStop = true;
			this->radioButtonMasculino->Text = L"MASCULINO";
			this->radioButtonMasculino->UseVisualStyleBackColor = false;
			// 
			// radioButtonFeminino
			// 
			this->radioButtonFeminino->AutoSize = true;
			this->radioButtonFeminino->BackColor = System::Drawing::Color::Transparent;
			this->radioButtonFeminino->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonFeminino->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButtonFeminino->Location = System::Drawing::Point(220, 373);
			this->radioButtonFeminino->Name = L"radioButtonFeminino";
			this->radioButtonFeminino->Size = System::Drawing::Size(118, 22);
			this->radioButtonFeminino->TabIndex = 22;
			this->radioButtonFeminino->TabStop = true;
			this->radioButtonFeminino->Text = L"FEMININO";
			this->radioButtonFeminino->UseVisualStyleBackColor = false;
			// 
			// CadastrarCliente
			// 
			this->CadastrarCliente->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->CadastrarCliente->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CadastrarCliente->Location = System::Drawing::Point(12, 401);
			this->CadastrarCliente->Name = L"CadastrarCliente";
			this->CadastrarCliente->Size = System::Drawing::Size(131, 30);
			this->CadastrarCliente->TabIndex = 31;
			this->CadastrarCliente->Text = L"CADASTRAR";
			this->CadastrarCliente->UseVisualStyleBackColor = true;
			this->CadastrarCliente->Click += gcnew System::EventHandler(this, &CADASTRO_CLIENTES::button1_Click);
			// 
			// CancelarCadastrarCliente
			// 
			this->CancelarCadastrarCliente->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->CancelarCadastrarCliente->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelarCadastrarCliente->Location = System::Drawing::Point(238, 401);
			this->CancelarCadastrarCliente->Name = L"CancelarCadastrarCliente";
			this->CancelarCadastrarCliente->Size = System::Drawing::Size(131, 30);
			this->CancelarCadastrarCliente->TabIndex = 32;
			this->CancelarCadastrarCliente->Text = L"CANCELAR";
			this->CancelarCadastrarCliente->UseVisualStyleBackColor = true;
			this->CancelarCadastrarCliente->Click += gcnew System::EventHandler(this, &CADASTRO_CLIENTES::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(146, 399);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(88, 75);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			// 
			// CADASTRO_CLIENTES
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(391, 475);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->CancelarCadastrarCliente);
			this->Controls->Add(this->CadastrarCliente);
			this->Controls->Add(this->radioButtonFeminino);
			this->Controls->Add(this->radioButtonMasculino);
			this->Controls->Add(this->label10);
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
			this->Controls->Add(this->TextBoxRg);
			this->Controls->Add(this->TextBoxCpf);
			this->Controls->Add(this->textBoxNomeCliente);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelNome);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CADASTRO_CLIENTES";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SGMB - Cadastro de Clientes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Close();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 CLIENTES *Cli = new CLIENTES;
				 DATA_BASE_CLIENTES *DB_CLIENTES = new DATA_BASE_CLIENTES;

				 string nome, cpf, rg, sexo, email, rua, numCasa, bairro, cep, fixo, movel;
				 String ^NOME, ^CPF, ^RG, ^SEXO, ^EMAIL, ^RUA, ^NUMCASA, ^BAIRRO, ^CEP, ^FIXO, ^MOVEL;

				 NOME = textBoxNomeCliente->Text;
				 nome = msclr::interop::marshal_as<std::string>(NOME);
				 Cli->SET_NOME(nome);

				 CPF = TextBoxCpf->Text;
				 cpf = msclr::interop::marshal_as<std::string>(CPF);
				 Cli->SET_CPF_CNPJ(cpf);

				 RG = TextBoxRg->Text;
				 rg = msclr::interop::marshal_as<std::string>(RG);
				 Cli->SET_RG(rg);

				 if (radioButtonMasculino->Checked)
				 {
					 SEXO = "MASCULINO";
				 }
				 else if (radioButtonFeminino)
				 {
					 SEXO = "FEMININO";
				 }
				 sexo = msclr::interop::marshal_as<std::string>(SEXO);
				 Cli->SET_SEXO(sexo);

				 RUA = textBoxRua->Text;
				 rua = msclr::interop::marshal_as<std::string>(RUA);

				 NUMCASA = textBoxNumCasa->Text;
				 numCasa = msclr::interop::marshal_as<std::string>(NUMCASA);

				 BAIRRO = textBoxBairro->Text;
				 bairro = msclr::interop::marshal_as<std::string>(BAIRRO);

				 CEP = TextBoxCep->Text;
				 cep = msclr::interop::marshal_as<std::string>(CEP);
				 Cli->SET_ENDERECO(rua, numCasa, bairro, cep);

				 FIXO = TextBoxFixo->Text;
				 fixo = msclr::interop::marshal_as<std::string>(FIXO);
				 Cli->SET_TELEFONE_FIXO(fixo);

				 MOVEL = TextBoxMovel->Text;
				 movel = msclr::interop::marshal_as<std::string>(MOVEL);
				 Cli->SET_TELEFONE_MOVEL(movel);

				 EMAIL = textBoxEmail->Text;
				 email = msclr::interop::marshal_as<std::string>(EMAIL);
				 Cli->SET_EMAIL(email);

				 DB_CLIENTES->GRAVA_DADOS(Cli);

				 this->Close();

	}
	};
}
