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
	/// Summary for EXCLUIR_USUARIO
	/// </summary>
	public ref class EXCLUIR_USUARIO : public System::Windows::Forms::Form
	{
	public:
		EXCLUIR_USUARIO(void)
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
		~EXCLUIR_USUARIO()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBoxDeleteUSER;
	private: System::Windows::Forms::Button^  buttonExcluirUser;
	private: System::Windows::Forms::Button^  buttonCancelarExclusaoUser;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EXCLUIR_USUARIO::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxDeleteUSER = (gcnew System::Windows::Forms::TextBox());
			this->buttonExcluirUser = (gcnew System::Windows::Forms::Button());
			this->buttonCancelarExclusaoUser = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(342, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DIGITE O USUÁRIO A SER EXCLUÍDO:";
			// 
			// textBoxDeleteUSER
			// 
			this->textBoxDeleteUSER->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxDeleteUSER->Location = System::Drawing::Point(15, 30);
			this->textBoxDeleteUSER->Name = L"textBoxDeleteUSER";
			this->textBoxDeleteUSER->Size = System::Drawing::Size(339, 27);
			this->textBoxDeleteUSER->TabIndex = 1;
			// 
			// buttonExcluirUser
			// 
			this->buttonExcluirUser->Location = System::Drawing::Point(15, 63);
			this->buttonExcluirUser->Name = L"buttonExcluirUser";
			this->buttonExcluirUser->Size = System::Drawing::Size(108, 31);
			this->buttonExcluirUser->TabIndex = 2;
			this->buttonExcluirUser->Text = L"Excluir";
			this->buttonExcluirUser->UseVisualStyleBackColor = true;
			this->buttonExcluirUser->Click += gcnew System::EventHandler(this, &EXCLUIR_USUARIO::buttonExcluirUser_Click);
			// 
			// buttonCancelarExclusaoUser
			// 
			this->buttonCancelarExclusaoUser->Location = System::Drawing::Point(246, 63);
			this->buttonCancelarExclusaoUser->Name = L"buttonCancelarExclusaoUser";
			this->buttonCancelarExclusaoUser->Size = System::Drawing::Size(108, 31);
			this->buttonCancelarExclusaoUser->TabIndex = 3;
			this->buttonCancelarExclusaoUser->Text = L"Cancelar";
			this->buttonCancelarExclusaoUser->UseVisualStyleBackColor = true;
			this->buttonCancelarExclusaoUser->Click += gcnew System::EventHandler(this, &EXCLUIR_USUARIO::buttonCancelarExclusaoUser_Click);
			// 
			// EXCLUIR_USUARIO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(373, 101);
			this->Controls->Add(this->buttonCancelarExclusaoUser);
			this->Controls->Add(this->buttonExcluirUser);
			this->Controls->Add(this->textBoxDeleteUSER);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EXCLUIR_USUARIO";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SGMB - Exclusão de Usuários";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCancelarExclusaoUser_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Close();
	}


	private: System::Void buttonExcluirUser_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 int Qntd = 0, itens = 0, cont = 0;

				 bool Acess = false;

				 string LINE, logon;
				 String ^USER;

				 string manter, apagar;

				 queue <string> APAGAR;
				 queue <string> TEMP;
				 queue <string> MANTER;

				 ifstream DEL;
				 ofstream GRAVAR;

				 DEL.open("Login.mdf");

				 USER = textBoxDeleteUSER->Text;
				 logon = msclr::interop::marshal_as<std::string>(USER);

				 if (DEL.is_open())
				 {
					 while (getline(DEL, LINE))
					 {
						 if (LINE == ESCAPE)
						 {
							 Acess = false;
						 }

						 if (LINE == logon)
						 {
							 Acess = true;
						 }
						 if (LINE == logon && Acess == true)
						 {
							 APAGAR.push(LINE);
							 ++Qntd;
						 }

						 if (LINE != ESCAPE)
						 {
							 if (LINE != logon && Acess == true)
							 {
								 APAGAR.push(LINE);
							 }
						 }

						 TEMP.push(LINE);
					 }

				 }
				 DEL.close();

				 GRAVAR.open("Login.mdf");
				 itens = APAGAR.size();

				 if (GRAVAR.is_open())
				 {

					 while (!TEMP.empty())
					 {
						 manter = TEMP.front();

						 if (!APAGAR.empty())
						 {
							 apagar = APAGAR.front();

							 if (manter != apagar)
							 {
								 MANTER.push(manter);
								 TEMP.pop();
							 }

							 if (manter == apagar)
							 {
								 TEMP.pop();
								 APAGAR.pop();
								 ++cont; //
							 }
						 }

						 else
						 {
							 if (cont == itens && manter == ESCAPE)
							 {
								 TEMP.pop();
								 cont = 0;
							 }

							 else
							 {
								 MANTER.push(manter);
								 TEMP.pop();
							 }
						 }
					 }

					 while (!MANTER.empty())
					 {
						 GRAVAR << MANTER.front() << endl;
						 MANTER.pop();
					 }

					 if (MANTER.empty())
					 {
						 MessageBox::Show("OPERAÇÃO REALIZADA COM SUCESSO!", "SGMB", MessageBoxButtons::OK, MessageBoxIcon::Information);
						 GRAVAR.close();
					 }
				 }
				 else
				 {
					 MessageBox::Show("OPERAÇÃO NÃO REALIZADA!", "SGMB", MessageBoxButtons::OK, MessageBoxIcon::Information);
					 GRAVAR.close();
				 }
	}


	};
}
