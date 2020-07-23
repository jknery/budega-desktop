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
	/// Summary for CADASTRO_PRODUTOS_SAUDE
	/// </summary>
	public ref class CADASTRO_PRODUTOS_SAUDE : public System::Windows::Forms::Form
	{
	public:
		CADASTRO_PRODUTOS_SAUDE(void)
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
		~CADASTRO_PRODUTOS_SAUDE()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^  textBoxAnvisaSAUDE;
	protected:
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxQntdCaixaSAUDE;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxNumCaixasSAUDE;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxPRECOSAUDE;
	private: System::Windows::Forms::Button^  buttonCancelarCadSAUDE;
	private: System::Windows::Forms::Button^  buttonCadastrarSAUDE;
	private: System::Windows::Forms::TextBox^  textBoxReferenciaSAUDE;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::TextBox^  textBoxMarcaSAUDE;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxTipoSAUDE;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::TextBox^  textBoxNomeSAUDE;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CADASTRO_PRODUTOS_SAUDE::typeid));
			this->textBoxAnvisaSAUDE = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxQntdCaixaSAUDE = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumCaixasSAUDE = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxPRECOSAUDE = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonCancelarCadSAUDE = (gcnew System::Windows::Forms::Button());
			this->buttonCadastrarSAUDE = (gcnew System::Windows::Forms::Button());
			this->textBoxReferenciaSAUDE = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxMarcaSAUDE = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTipoSAUDE = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxNomeSAUDE = (gcnew System::Windows::Forms::TextBox());
			this->labelNome = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxAnvisaSAUDE
			// 
			this->textBoxAnvisaSAUDE->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAnvisaSAUDE->Location = System::Drawing::Point(308, 30);
			this->textBoxAnvisaSAUDE->Mask = L"0,0000,0000,000-0";
			this->textBoxAnvisaSAUDE->Name = L"textBoxAnvisaSAUDE";
			this->textBoxAnvisaSAUDE->Size = System::Drawing::Size(308, 27);
			this->textBoxAnvisaSAUDE->TabIndex = 107;
			// 
			// maskedTextBoxQntdCaixaSAUDE
			// 
			this->maskedTextBoxQntdCaixaSAUDE->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxQntdCaixaSAUDE->Location = System::Drawing::Point(448, 153);
			this->maskedTextBoxQntdCaixaSAUDE->Name = L"maskedTextBoxQntdCaixaSAUDE";
			this->maskedTextBoxQntdCaixaSAUDE->Size = System::Drawing::Size(168, 27);
			this->maskedTextBoxQntdCaixaSAUDE->TabIndex = 106;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(445, 132);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(171, 18);
			this->label9->TabIndex = 105;
			this->label9->Text = L"QNTD POR CAIXA:";
			// 
			// maskedTextBoxNumCaixasSAUDE
			// 
			this->maskedTextBoxNumCaixasSAUDE->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxNumCaixasSAUDE->Location = System::Drawing::Point(307, 153);
			this->maskedTextBoxNumCaixasSAUDE->Name = L"maskedTextBoxNumCaixasSAUDE";
			this->maskedTextBoxNumCaixasSAUDE->Size = System::Drawing::Size(132, 27);
			this->maskedTextBoxNumCaixasSAUDE->TabIndex = 104;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(304, 132);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 18);
			this->label8->TabIndex = 103;
			this->label8->Text = L"Nº CAIXAS:";
			// 
			// maskedTextBoxPRECOSAUDE
			// 
			this->maskedTextBoxPRECOSAUDE->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxPRECOSAUDE->Location = System::Drawing::Point(307, 90);
			this->maskedTextBoxPRECOSAUDE->Name = L"maskedTextBoxPRECOSAUDE";
			this->maskedTextBoxPRECOSAUDE->Size = System::Drawing::Size(100, 27);
			this->maskedTextBoxPRECOSAUDE->TabIndex = 102;
			// 
			// buttonCancelarCadSAUDE
			// 
			this->buttonCancelarCadSAUDE->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancelarCadSAUDE->Location = System::Drawing::Point(477, 194);
			this->buttonCancelarCadSAUDE->Name = L"buttonCancelarCadSAUDE";
			this->buttonCancelarCadSAUDE->Size = System::Drawing::Size(139, 32);
			this->buttonCancelarCadSAUDE->TabIndex = 101;
			this->buttonCancelarCadSAUDE->Text = L"CANCELAR";
			this->buttonCancelarCadSAUDE->UseVisualStyleBackColor = true;
			this->buttonCancelarCadSAUDE->Click += gcnew System::EventHandler(this, &CADASTRO_PRODUTOS_SAUDE::buttonCancelarCadSAUDE_Click);
			// 
			// buttonCadastrarSAUDE
			// 
			this->buttonCadastrarSAUDE->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCadastrarSAUDE->Location = System::Drawing::Point(308, 194);
			this->buttonCadastrarSAUDE->Name = L"buttonCadastrarSAUDE";
			this->buttonCadastrarSAUDE->Size = System::Drawing::Size(131, 32);
			this->buttonCadastrarSAUDE->TabIndex = 100;
			this->buttonCadastrarSAUDE->Text = L"CADASTRAR";
			this->buttonCadastrarSAUDE->UseVisualStyleBackColor = true;
			this->buttonCadastrarSAUDE->Click += gcnew System::EventHandler(this, &CADASTRO_PRODUTOS_SAUDE::buttonCadastrarSAUDE_Click);
			// 
			// textBoxReferenciaSAUDE
			// 
			this->textBoxReferenciaSAUDE->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxReferenciaSAUDE->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxReferenciaSAUDE->Location = System::Drawing::Point(429, 90);
			this->textBoxReferenciaSAUDE->Name = L"textBoxReferenciaSAUDE";
			this->textBoxReferenciaSAUDE->Size = System::Drawing::Size(187, 27);
			this->textBoxReferenciaSAUDE->TabIndex = 99;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(426, 69);
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
			this->label6->Location = System::Drawing::Point(304, 69);
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
			this->label5->Location = System::Drawing::Point(304, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 18);
			this->label5->TabIndex = 96;
			this->label5->Text = L"REGISTRO ANVISA:";
			// 
			// textBoxMarcaSAUDE
			// 
			this->textBoxMarcaSAUDE->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxMarcaSAUDE->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMarcaSAUDE->Location = System::Drawing::Point(15, 153);
			this->textBoxMarcaSAUDE->Name = L"textBoxMarcaSAUDE";
			this->textBoxMarcaSAUDE->Size = System::Drawing::Size(271, 27);
			this->textBoxMarcaSAUDE->TabIndex = 93;
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
			this->label3->Size = System::Drawing::Size(78, 18);
			this->label3->TabIndex = 92;
			this->label3->Text = L"MARCA:";
			// 
			// textBoxTipoSAUDE
			// 
			this->textBoxTipoSAUDE->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxTipoSAUDE->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTipoSAUDE->Location = System::Drawing::Point(15, 91);
			this->textBoxTipoSAUDE->Name = L"textBoxTipoSAUDE";
			this->textBoxTipoSAUDE->Size = System::Drawing::Size(271, 27);
			this->textBoxTipoSAUDE->TabIndex = 91;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(12, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 18);
			this->label2->TabIndex = 90;
			this->label2->Text = L"TIPO:";
			// 
			// textBoxNomeSAUDE
			// 
			this->textBoxNomeSAUDE->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxNomeSAUDE->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNomeSAUDE->Location = System::Drawing::Point(15, 30);
			this->textBoxNomeSAUDE->Name = L"textBoxNomeSAUDE";
			this->textBoxNomeSAUDE->Size = System::Drawing::Size(271, 27);
			this->textBoxNomeSAUDE->TabIndex = 87;
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
			this->labelNome->Size = System::Drawing::Size(195, 18);
			this->labelNome->TabIndex = 86;
			this->labelNome->Text = L"NOME DO PRODUTO:";
			// 
			// CADASTRO_PRODUTOS_SAUDE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(649, 244);
			this->Controls->Add(this->textBoxAnvisaSAUDE);
			this->Controls->Add(this->maskedTextBoxQntdCaixaSAUDE);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->maskedTextBoxNumCaixasSAUDE);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->maskedTextBoxPRECOSAUDE);
			this->Controls->Add(this->buttonCancelarCadSAUDE);
			this->Controls->Add(this->buttonCadastrarSAUDE);
			this->Controls->Add(this->textBoxReferenciaSAUDE);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxMarcaSAUDE);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxTipoSAUDE);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxNomeSAUDE);
			this->Controls->Add(this->labelNome);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CADASTRO_PRODUTOS_SAUDE";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SGMB - Cadastro de Produtos de Saúde";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCadastrarSAUDE_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 PRODUTOS_SAUDE *SAUDE = new PRODUTOS_SAUDE;
				 DATA_BASE_PROD_SAUDE *DB_SAUDE = new DATA_BASE_PROD_SAUDE;

				 String ^NomeProd, ^Marca, ^RegistroAnvisa, ^Referencia, ^Tipo, ^Preco, ^NumCaixas, ^QntdCaixa;
				 string nomeProd, marca, registroAnvisa, referencia, tipo, preco, numCaixas, qntdCaixa;
				 float PRECO = 0.0;
				 int numcaixas = 0, qntdcaixas = 0, qntdestoque = 0;

				 NomeProd = textBoxNomeSAUDE->Text;
				 nomeProd = msclr::interop::marshal_as<std::string>(NomeProd);
				 SAUDE->SET_NOME_PRODUTO(nomeProd);//

				 Marca = textBoxMarcaSAUDE->Text;
				 marca = msclr::interop::marshal_as<std::string>(Marca);
				 SAUDE->SET_MARCA(marca);//

				 RegistroAnvisa = textBoxAnvisaSAUDE->Text;
				 registroAnvisa = msclr::interop::marshal_as<std::string>(RegistroAnvisa);
				 SAUDE->SET_REGISTRO_ANVISA(registroAnvisa);//

				 Referencia = textBoxReferenciaSAUDE->Text;
				 referencia = msclr::interop::marshal_as<std::string>(Referencia);
				 SAUDE->SET_REFERENCIA(referencia);//

				 Tipo = textBoxTipoSAUDE->Text;
				 tipo = msclr::interop::marshal_as<std::string>(Tipo);
				 SAUDE->SET_TIPO_PRODUTO(tipo);//

				 string::size_type Size_Float;
				 Preco = maskedTextBoxPRECOSAUDE->Text;
				 preco = msclr::interop::marshal_as<std::string>(Preco);
				 PRECO = stof(preco, &Size_Float);
				 SAUDE->SET_PRECO(PRECO);

				 string::size_type Size_Int1;
				 NumCaixas = maskedTextBoxNumCaixasSAUDE->Text;
				 numCaixas = msclr::interop::marshal_as<std::string>(NumCaixas);
				 numcaixas = stoi(numCaixas, &Size_Int1);

				 string::size_type Size_Int2;
				 QntdCaixa = maskedTextBoxQntdCaixaSAUDE->Text;
				 qntdCaixa = msclr::interop::marshal_as<std::string>(QntdCaixa);
				 qntdcaixas = stoi(qntdCaixa, &Size_Int2);

				 qntdestoque = (numcaixas * qntdcaixas);
				 SAUDE->SET_QNTD_ESTOQUE(qntdestoque);

				 DB_SAUDE->GRAVA_DADOS(SAUDE);

				 this->Close();

	}
	private: System::Void buttonCancelarCadSAUDE_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Close();
	}
	};
}
