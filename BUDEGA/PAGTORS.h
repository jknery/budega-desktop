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
	/// Summary for PAGTORS
	/// </summary>
	public ref class PAGTORS : public System::Windows::Forms::Form
	{

		String^ TOTALG;

	public:

		void setTOTALG(String^);
		String^ getTOTALG();

		PAGTORS(void)
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
		~PAGTORS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxTOTAL;
	private: System::Windows::Forms::TextBox^  textBoxRECEBIDO;
	protected:


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxTROCO;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  buttonCALC;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PAGTORS::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTOTAL = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRECEBIDO = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTROCO = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buttonCALC = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TOTAL:";
			// 
			// textBoxTOTAL
			// 
			this->textBoxTOTAL->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTOTAL->Location = System::Drawing::Point(15, 34);
			this->textBoxTOTAL->Name = L"textBoxTOTAL";
			this->textBoxTOTAL->Size = System::Drawing::Size(100, 27);
			this->textBoxTOTAL->TabIndex = 1;
			this->textBoxTOTAL->TextChanged += gcnew System::EventHandler(this, &PAGTORS::textBox1_TextChanged);
			// 
			// textBoxRECEBIDO
			// 
			this->textBoxRECEBIDO->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxRECEBIDO->Location = System::Drawing::Point(134, 34);
			this->textBoxRECEBIDO->Name = L"textBoxRECEBIDO";
			this->textBoxRECEBIDO->Size = System::Drawing::Size(100, 27);
			this->textBoxRECEBIDO->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(131, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"RECEBIDO:";
			// 
			// textBoxTROCO
			// 
			this->textBoxTROCO->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTROCO->Location = System::Drawing::Point(252, 34);
			this->textBoxTROCO->Name = L"textBoxTROCO";
			this->textBoxTROCO->Size = System::Drawing::Size(100, 27);
			this->textBoxTROCO->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(249, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"TROCO:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(15, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 37);
			this->button1->TabIndex = 6;
			this->button1->Text = L"CONFIRMAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PAGTORS::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(218, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 37);
			this->button2->TabIndex = 7;
			this->button2->Text = L"CANCELAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PAGTORS::button2_Click);
			// 
			// buttonCALC
			// 
			this->buttonCALC->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCALC->Location = System::Drawing::Point(135, 68);
			this->buttonCALC->Name = L"buttonCALC";
			this->buttonCALC->Size = System::Drawing::Size(97, 37);
			this->buttonCALC->TabIndex = 8;
			this->buttonCALC->Text = L"CALC";
			this->buttonCALC->UseVisualStyleBackColor = true;
			this->buttonCALC->Click += gcnew System::EventHandler(this, &PAGTORS::buttonCALC_Click);
			// 
			// PAGTORS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(379, 173);
			this->Controls->Add(this->buttonCALC);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxTROCO);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxRECEBIDO);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxTOTAL);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PAGTORS";
			this->Text = L"SGMB - Pagamento à Dinheiro";
			this->Load += gcnew System::EventHandler(this, &PAGTORS::PAGTORS_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 MessageBox::Show("PAGAMENTO REALIZADO COM SUCESSO!", "SGMB", MessageBoxButtons::OK, MessageBoxIcon::Information);

				 this->Close();

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Close();
	}
	private: System::Void buttonCALC_Click(System::Object^  sender, System::EventArgs^  e) {


				 float TotalF = 0, RecebidoF = 0, TrocoF = 0;
				 string TotalS, RecebidoS, TrocoS;
				 String ^TOTALW, ^Recebido, ^Troco;

				 TOTALW = TOTALG;
				 TotalS = msclr::interop::marshal_as<std::string>(TOTALW);
				 TotalF = stof(TotalS);

				 Recebido = textBoxRECEBIDO->Text;
				 RecebidoS = msclr::interop::marshal_as<std::string>(Recebido);
				 RecebidoF = stof(RecebidoS);

				 TrocoF = (RecebidoF - TotalF);
				 stringstream convert;
				 convert << fixed << setprecision(2) << TrocoF;
				 TrocoS = convert.str();
				 Troco = msclr::interop::marshal_as<String^>(TrocoS);

				 textBoxTROCO->Text = Troco;

	}
private: System::Void PAGTORS_Load(System::Object^  sender, System::EventArgs^  e) {

			 textBoxTOTAL->Text = TOTALG;


}
};
}
