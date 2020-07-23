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
	/// Summary for NOVO_LOGIN
	/// </summary>
	public ref class NOVO_LOGIN : public System::Windows::Forms::Form
	{
	public:
		NOVO_LOGIN(void)
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
		~NOVO_LOGIN()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonCancelarLogin;
	private: System::Windows::Forms::Button^  buttonCadastrar_Novo_Usuario;
	private: System::Windows::Forms::RadioButton^  NOVO_NIVEL_CAIXA_CAD_USUARIO;
	protected:


	private: System::Windows::Forms::RadioButton^  NOVO_NIVEL_VENDEDOR_CAD_USUARIO;

	private: System::Windows::Forms::RadioButton^  NOVO_NIVEL_GERENTE_CAD_USUARIO;

	private: System::Windows::Forms::TextBox^  TextBoxNOVA_SENHA_USUARIO;

	private: System::Windows::Forms::TextBox^  textBoxNOVO_NOME_USUARIO;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NOVO_LOGIN::typeid));
			this->buttonCancelarLogin = (gcnew System::Windows::Forms::Button());
			this->buttonCadastrar_Novo_Usuario = (gcnew System::Windows::Forms::Button());
			this->NOVO_NIVEL_CAIXA_CAD_USUARIO = (gcnew System::Windows::Forms::RadioButton());
			this->NOVO_NIVEL_VENDEDOR_CAD_USUARIO = (gcnew System::Windows::Forms::RadioButton());
			this->NOVO_NIVEL_GERENTE_CAD_USUARIO = (gcnew System::Windows::Forms::RadioButton());
			this->TextBoxNOVA_SENHA_USUARIO = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNOVO_NOME_USUARIO = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonCancelarLogin
			// 
			this->buttonCancelarLogin->Location = System::Drawing::Point(431, 57);
			this->buttonCancelarLogin->Name = L"buttonCancelarLogin";
			this->buttonCancelarLogin->Size = System::Drawing::Size(136, 30);
			this->buttonCancelarLogin->TabIndex = 19;
			this->buttonCancelarLogin->Text = L"Cancelar";
			this->buttonCancelarLogin->UseVisualStyleBackColor = true;
			this->buttonCancelarLogin->Click += gcnew System::EventHandler(this, &NOVO_LOGIN::buttonCancelarLogin_Click);
			// 
			// buttonCadastrar_Novo_Usuario
			// 
			this->buttonCadastrar_Novo_Usuario->Location = System::Drawing::Point(431, 15);
			this->buttonCadastrar_Novo_Usuario->Name = L"buttonCadastrar_Novo_Usuario";
			this->buttonCadastrar_Novo_Usuario->Size = System::Drawing::Size(136, 30);
			this->buttonCadastrar_Novo_Usuario->TabIndex = 17;
			this->buttonCadastrar_Novo_Usuario->Text = L"Cadastrar";
			this->buttonCadastrar_Novo_Usuario->UseVisualStyleBackColor = true;
			this->buttonCadastrar_Novo_Usuario->Click += gcnew System::EventHandler(this, &NOVO_LOGIN::buttonLogon_Click);
			// 
			// NOVO_NIVEL_CAIXA_CAD_USUARIO
			// 
			this->NOVO_NIVEL_CAIXA_CAD_USUARIO->AutoSize = true;
			this->NOVO_NIVEL_CAIXA_CAD_USUARIO->BackColor = System::Drawing::Color::Transparent;
			this->NOVO_NIVEL_CAIXA_CAD_USUARIO->ForeColor = System::Drawing::Color::White;
			this->NOVO_NIVEL_CAIXA_CAD_USUARIO->Location = System::Drawing::Point(339, 90);
			this->NOVO_NIVEL_CAIXA_CAD_USUARIO->Name = L"NOVO_NIVEL_CAIXA_CAD_USUARIO";
			this->NOVO_NIVEL_CAIXA_CAD_USUARIO->Size = System::Drawing::Size(75, 22);
			this->NOVO_NIVEL_CAIXA_CAD_USUARIO->TabIndex = 16;
			this->NOVO_NIVEL_CAIXA_CAD_USUARIO->TabStop = true;
			this->NOVO_NIVEL_CAIXA_CAD_USUARIO->Text = L"Caixa";
			this->NOVO_NIVEL_CAIXA_CAD_USUARIO->UseVisualStyleBackColor = false;
			// 
			// NOVO_NIVEL_VENDEDOR_CAD_USUARIO
			// 
			this->NOVO_NIVEL_VENDEDOR_CAD_USUARIO->AutoSize = true;
			this->NOVO_NIVEL_VENDEDOR_CAD_USUARIO->BackColor = System::Drawing::Color::Transparent;
			this->NOVO_NIVEL_VENDEDOR_CAD_USUARIO->ForeColor = System::Drawing::Color::White;
			this->NOVO_NIVEL_VENDEDOR_CAD_USUARIO->Location = System::Drawing::Point(209, 90);
			this->NOVO_NIVEL_VENDEDOR_CAD_USUARIO->Name = L"NOVO_NIVEL_VENDEDOR_CAD_USUARIO";
			this->NOVO_NIVEL_VENDEDOR_CAD_USUARIO->Size = System::Drawing::Size(112, 22);
			this->NOVO_NIVEL_VENDEDOR_CAD_USUARIO->TabIndex = 15;
			this->NOVO_NIVEL_VENDEDOR_CAD_USUARIO->TabStop = true;
			this->NOVO_NIVEL_VENDEDOR_CAD_USUARIO->Text = L"Vendedor";
			this->NOVO_NIVEL_VENDEDOR_CAD_USUARIO->UseVisualStyleBackColor = false;
			// 
			// NOVO_NIVEL_GERENTE_CAD_USUARIO
			// 
			this->NOVO_NIVEL_GERENTE_CAD_USUARIO->AutoSize = true;
			this->NOVO_NIVEL_GERENTE_CAD_USUARIO->BackColor = System::Drawing::Color::Transparent;
			this->NOVO_NIVEL_GERENTE_CAD_USUARIO->ForeColor = System::Drawing::Color::White;
			this->NOVO_NIVEL_GERENTE_CAD_USUARIO->Location = System::Drawing::Point(105, 90);
			this->NOVO_NIVEL_GERENTE_CAD_USUARIO->Name = L"NOVO_NIVEL_GERENTE_CAD_USUARIO";
			this->NOVO_NIVEL_GERENTE_CAD_USUARIO->Size = System::Drawing::Size(98, 22);
			this->NOVO_NIVEL_GERENTE_CAD_USUARIO->TabIndex = 14;
			this->NOVO_NIVEL_GERENTE_CAD_USUARIO->TabStop = true;
			this->NOVO_NIVEL_GERENTE_CAD_USUARIO->Text = L"Gerente";
			this->NOVO_NIVEL_GERENTE_CAD_USUARIO->UseVisualStyleBackColor = false;
			// 
			// TextBoxNOVA_SENHA_USUARIO
			// 
			this->TextBoxNOVA_SENHA_USUARIO->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->TextBoxNOVA_SENHA_USUARIO->Location = System::Drawing::Point(105, 57);
			this->TextBoxNOVA_SENHA_USUARIO->Name = L"TextBoxNOVA_SENHA_USUARIO";
			this->TextBoxNOVA_SENHA_USUARIO->PasswordChar = '*';
			this->TextBoxNOVA_SENHA_USUARIO->Size = System::Drawing::Size(309, 27);
			this->TextBoxNOVA_SENHA_USUARIO->TabIndex = 13;
			this->TextBoxNOVA_SENHA_USUARIO->UseSystemPasswordChar = true;
			// 
			// textBoxNOVO_NOME_USUARIO
			// 
			this->textBoxNOVO_NOME_USUARIO->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxNOVO_NOME_USUARIO->Location = System::Drawing::Point(105, 14);
			this->textBoxNOVO_NOME_USUARIO->Name = L"textBoxNOVO_NOME_USUARIO";
			this->textBoxNOVO_NOME_USUARIO->Size = System::Drawing::Size(309, 27);
			this->textBoxNOVO_NOME_USUARIO->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(13, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 22);
			this->label2->TabIndex = 11;
			this->label2->Text = L"SENHA:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(23, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 22);
			this->label1->TabIndex = 10;
			this->label1->Text = L"NOME:";
			// 
			// NOVO_LOGIN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(575, 119);
			this->Controls->Add(this->buttonCancelarLogin);
			this->Controls->Add(this->buttonCadastrar_Novo_Usuario);
			this->Controls->Add(this->NOVO_NIVEL_CAIXA_CAD_USUARIO);
			this->Controls->Add(this->NOVO_NIVEL_VENDEDOR_CAD_USUARIO);
			this->Controls->Add(this->NOVO_NIVEL_GERENTE_CAD_USUARIO);
			this->Controls->Add(this->TextBoxNOVA_SENHA_USUARIO);
			this->Controls->Add(this->textBoxNOVO_NOME_USUARIO);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"NOVO_LOGIN";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SGMB - Cadastro de Novo Usuário";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCancelarLogin_Click(System::Object^  sender, System::EventArgs^  e) {

				 this->Close();
	}
