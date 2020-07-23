#pragma once

#include "BUDEGAGUI.h"

#include "PAGTORS.h"

namespace BUDEGA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PAGAMENTOS
	/// </summary>
	public ref class PAGAMENTOS : public System::Windows::Forms::Form
	{
		String^ TOTAL;

	public:

		void setTOTAL(String^);
		String^ getTOTAL();

		PAGAMENTOS(void)
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
		~PAGAMENTOS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBoxCARTAO;
	private: System::Windows::Forms::PictureBox^  pictureBoxRS;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PAGAMENTOS::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxCARTAO = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxRS = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCARTAO))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRS))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(8, 53);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DINHEIRO ->";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(26, 156);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CARTÃO ->";
			// 
			// pictureBoxCARTAO
			// 
			this->pictureBoxCARTAO->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxCARTAO->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxCARTAO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxCARTAO.Image")));
			this->pictureBoxCARTAO->Location = System::Drawing::Point(142, 116);
			this->pictureBoxCARTAO->Name = L"pictureBoxCARTAO";
			this->pictureBoxCARTAO->Size = System::Drawing::Size(107, 98);
			this->pictureBoxCARTAO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxCARTAO->TabIndex = 2;
			this->pictureBoxCARTAO->TabStop = false;
			this->pictureBoxCARTAO->Click += gcnew System::EventHandler(this, &PAGAMENTOS::pictureBoxCARTAO_Click);
			// 
			// pictureBoxRS
			// 
			this->pictureBoxRS->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxRS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxRS->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxRS.Image")));
			this->pictureBoxRS->Location = System::Drawing::Point(142, 25);
			this->pictureBoxRS->Name = L"pictureBoxRS";
			this->pictureBoxRS->Size = System::Drawing::Size(107, 85);
			this->pictureBoxRS->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxRS->TabIndex = 3;
			this->pictureBoxRS->TabStop = false;
			this->pictureBoxRS->Click += gcnew System::EventHandler(this, &PAGAMENTOS::pictureBoxRS_Click);
			// 
			// PAGAMENTOS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(272, 234);
			this->Controls->Add(this->pictureBoxRS);
			this->Controls->Add(this->pictureBoxCARTAO);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PAGAMENTOS";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SGMB - Confirmação de Pagamento";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCARTAO))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRS))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBoxCARTAO_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 MessageBox::Show("INSIRA O CARTÃO NA MAQUINETA", "SGMB", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 this->Close();
	}
	private: System::Void pictureBoxRS_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 PAGTORS RS;
				 RS.setTOTALG(TOTAL);
				 RS.ShowDialog();
				 this->Close();
	}
	};
}
