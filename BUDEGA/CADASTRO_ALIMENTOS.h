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
	/// Summary for CADASTRO_ALIMENTOS
	/// </summary>
	public ref class CADASTRO_ALIMENTOS : public System::Windows::Forms::Form
	{
	public:
		CADASTRO_ALIMENTOS(void)
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
		~CADASTRO_ALIMENTOS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^  textBoxAnvisaALIMENT;
	protected:
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxQntdCaixaALIMENT;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxNumCaixasALIMENT;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxPRECOALIMENT;
	private: System::Windows::Forms::Button^  buttonCancelarCadALIMENT;
	private: System::Windows::Forms::Button^  buttonCadastrarALIMENT;
	private: System::Windows::Forms::TextBox^  textBoxReferenciaALIMENT;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBoxMarcaALIMENT;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxTipoALIMENT;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxNomeALIMENT;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CADASTRO_ALIMENTOS::typeid));
			this->textBoxAnvisaALIMENT = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxQntdCaixaALIMENT = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumCaixasALIMENT = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxPRECOALIMENT = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonCancelarCadALIMENT = (gcnew System::Windows::Forms::Button());
			this->buttonCadastrarALIMENT = (gcnew System::Windows::Forms::Button());
			this->textBoxReferenciaALIMENT = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxMarcaALIMENT = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTipoALIMENT = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxNomeALIMENT = (gcnew System::Windows::Forms::TextBox());
			this->labelNome = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxAnvisaALIMENT
			// 
			this->textBoxAnvisaALIMENT->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAnvisaALIMENT->Location = System::Drawing::Point(356, 34);
			this->textBoxAnvisaALIMENT->Mask = L"0,0000,0000,000-0";
			this->textBoxAnvisaALIMENT->Name = L"textBoxAnvisaALIMENT";
			this->textBoxAnvisaALIMENT->Size = System::Drawing::Size(312, 27);
			this->textBoxAnvisaALIMENT->TabIndex = 127;
			// 
			// maskedTextBoxQntdCaixaALIMENT
			// 
			this->maskedTextBoxQntdCaixaALIMENT->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxQntdCaixaALIMENT->Location = System::Drawing::Point(519, 159);
			this->maskedTextBoxQntdCaixaALIMENT->Name = L"maskedTextBoxQntdCaixaALIMENT";
			this->maskedTextBoxQntdCaixaALIMENT->Size = System::Drawing::Size(149, 27);
			this->maskedTextBoxQntdCaixaALIMENT->TabIndex = 126;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(516, 138);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(171, 18);
			this->label9->TabIndex = 125;
			this->label9->Text = L"QNTD POR CAIXA:";
			// 
			// maskedTextBoxNumCaixasALIMENT
			// 
			this->maskedTextBoxNumCaixasALIMENT->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxNumCaixasALIMENT->Location = System::Drawing::Point(355, 159);
			this->maskedTextBoxNumCaixasALIMENT->Name = L"maskedTextBoxNumCaixasALIMENT";
			this->maskedTextBoxNumCaixasALIMENT->Size = System::Drawing::Size(153, 27);
			this->maskedTextBoxNumCaixasALIMENT->TabIndex = 124;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(351, 138);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 18);
			this->label8->TabIndex = 123;
			this->label8->Text = L"Nº CAIXAS:";
			// 
			// maskedTextBoxPRECOALIMENT
			// 
			this->maskedTextBoxPRECOALIMENT->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxPRECOALIMENT->Location = System::Drawing::Point(355, 96);
			this->maskedTextBoxPRECOALIMENT->Name = L"maskedTextBoxPRECOALIMENT";
			this->maskedTextBoxPRECOALIMENT->Size = System::Drawing::Size(116, 27);
			this->maskedTextBoxPRECOALIMENT->TabIndex = 122;
			// 
			// buttonCancelarCadALIMENT
			// 
			this->buttonCancelarCadALIMENT->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancelarCadALIMENT->Location = System::Drawing::Point(519, 201);
			this->buttonCancelarCadALIMENT->Name = L"buttonCancelarCadALIMENT";
			this->buttonCancelarCadALIMENT->Size = System::Drawing::Size(149, 32);
			this->buttonCancelarCadALIMENT->TabIndex = 121;
			this->buttonCancelarCadALIMENT->Text = L"CANCELAR";
			this->buttonCancelarCadALIMENT->UseVisualStyleBackColor = true;
			this->buttonCancelarCadALIMENT->Click += gcnew System::EventHandler(this, &CADASTRO_ALIMENTOS::buttonCancelarCadALIMENT_Click);
			// 
			// buttonCadastrarALIMENT
			// 
			this->buttonCadastrarALIMENT->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCadastrarALIMENT->Location = System::Drawing::Point(356, 201);
			this->buttonCadastrarALIMENT->Name = L"buttonCadastrarALIMENT";
			this->buttonCadastrarALIMENT->Size = System::Drawing::Size(153, 32);
			this->buttonCadastrarALIMENT->TabIndex = 120;
			this->buttonCadastrarALIMENT->Text = L"CADASTRAR";
			this->buttonCadastrarALIMENT->UseVisualStyleBackColor = true;
			this->buttonCadastrarALIMENT->Click += gcnew System::EventHandler(this, &CADASTRO_ALIMENTOS::buttonCadastrarALIMENT_Click);
			// 
			// textBoxReferenciaALIMENT
			// 
			this->textBoxReferenciaALIMENT->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxReferenciaALIMENT->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxReferenciaALIMENT->Location = System::Drawing::Point(497, 96);
			this->textBoxReferenciaALIMENT->Name = L"textBoxReferenciaALIMENT";
			this->textBoxReferenciaALIMENT->Size = System::Drawing::Size(171, 27);
			this->textBoxReferenciaALIMENT->TabIndex = 119;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(493, 75);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 18);
			this->label7->TabIndex = 118;
			this->label7->Text = L"REFERÊNCIA:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(351, 75);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 18);
			this->label6->TabIndex = 117;
			this->label6->Text = L"PREÇO R$:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(351, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 18);
			this->label5->TabIndex = 116;
			this->label5->Text = L"REGISTRO ANVISA:";
			// 
			// textBoxMarcaALIMENT
			// 
			this->textBoxMarcaALIMENT->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxMarcaALIMENT->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMarcaALIMENT->Location = System::Drawing::Point(14, 158);
			this->textBoxMarcaALIMENT->Name = L"textBoxMarcaALIMENT";
			this->textBoxMarcaALIMENT->Size = System::Drawing::Size(315, 27);
			this->textBoxMarcaALIMENT->TabIndex = 113;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(10, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 18);
			this->label3->TabIndex = 112;
			this->label3->Text = L"MARCA:";
			// 
			// textBoxTipoALIMENT
			// 
			this->textBoxTipoALIMENT->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxTipoALIMENT->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTipoALIMENT->Location = System::Drawing::Point(14, 96);
			this->textBoxTipoALIMENT->Name = L"textBoxTipoALIMENT";
			this->textBoxTipoALIMENT->Size = System::Drawing::Size(315, 27);
			this->textBoxTipoALIMENT->TabIndex = 111;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(10, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 18);
			this->label2->TabIndex = 110;
			this->label2->Text = L"TIPO:";
			// 
			// textBoxNomeALIMENT
			// 
			this->textBoxNomeALIMENT->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxNomeALIMENT->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNomeALIMENT->Location = System::Drawing::Point(14, 34);
			this->textBoxNomeALIMENT->Name = L"textBoxNomeALIMENT";
			this->textBoxNomeALIMENT->Size = System::Drawing::Size(315, 27);
			this->textBoxNomeALIMENT->TabIndex = 109;
			// 
			// labelNome
			// 
			this->labelNome->AutoSize = true;
			this->labelNome->BackColor = System::Drawing::Color::Transparent;
			this->labelNome->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNome->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelNome->Location = System::Drawing::Point(10, 13);
			this->labelNome->Name = L"labelNome";
			this->labelNome->Size = System::Drawing::Size(195, 18);
			this->labelNome->TabIndex = 108;
			this->labelNome->Text = L"NOME DO PRODUTO:";
			// 
			// CADASTRO_ALIMENTOS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(696, 248);
			this->Controls->Add(this->textBoxAnvisaALIMENT);
			this->Controls->Add(this->maskedTextBoxQntdCaixaALIMENT);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->maskedTextBoxNumCaixasALIMENT);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->maskedTextBoxPRECOALIMENT);
			this->Controls->Add(this->buttonCancelarCadALIMENT);
			this->Controls->Add(this->buttonCadastrarALIMENT);
			this->Controls->Add(this->textBoxReferenciaALIMENT);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxMarcaALIMENT);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxTipoALIMENT);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxNomeALIMENT);
			this->Controls->Add(this->labelNome);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CADASTRO_ALIMENTOS";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SGMB - Cadastro de Alimenticios";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCancelarCadALIMENT_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Close();
	}
	private: System::Void buttonCadastrarALIMENT_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 ALIMENTICIOS *ALIMENT = new ALIMENTICIOS;
				 DATA_BASE_ALIMENTICIOS *DB_ALIMENT = new DATA_BASE_ALIMENTICIOS;

				 String ^NomeProd, ^Marca, ^RegistroAnvisa, ^Referencia, ^Tipo, ^Preco, ^NumCaixas, ^QntdCaixa;
				 string nomeProd, marca, registroAnvisa, referencia, tipo, preco, numCaixas, qntdCaixa;
				 float PRECO = 0.0;
				 int numcaixas = 0, qntdcaixas = 0, qntdestoque = 0;

				 NomeProd = textBoxNomeALIMENT->Text;
				 nomeProd = msclr::interop::marshal_as<std::string>(NomeProd);
				 ALIMENT->SET_NOME_PRODUTO(nomeProd);//

				 Marca = textBoxMarcaALIMENT->Text;
				 marca = msclr::interop::marshal_as<std::string>(Marca);
				 ALIMENT->SET_MARCA(marca);//

				 RegistroAnvisa = textBoxAnvisaALIMENT->Text;
				 registroAnvisa = msclr::interop::marshal_as<std::string>(RegistroAnvisa);
				 ALIMENT->SET_REGISTRO_ANVISA(registroAnvisa);//

				 Referencia = textBoxReferenciaALIMENT->Text;
				 referencia = msclr::interop::marshal_as<std::string>(Referencia);
				 ALIMENT->SET_REFERENCIA(referencia);//

				 Tipo = textBoxTipoALIMENT->Text;
				 tipo = msclr::interop::marshal_as<std::string>(Tipo);
				 ALIMENT->SET_TIPO_PRODUTO(tipo);//

				 string::size_type Size_Float;
				 Preco = maskedTextBoxPRECOALIMENT->Text;
				 preco = msclr::interop::marshal_as<std::string>(Preco);
				 PRECO = stof(preco, &Size_Float);
				 ALIMENT->SET_PRECO(PRECO);

				 string::size_type Size_Int1;
				 NumCaixas = maskedTextBoxNumCaixasALIMENT->Text;
				 numCaixas = msclr::interop::marshal_as<std::string>(NumCaixas);
				 numcaixas = stoi(numCaixas, &Size_Int1);

				 string::size_type Size_Int2;
				 QntdCaixa = maskedTextBoxQntdCaixaALIMENT->Text;
				 qntdCaixa = msclr::interop::marshal_as<std::string>(QntdCaixa);
				 qntdcaixas = stoi(qntdCaixa, &Size_Int2);

				 qntdestoque = (numcaixas * qntdcaixas);
				 ALIMENT->SET_QNTD_ESTOQUE(qntdestoque);

				 DB_ALIMENT->GRAVA_DADOS(ALIMENT);

				 this->Close();
	}
	};
}