private: System::Void buttonLogon_Click(System::Object^  sender, System::EventArgs^  e) {

			 USUARIO usuario;

			 bool GRAVAR;

			 String^ NOME, ^SENHA;
			 string Nome, Senha, Nivel;

			 NOME = textBoxNOVO_NOME_USUARIO->Text;
			 Nome = msclr::interop::marshal_as<std::string>(NOME);
			 usuario.setNome(Nome);

			 SENHA = TextBoxNOVA_SENHA_USUARIO->Text;
			 Senha = msclr::interop::marshal_as<std::string>(SENHA);
			 usuario.setSenha(Senha);

			 if (NOVO_NIVEL_GERENTE_CAD_USUARIO->Checked)
			 {
				 Nivel = "GERENTE";
				 usuario.setNivel(Nivel);
			 }


			 if (NOVO_NIVEL_VENDEDOR_CAD_USUARIO->Checked)
			 {
				 Nivel = "VENDEDOR";
				 usuario.setNivel(Nivel);
			 }


			 if (NOVO_NIVEL_CAIXA_CAD_USUARIO->Checked)
			 {
				 Nivel = "CAIXA";
				 usuario.setNivel(Nivel);
			 }

			 GRAVAR = usuario.GravaDados();

			 if (GRAVAR == true)
			 {
				 MessageBox::Show("O USUÁRIO FOI CADASTRADO COM SUCESSO", "SGMB", MessageBoxButtons::OK, MessageBoxIcon::Information);
			 }
			 else
			 {
				 MessageBox::Show("O USUÁRIO NÃO FOI CADASTRADO!", "SGMB", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }

			 this->Close();

}
};
}
