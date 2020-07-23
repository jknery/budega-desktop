#pragma once

#include "BUDEGAGUI.h"
#include "NOVO_LOGIN.h"
#include "MENU_PRINCIPAL.h"

namespace BUDEGA{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LOGIN
	/// </summary>
	public ref class LOGIN : public System::Windows::Forms::Form
	{
	public:
		LOGIN(void)
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
		~LOGIN()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  NomeDoUsuario;
	private: System::Windows::Forms::TextBox^  SenhaDoUsuario;
	private: System::Windows::Forms::RadioButton^  NivelGerente;
	private: System::Windows::Forms::RadioButton^  NivelVendedor;
	private: System::Windows::Forms::RadioButton^  NivelCaixa;





	private: System::Windows::Forms::Button^  buttonLogon;

	private: System::Windows::Forms::Button^  buttonNovoUsuario;

	private: System::Windows::Forms::Button^  buttonCancelarLogin;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LOGIN::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NomeDoUsuario = (gcnew System::Windows::Forms::TextBox());
			this->SenhaDoUsuario = (gcnew System::Windows::Forms::TextBox());
			this->NivelGerente = (gcnew System::Windows::Forms::RadioButton());
			this->NivelVendedor = (gcnew System::Windows::Forms::RadioButton());
			this->NivelCaixa = (gcnew System::Windows::Forms::RadioButton());
			this->buttonLogon = (gcnew System::Windows::Forms::Button());
			this->buttonNovoUsuario = (gcnew System::Windows::Forms::Button());
			this->buttonCancelarLogin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(22, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"NOME:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"SENHA:";
			// 
			// NomeDoUsuario
			// 
			this->NomeDoUsuario->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->NomeDoUsuario->Location = System::Drawing::Point(104, 8);
			this->NomeDoUsuario->Name = L"NomeDoUsuario";
			this->NomeDoUsuario->Size = System::Drawing::Size(309, 27);
			this->NomeDoUsuario->TabIndex = 2;
			// 
			// SenhaDoUsuario
			// 
			this->SenhaDoUsuario->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->SenhaDoUsuario->Location = System::Drawing::Point(104, 51);
			this->SenhaDoUsuario->Name = L"SenhaDoUsuario";
			this->SenhaDoUsuario->PasswordChar = '*';
			this->SenhaDoUsuario->Size = System::Drawing::Size(309, 27);
			this->SenhaDoUsuario->TabIndex = 3;
			this->SenhaDoUsuario->UseSystemPasswordChar = true;
			// 
			// NivelGerente
			// 
			this->NivelGerente->AutoSize = true;
			this->NivelGerente->BackColor = System::Drawing::Color::Transparent;
			this->NivelGerente->ForeColor = System::Drawing::Color::White;
			this->NivelGerente->Location = System::Drawing::Point(104, 84);
			this->NivelGerente->Name = L"NivelGerente";
			this->NivelGerente->Size = System::Drawing::Size(98, 22);
			this->NivelGerente->TabIndex = 4;
			this->NivelGerente->TabStop = true;
			this->NivelGerente->Text = L"Gerente";
			this->NivelGerente->UseVisualStyleBackColor = false;
			// 
			// NivelVendedor
			// 
			this->NivelVendedor->AutoSize = true;
			this->NivelVendedor->BackColor = System::Drawing::Color::Transparent;
			this->NivelVendedor->ForeColor = System::Drawing::Color::White;
			this->NivelVendedor->Location = System::Drawing::Point(208, 84);
			this->NivelVendedor->Name = L"NivelVendedor";
			this->NivelVendedor->Size = System::Drawing::Size(112, 22);
			this->NivelVendedor->TabIndex = 5;
			this->NivelVendedor->TabStop = true;
			this->NivelVendedor->Text = L"Vendedor";
			this->NivelVendedor->UseVisualStyleBackColor = false;
			// 
			// NivelCaixa
			// 
			this->NivelCaixa->AutoSize = true;
			this->NivelCaixa->BackColor = System::Drawing::Color::Transparent;
			this->NivelCaixa->ForeColor = System::Drawing::Color::White;
			this->NivelCaixa->Location = System::Drawing::Point(338, 84);
			this->NivelCaixa->Name = L"NivelCaixa";
			this->NivelCaixa->Size = System::Drawing::Size(75, 22);
			this->NivelCaixa->TabIndex = 6;
			this->NivelCaixa->TabStop = true;
			this->NivelCaixa->Text = L"Caixa";
			this->NivelCaixa->UseVisualStyleBackColor = false;
			// 
			// buttonLogon
			// 
			this->buttonLogon->Location = System::Drawing::Point(430, 9);
			this->buttonLogon->Name = L"buttonLogon";
			this->buttonLogon->Size = System::Drawing::Size(136, 30);
			this->buttonLogon->TabIndex = 7;
			this->buttonLogon->Text = L"Logon";
			this->buttonLogon->UseVisualStyleBackColor = true;
			this->buttonLogon->Click += gcnew System::EventHandler(this, &LOGIN::buttonLogon_Click);
			// 
			// buttonNovoUsuario
			// 
			this->buttonNovoUsuario->Location = System::Drawing::Point(430, 45);
			this->buttonNovoUsuario->Name = L"buttonNovoUsuario";
			this->buttonNovoUsuario->Size = System::Drawing::Size(136, 30);
			this->buttonNovoUsuario->TabIndex = 8;
			this->buttonNovoUsuario->Text = L"Novo Usuário";
			this->buttonNovoUsuario->UseVisualStyleBackColor = true;
			this->buttonNovoUsuario->Click += gcnew System::EventHandler(this, &LOGIN::buttonNovoUsuario_Click);
			// 
			// buttonCancelarLogin
			// 
			this->buttonCancelarLogin->Location = System::Drawing::Point(430, 80);
			this->buttonCancelarLogin->Name = L"buttonCancelarLogin";
			this->buttonCancelarLogin->Size = System::Drawing::Size(136, 30);
			this->buttonCancelarLogin->TabIndex = 9;
			this->buttonCancelarLogin->Text = L"Cancelar";
			this->buttonCancelarLogin->UseVisualStyleBackColor = true;
			this->buttonCancelarLogin->Click += gcnew System::EventHandler(this, &LOGIN::button3_Click);
			// 
			// LOGIN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(575, 119);
			this->Controls->Add(this->buttonCancelarLogin);
			this->Controls->Add(this->buttonNovoUsuario);
			this->Controls->Add(this->buttonLogon);
			this->Controls->Add(this->NivelCaixa);
			this->Controls->Add(this->NivelVendedor);
			this->Controls->Add(this->NivelGerente);
			this->Controls->Add(this->SenhaDoUsuario);
			this->Controls->Add(this->NomeDoUsuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"LOGIN";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SGMB - Sistema de Gerenciamento para Bairros";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

				 this->Close();
	}
private: System::Void buttonLogon_Click(System::Object^  sender, System::EventArgs^  e) {

			 bool Acesso = false;

			 USUARIO usuario;

			 String^ NOME, ^SENHA, ^NIVEL;
			 string Nome, Senha, Nivel;

			 NOME = NomeDoUsuario->Text;
			 Nome = msclr::interop::marshal_as<std::string>(NOME);
			 usuario.setNome(Nome);

			 SENHA = SenhaDoUsuario->Text;
			 Senha = msclr::interop::marshal_as<std::string>(SENHA);
			 usuario.setSenha(Senha);

			 if (NivelGerente->Checked)
			 {
				 Nivel = "GERENTE";
				 usuario.setNivel(Nivel);
			 }

			 if (NivelVendedor->Checked)
			 {
				 Nivel = "VENDEDOR";
				 usuario.setNivel(Nivel);
			 }

			 if (NivelCaixa->Checked)
			 {
				 Nivel = "CAIXA";
				 usuario.setNivel(Nivel);
			 }

			 Acesso = usuario.ValidaDados(Nome, Senha, Nivel);

			 if (Acesso == true)
			 {
				 this->Close();
				 BUDEGA::MENU_PRINCIPAL MenuPrincipal;
				 NIVEL = msclr::interop::marshal_as<String^>(Nivel);
				 MenuPrincipal.USER(NOME, NIVEL);
				 MenuPrincipal.ShowDialog();
			 }
			 else
			 {
				 MessageBox::Show("ACESSO NÃO PERMITIDO! TENTE NOVAMENTE!", "SGMB", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }

}
private: System::Void buttonNovoUsuario_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Close();
			 NOVO_LOGIN telaNovoLogin;
			 telaNovoLogin.ShowDialog();
}
};
}
