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
	/// Summary for CADASTRO_PERFUMARIA
	/// </summary>
	public ref class CADASTRO_PERFUMARIA : public System::Windows::Forms::Form
	{
	public:
		CADASTRO_PERFUMARIA(void)
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
		~CADASTRO_PERFUMARIA()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^  textBoxAnvisaPERFUM;
	protected:
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxQntdCaixaPERFUM;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxNumCaixasPERFUM;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxPRECOPERFUM;
	private: System::Windows::Forms::Button^  buttonCancelarCadPERFUM;
	private: System::Windows::Forms::Button^  buttonCadastrarPERFUM;
	private: System::Windows::Forms::TextBox^  textBoxReferenciaPERFUM;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::TextBox^  textBoxMarcaPERFUM;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxTipoPERFUM;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxNomePERFUM;
	private: System::Windows::Forms::Label^  labelNome;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CADASTRO_PERFUMARIA::typeid));
			this->textBoxAnvisaPERFUM = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxQntdCaixaPERFUM = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumCaixasPERFUM = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxPRECOPERFUM = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonCancelarCadPERFUM = (gcnew System::Windows::Forms::Button());
			this->buttonCadastrarPERFUM = (gcnew System::Windows::Forms::Button());
			this->textBoxReferenciaPERFUM = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxMarcaPERFUM = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTipoPERFUM = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxNomePERFUM = (gcnew System::Windows::Forms::TextBox());
			this->labelNome = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxAnvisaPERFUM
			// 
			this->textBoxAnvisaPERFUM->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAnvisaPERFUM->Location = System::Drawing::Point(305, 32);
			this->textBoxAnvisaPERFUM->Mask = L"0,0000,0000,000-0";
			this->textBoxAnvisaPERFUM->Name = L"textBoxAnvisaPERFUM";
			this->textBoxAnvisaPERFUM->Size = System::Drawing::Size(268, 27);
			this->textBoxAnvisaPERFUM->TabIndex = 107;
			// 
			// maskedTextBoxQntdCaixaPERFUM
			// 
			this->maskedTextBoxQntdCaixaPERFUM->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxQntdCaixaPERFUM->Location = System::Drawing::Point(445, 157);
			this->maskedTextBoxQntdCaixaPERFUM->Name = L"maskedTextBoxQntdCaixaPERFUM";
			this->maskedTextBoxQntdCaixaPERFUM->Size = System::Drawing::Size(132, 27);
			this->maskedTextBoxQntdCaixaPERFUM->TabIndex = 106;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(442, 136);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(171, 18);
			this->label9->TabIndex = 105;
			this->label9->Text = L"QNTD POR CAIXA:";
			// 
			// maskedTextBoxNumCaixasPERFUM
			// 
			this->maskedTextBoxNumCaixasPERFUM->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxNumCaixasPERFUM->Location = System::Drawing::Point(304, 157);
			this->maskedTextBoxNumCaixasPERFUM->Name = L"maskedTextBoxNumCaixasPERFUM";
			this->maskedTextBoxNumCaixasPERFUM->Size = System::Drawing::Size(132, 27);
			this->maskedTextBoxNumCaixasPERFUM->TabIndex = 104;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(301, 136);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 18);
			this->label8->TabIndex = 103;
			this->label8->Text = L"Nº CAIXAS:";
			// 
			// maskedTextBoxPRECOPERFUM
			// 
			this->maskedTextBoxPRECOPERFUM->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxPRECOPERFUM->Location = System::Drawing::Point(304, 94);
			this->maskedTextBoxPRECOPERFUM->Name = L"maskedTextBoxPRECOPERFUM";
			this->maskedTextBoxPRECOPERFUM->Size = System::Drawing::Size(100, 27);
			this->maskedTextBoxPRECOPERFUM->TabIndex = 102;
			// 
			// buttonCancelarCadPERFUM
			// 
			this->buttonCancelarCadPERFUM->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancelarCadPERFUM->Location = System::Drawing::Point(316, 198);
			this->buttonCancelarCadPERFUM->Name = L"buttonCancelarCadPERFUM";
			this->buttonCancelarCadPERFUM->Size = System::Drawing::Size(145, 32);
			this->buttonCancelarCadPERFUM->TabIndex = 101;
			this->buttonCancelarCadPERFUM->Text = L"CANCELAR";
			this->buttonCancelarCadPERFUM->UseVisualStyleBackColor = true;
			this->buttonCancelarCadPERFUM->Click += gcnew System::EventHandler(this, &CADASTRO_PERFUMARIA::buttonCancelarCadPERFUM_Click);
			// 
			// buttonCadastrarPERFUM
			// 
			this->buttonCadastrarPERFUM->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCadastrarPERFUM->Location = System::Drawing::Point(147, 199);
			this->buttonCadastrarPERFUM->Name = L"buttonCadastrarPERFUM";
			this->buttonCadastrarPERFUM->Size = System::Drawing::Size(145, 32);
			this->buttonCadastrarPERFUM->TabIndex = 100;
			this->buttonCadastrarPERFUM->Text = L"CADASTRAR";
			this->buttonCadastrarPERFUM->UseVisualStyleBackColor = true;
			this->buttonCadastrarPERFUM->Click += gcnew System::EventHandler(this, &CADASTRO_PERFUMARIA::buttonCadastrarPERFUM_Click);
			// 
			// textBoxReferenciaPERFUM
			// 
			this->textBoxReferenciaPERFUM->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxReferenciaPERFUM->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxReferenciaPERFUM->Location = System::Drawing::Point(426, 94);
			this->textBoxReferenciaPERFUM->Name = L"textBoxReferenciaPERFUM";
			this->textBoxReferenciaPERFUM->Size = System::Drawing::Size(147, 27);
			this->textBoxReferenciaPERFUM->TabIndex = 99;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(423, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 18);
			this->label7->TabIndex = 98;
			this->label7->Text = L"REFERÊNCIA:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(301, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 18);
			this->label6->TabIndex = 97;
			this->label6->Text = L"PREÇO R$:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(301, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 18);
			this->label5->TabIndex = 96;
			this->label5->Text = L"REGISTRO ANVISA:";
			// 
			// textBoxMarcaPERFUM
			// 
			this->textBoxMarcaPERFUM->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxMarcaPERFUM->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMarcaPERFUM->Location = System::Drawing::Point(12, 156);
			this->textBoxMarcaPERFUM->Name = L"textBoxMarcaPERFUM";
			this->textBoxMarcaPERFUM->Size = System::Drawing::Size(271, 27);
			this->textBoxMarcaPERFUM->TabIndex = 93;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(9, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 18);
			this->label3->TabIndex = 92;
			this->label3->Text = L"MARCA:";
			// 
			// textBoxTipoPERFUM
			// 
			this->textBoxTipoPERFUM->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxTipoPERFUM->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTipoPERFUM->Location = System::Drawing::Point(12, 94);
			this->textBoxTipoPERFUM->Name = L"textBoxTipoPERFUM";
			this->textBoxTipoPERFUM->Size = System::Drawing::Size(271, 27);
			this->textBoxTipoPERFUM->TabIndex = 91;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(9, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 18);
			this->label2->TabIndex = 90;
			this->label2->Text = L"TIPO:";
			// 
			// textBoxNomePERFUM
			// 
			this->textBoxNomePERFUM->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxNomePERFUM->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNomePERFUM->Location = System::Drawing::Point(12, 32);
			this->textBoxNomePERFUM->Name = L"textBoxNomePERFUM";
			this->textBoxNomePERFUM->Size = System::Drawing::Size(271, 27);
			this->textBoxNomePERFUM->TabIndex = 87;
			// 
			// labelNome
			// 
			this->labelNome->AutoSize = true;
			this->labelNome->BackColor = System::Drawing::Color::Transparent;
			this->labelNome->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNome->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelNome->Location = System::Drawing::Point(9, 11);
			this->labelNome->Name = L"labelNome";
			this->labelNome->Size = System::Drawing::Size(195, 18);
			this->labelNome->TabIndex = 86;
			this->labelNome->Text = L"NOME DO PRODUTO:";
			// 
			// CADASTRO_PERFUMARIA
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(637, 243);
			this->Controls->Add(this->textBoxAnvisaPERFUM);
			this->Controls->Add(this->maskedTextBoxQntdCaixaPERFUM);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->maskedTextBoxNumCaixasPERFUM);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->maskedTextBoxPRECOPERFUM);
			this->Controls->Add(this->buttonCancelarCadPERFUM);
			this->Controls->Add(this->buttonCadastrarPERFUM);
			this->Controls->Add(this->textBoxReferenciaPERFUM);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxMarcaPERFUM);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxTipoPERFUM);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxNomePERFUM);
			this->Controls->Add(this->labelNome);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CADASTRO_PERFUMARIA";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SGMB - Cadastro de Perfumarias";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCancelarCadPERFUM_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Close();
	}
	private: System::Void buttonCadastrarPERFUM_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 PERFUMARIA *Perfum = new PERFUMARIA;
				 DATA_BASE_PERFUMARIA *DB_PERFUM = new DATA_BASE_PERFUMARIA;

				 String ^NomeProd, ^Marca, ^RegistroAnvisa, ^Referencia, ^Tipo, ^Preco, ^NumCaixas, ^QntdCaixa;
				 string nomeProd, marca, registroAnvisa, referencia, tipo, preco, numCaixas, qntdCaixa;
				 float PRECO = 0.0;
				 int numcaixas = 0, qntdcaixas = 0, qntdestoque = 0;

				 NomeProd = textBoxNomePERFUM->Text;
				 nomeProd = msclr::interop::marshal_as<std::string>(NomeProd);
				 Perfum->SET_NOME_PRODUTO(nomeProd);//

				 Marca = textBoxMarcaPERFUM->Text;
				 marca = msclr::interop::marshal_as<std::string>(Marca);
				 Perfum->SET_MARCA(marca);//

				 RegistroAnvisa = textBoxAnvisaPERFUM->Text;
				 registroAnvisa = msclr::interop::marshal_as<std::string>(RegistroAnvisa);
				 Perfum->SET_REGISTRO_ANVISA(registroAnvisa);//

				 Referencia = textBoxReferenciaPERFUM->Text;
				 referencia = msclr::interop::marshal_as<std::string>(Referencia);
				 Perfum->SET_REFERENCIA(referencia);//

				 Tipo = textBoxTipoPERFUM->Text;
				 tipo = msclr::interop::marshal_as<std::string>(Tipo);
				 Perfum->SET_TIPO_PRODUTO(tipo);//

				 string::size_type Size_Float;
				 Preco = maskedTextBoxPRECOPERFUM->Text;
				 preco = msclr::interop::marshal_as<std::string>(Preco);
				 PRECO = stof(preco, &Size_Float);
				 Perfum->SET_PRECO(PRECO);

				 string::size_type Size_Int1;
				 NumCaixas = maskedTextBoxNumCaixasPERFUM->Text;
				 numCaixas = msclr::interop::marshal_as<std::string>(NumCaixas);
				 numcaixas = stoi(numCaixas, &Size_Int1);

				 string::size_type Size_Int2;
				 QntdCaixa = maskedTextBoxQntdCaixaPERFUM->Text;
				 qntdCaixa = msclr::interop::marshal_as<std::string>(QntdCaixa);
				 qntdcaixas = stoi(qntdCaixa, &Size_Int2);

				 qntdestoque = (numcaixas * qntdcaixas);
				 Perfum->SET_QNTD_ESTOQUE(qntdestoque);

				 DB_PERFUM->GRAVA_DADOS(Perfum);

				 this->Close();
	}
	};
}
