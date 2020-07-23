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
	/// Summary for CADASTRO_SANEANTES
	/// </summary>
	public ref class CADASTRO_SANEANTES : public System::Windows::Forms::Form
	{
	public:
		CADASTRO_SANEANTES(void)
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
		~CADASTRO_SANEANTES()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^  textBoxAnvisaSANEANTES;
	protected:
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxQntdCaixaSANEANTES;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxNumCaixasSANEANTES;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxPRECOSANEANTES;
	private: System::Windows::Forms::Button^  buttonCancelarCadSANEANTES;
	private: System::Windows::Forms::Button^  buttonCadastrarSANEANTES;
	private: System::Windows::Forms::TextBox^  textBoxReferenciaSANEANTES;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::TextBox^  textBoxMarcaSANEANTES;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxTipoSANEANTES;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::TextBox^  textBoxNomeSANEANTES;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CADASTRO_SANEANTES::typeid));
			this->textBoxAnvisaSANEANTES = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxQntdCaixaSANEANTES = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumCaixasSANEANTES = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxPRECOSANEANTES = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonCancelarCadSANEANTES = (gcnew System::Windows::Forms::Button());
			this->buttonCadastrarSANEANTES = (gcnew System::Windows::Forms::Button());
			this->textBoxReferenciaSANEANTES = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxMarcaSANEANTES = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTipoSANEANTES = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxNomeSANEANTES = (gcnew System::Windows::Forms::TextBox());
			this->labelNome = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxAnvisaSANEANTES
			// 
			this->textBoxAnvisaSANEANTES->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAnvisaSANEANTES->Location = System::Drawing::Point(308, 30);
			this->textBoxAnvisaSANEANTES->Mask = L"0,0000,0000,000-0";
			this->textBoxAnvisaSANEANTES->Name = L"textBoxAnvisaSANEANTES";
			this->textBoxAnvisaSANEANTES->Size = System::Drawing::Size(308, 27);
			this->textBoxAnvisaSANEANTES->TabIndex = 129;
			// 
			// maskedTextBoxQntdCaixaSANEANTES
			// 
			this->maskedTextBoxQntdCaixaSANEANTES->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxQntdCaixaSANEANTES->Location = System::Drawing::Point(448, 153);
			this->maskedTextBoxQntdCaixaSANEANTES->Name = L"maskedTextBoxQntdCaixaSANEANTES";
			this->maskedTextBoxQntdCaixaSANEANTES->Size = System::Drawing::Size(168, 27);
			this->maskedTextBoxQntdCaixaSANEANTES->TabIndex = 128;
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
			this->label9->TabIndex = 127;
			this->label9->Text = L"QNTD POR CAIXA:";
			// 
			// maskedTextBoxNumCaixasSANEANTES
			// 
			this->maskedTextBoxNumCaixasSANEANTES->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxNumCaixasSANEANTES->Location = System::Drawing::Point(307, 153);
			this->maskedTextBoxNumCaixasSANEANTES->Name = L"maskedTextBoxNumCaixasSANEANTES";
			this->maskedTextBoxNumCaixasSANEANTES->Size = System::Drawing::Size(132, 27);
			this->maskedTextBoxNumCaixasSANEANTES->TabIndex = 126;
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
			this->label8->TabIndex = 125;
			this->label8->Text = L"Nº CAIXAS:";
			// 
			// maskedTextBoxPRECOSANEANTES
			// 
			this->maskedTextBoxPRECOSANEANTES->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxPRECOSANEANTES->Location = System::Drawing::Point(307, 90);
			this->maskedTextBoxPRECOSANEANTES->Name = L"maskedTextBoxPRECOSANEANTES";
			this->maskedTextBoxPRECOSANEANTES->Size = System::Drawing::Size(100, 27);
			this->maskedTextBoxPRECOSANEANTES->TabIndex = 124;
			// 
			// buttonCancelarCadSANEANTES
			// 
			this->buttonCancelarCadSANEANTES->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancelarCadSANEANTES->Location = System::Drawing::Point(477, 194);
			this->buttonCancelarCadSANEANTES->Name = L"buttonCancelarCadSANEANTES";
			this->buttonCancelarCadSANEANTES->Size = System::Drawing::Size(139, 32);
			this->buttonCancelarCadSANEANTES->TabIndex = 123;
			this->buttonCancelarCadSANEANTES->Text = L"CANCELAR";
			this->buttonCancelarCadSANEANTES->UseVisualStyleBackColor = true;
			this->buttonCancelarCadSANEANTES->Click += gcnew System::EventHandler(this, &CADASTRO_SANEANTES::buttonCancelarCadSANEANTES_Click);
			// 
			// buttonCadastrarSANEANTES
			// 
			this->buttonCadastrarSANEANTES->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCadastrarSANEANTES->Location = System::Drawing::Point(308, 194);
			this->buttonCadastrarSANEANTES->Name = L"buttonCadastrarSANEANTES";
			this->buttonCadastrarSANEANTES->Size = System::Drawing::Size(131, 32);
			this->buttonCadastrarSANEANTES->TabIndex = 122;
			this->buttonCadastrarSANEANTES->Text = L"CADASTRAR";
			this->buttonCadastrarSANEANTES->UseVisualStyleBackColor = true;
			this->buttonCadastrarSANEANTES->Click += gcnew System::EventHandler(this, &CADASTRO_SANEANTES::buttonCadastrarSANEANTES_Click);
			// 
			// textBoxReferenciaSANEANTES
			// 
			this->textBoxReferenciaSANEANTES->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxReferenciaSANEANTES->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxReferenciaSANEANTES->Location = System::Drawing::Point(429, 90);
			this->textBoxReferenciaSANEANTES->Name = L"textBoxReferenciaSANEANTES";
			this->textBoxReferenciaSANEANTES->Size = System::Drawing::Size(187, 27);
			this->textBoxReferenciaSANEANTES->TabIndex = 121;
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
			this->label7->TabIndex = 120;
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
			this->label6->TabIndex = 119;
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
			this->label5->TabIndex = 118;
			this->label5->Text = L"REGISTRO ANVISA:";
			// 
			// textBoxMarcaSANEANTES
			// 
			this->textBoxMarcaSANEANTES->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxMarcaSANEANTES->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMarcaSANEANTES->Location = System::Drawing::Point(15, 152);
			this->textBoxMarcaSANEANTES->Name = L"textBoxMarcaSANEANTES";
			this->textBoxMarcaSANEANTES->Size = System::Drawing::Size(271, 27);
			this->textBoxMarcaSANEANTES->TabIndex = 115;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(12, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 18);
			this->label3->TabIndex = 114;
			this->label3->Text = L"MARCA:";
			// 
			// textBoxTipoSANEANTES
			// 
			this->textBoxTipoSANEANTES->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxTipoSANEANTES->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTipoSANEANTES->Location = System::Drawing::Point(15, 90);
			this->textBoxTipoSANEANTES->Name = L"textBoxTipoSANEANTES";
			this->textBoxTipoSANEANTES->Size = System::Drawing::Size(271, 27);
			this->textBoxTipoSANEANTES->TabIndex = 113;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(12, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 18);
			this->label2->TabIndex = 112;
			this->label2->Text = L"TIPO:";
			// 
			// textBoxNomeSANEANTES
			// 
			this->textBoxNomeSANEANTES->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxNomeSANEANTES->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNomeSANEANTES->Location = System::Drawing::Point(15, 30);
			this->textBoxNomeSANEANTES->Name = L"textBoxNomeSANEANTES";
			this->textBoxNomeSANEANTES->Size = System::Drawing::Size(271, 27);
			this->textBoxNomeSANEANTES->TabIndex = 109;
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
			this->labelNome->TabIndex = 108;
			this->labelNome->Text = L"NOME DO PRODUTO:";
			// 
			// CADASTRO_SANEANTES
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(633, 240);
			this->Controls->Add(this->textBoxAnvisaSANEANTES);
			this->Controls->Add(this->maskedTextBoxQntdCaixaSANEANTES);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->maskedTextBoxNumCaixasSANEANTES);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->maskedTextBoxPRECOSANEANTES);
			this->Controls->Add(this->buttonCancelarCadSANEANTES);
			this->Controls->Add(this->buttonCadastrarSANEANTES);
			this->Controls->Add(this->textBoxReferenciaSANEANTES);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxMarcaSANEANTES);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxTipoSANEANTES);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxNomeSANEANTES);
			this->Controls->Add(this->labelNome);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CADASTRO_SANEANTES";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SGMB - Cadastro de Produtos de Limpeza";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCancelarCadSANEANTES_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Close();
	}
	private: System::Void buttonCadastrarSANEANTES_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 SANEANTES *SANE = new SANEANTES;
				 DATA_BASE_SANEANTES *DBSANE = new DATA_BASE_SANEANTES;

				 String ^NomeProd, ^Marca, ^RegistroAnvisa, ^Referencia, ^Tipo, ^Preco, ^NumCaixas, ^QntdCaixa;
				 string nomeProd, marca, registroAnvisa, referencia, tipo, preco, numCaixas, qntdCaixa;
				 float PRECO = 0.0;
				 int numcaixas = 0, qntdcaixas = 0, qntdestoque = 0;

				 NomeProd = textBoxNomeSANEANTES->Text;
				 nomeProd = msclr::interop::marshal_as<std::string>(NomeProd);
				 SANE->SET_NOME_PRODUTO(nomeProd);//

				 Marca = textBoxMarcaSANEANTES->Text;
				 marca = msclr::interop::marshal_as<std::string>(Marca);
				 SANE->SET_MARCA(marca);//

				 RegistroAnvisa = textBoxAnvisaSANEANTES->Text;
				 registroAnvisa = msclr::interop::marshal_as<std::string>(RegistroAnvisa);
				 SANE->SET_REGISTRO_ANVISA(registroAnvisa);//

				 Referencia = textBoxReferenciaSANEANTES->Text;
				 referencia = msclr::interop::marshal_as<std::string>(Referencia);
				 SANE->SET_REFERENCIA(referencia);//

				 Tipo = textBoxTipoSANEANTES->Text;
				 tipo = msclr::interop::marshal_as<std::string>(Tipo);
				 SANE->SET_TIPO_PRODUTO(tipo);//

				 string::size_type Size_Float;
				 Preco = maskedTextBoxPRECOSANEANTES->Text;
				 preco = msclr::interop::marshal_as<std::string>(Preco);
				 PRECO = stof(preco, &Size_Float);
				 SANE->SET_PRECO(PRECO);

				 string::size_type Size_Int1;
				 NumCaixas = maskedTextBoxNumCaixasSANEANTES->Text;
				 numCaixas = msclr::interop::marshal_as<std::string>(NumCaixas);
				 numcaixas = stoi(numCaixas, &Size_Int1);

				 string::size_type Size_Int2;
				 QntdCaixa = maskedTextBoxQntdCaixaSANEANTES->Text;
				 qntdCaixa = msclr::interop::marshal_as<std::string>(QntdCaixa);
				 qntdcaixas = stoi(qntdCaixa, &Size_Int2);

				 qntdestoque = (numcaixas * qntdcaixas);
				 SANE->SET_QNTD_ESTOQUE(qntdestoque);

				 DBSANE->GRAVA_DADOS(SANE);

				 this->Close();


	}
	};
}
