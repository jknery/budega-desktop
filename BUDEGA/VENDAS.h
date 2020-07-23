#pragma once

#include "BUDEGAGUI.h"

#include "PAGAMENTOS.h"

namespace BUDEGA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VENDAS
	/// </summary>
	public ref class VENDAS : public System::Windows::Forms::Form
	{
	public:

		int QNTD;
		float SUBTOTAL_VENDAS, TOTAL, PRECO;
		String ^subtotal_vendas, ^NOME, ^Total;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public:

		VENDAS(void)
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
		~VENDAS()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label5;
	public:
	private: System::Windows::Forms::TextBox^  textBoxTOTAL;
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBoxNomeVENDAS;
	private: System::Windows::Forms::Button^  buttonPesquisarVENDAS;
	private: System::Windows::Forms::RichTextBox^  richTextBoxVERRIFICAR;

	private: System::Windows::Forms::Button^  buttonCONFIRMAR_VENDAS;
	private: System::Windows::Forms::TextBox^  textBoxQUANTIDADE_ITENS;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxSubTOTAL;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RichTextBox^  richTextBoxHISTORICO_VENDAS;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  buttonConfirmarComprar;
	private: System::Windows::Forms::Button^  buttonCancelarCompra;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VENDAS::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxNomeVENDAS = (gcnew System::Windows::Forms::TextBox());
			this->buttonPesquisarVENDAS = (gcnew System::Windows::Forms::Button());
			this->richTextBoxVERRIFICAR = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonCONFIRMAR_VENDAS = (gcnew System::Windows::Forms::Button());
			this->textBoxQUANTIDADE_ITENS = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxSubTOTAL = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBoxHISTORICO_VENDAS = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonConfirmarComprar = (gcnew System::Windows::Forms::Button());
			this->buttonCancelarCompra = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTOTAL = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"NOME DO PRODUTO:";
			// 
			// textBoxNomeVENDAS
			// 
			this->textBoxNomeVENDAS->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxNomeVENDAS->Location = System::Drawing::Point(15, 30);
			this->textBoxNomeVENDAS->Name = L"textBoxNomeVENDAS";
			this->textBoxNomeVENDAS->Size = System::Drawing::Size(304, 27);
			this->textBoxNomeVENDAS->TabIndex = 1;
			// 
			// buttonPesquisarVENDAS
			// 
			this->buttonPesquisarVENDAS->Location = System::Drawing::Point(15, 63);
			this->buttonPesquisarVENDAS->Name = L"buttonPesquisarVENDAS";
			this->buttonPesquisarVENDAS->Size = System::Drawing::Size(134, 27);
			this->buttonPesquisarVENDAS->TabIndex = 2;
			this->buttonPesquisarVENDAS->Text = L"PESQUISAR";
			this->buttonPesquisarVENDAS->UseVisualStyleBackColor = true;
			this->buttonPesquisarVENDAS->Click += gcnew System::EventHandler(this, &VENDAS::buttonPesquisarVENDAS_Click);
			// 
			// richTextBoxVERRIFICAR
			// 
			this->richTextBoxVERRIFICAR->Location = System::Drawing::Point(15, 96);
			this->richTextBoxVERRIFICAR->Name = L"richTextBoxVERRIFICAR";
			this->richTextBoxVERRIFICAR->Size = System::Drawing::Size(304, 104);
			this->richTextBoxVERRIFICAR->TabIndex = 3;
			this->richTextBoxVERRIFICAR->Text = L"";
			// 
			// buttonCONFIRMAR_VENDAS
			// 
			this->buttonCONFIRMAR_VENDAS->Location = System::Drawing::Point(15, 260);
			this->buttonCONFIRMAR_VENDAS->Name = L"buttonCONFIRMAR_VENDAS";
			this->buttonCONFIRMAR_VENDAS->Size = System::Drawing::Size(143, 27);
			this->buttonCONFIRMAR_VENDAS->TabIndex = 6;
			this->buttonCONFIRMAR_VENDAS->Text = L"CONFIRMAR";
			this->buttonCONFIRMAR_VENDAS->UseVisualStyleBackColor = true;
			this->buttonCONFIRMAR_VENDAS->Click += gcnew System::EventHandler(this, &VENDAS::buttonCONFIRMAR_VENDAS_Click);
			// 
			// textBoxQUANTIDADE_ITENS
			// 
			this->textBoxQUANTIDADE_ITENS->Location = System::Drawing::Point(15, 227);
			this->textBoxQUANTIDADE_ITENS->Name = L"textBoxQUANTIDADE_ITENS";
			this->textBoxQUANTIDADE_ITENS->Size = System::Drawing::Size(143, 27);
			this->textBoxQUANTIDADE_ITENS->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(12, 206);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"QUANTIDADES:";
			// 
			// textBoxSubTOTAL
			// 
			this->textBoxSubTOTAL->Location = System::Drawing::Point(15, 388);
			this->textBoxSubTOTAL->Name = L"textBoxSubTOTAL";
			this->textBoxSubTOTAL->Size = System::Drawing::Size(143, 27);
			this->textBoxSubTOTAL->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(12, 367);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"SUBTOTAL R$:";
			// 
			// richTextBoxHISTORICO_VENDAS
			// 
			this->richTextBoxHISTORICO_VENDAS->Location = System::Drawing::Point(344, 38);
			this->richTextBoxHISTORICO_VENDAS->Name = L"richTextBoxHISTORICO_VENDAS";
			this->richTextBoxHISTORICO_VENDAS->Size = System::Drawing::Size(304, 306);
			this->richTextBoxHISTORICO_VENDAS->TabIndex = 9;
			this->richTextBoxHISTORICO_VENDAS->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(341, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(225, 18);
			this->label4->TabIndex = 10;
			this->label4->Text = L"HISTÓRICO DE VENDAS:";
			// 
			// buttonConfirmarComprar
			// 
			this->buttonConfirmarComprar->Location = System::Drawing::Point(344, 357);
			this->buttonConfirmarComprar->Name = L"buttonConfirmarComprar";
			this->buttonConfirmarComprar->Size = System::Drawing::Size(143, 58);
			this->buttonConfirmarComprar->TabIndex = 11;
			this->buttonConfirmarComprar->Text = L"CONFIRMAR COMPRA";
			this->buttonConfirmarComprar->UseVisualStyleBackColor = true;
			this->buttonConfirmarComprar->Click += gcnew System::EventHandler(this, &VENDAS::buttonConfirmarComprar_Click);
			// 
			// buttonCancelarCompra
			// 
			this->buttonCancelarCompra->Location = System::Drawing::Point(505, 357);
			this->buttonCancelarCompra->Name = L"buttonCancelarCompra";
			this->buttonCancelarCompra->Size = System::Drawing::Size(143, 58);
			this->buttonCancelarCompra->TabIndex = 12;
			this->buttonCancelarCompra->Text = L"CANCELAR COMPRA";
			this->buttonCancelarCompra->UseVisualStyleBackColor = true;
			this->buttonCancelarCompra->Click += gcnew System::EventHandler(this, &VENDAS::buttonCancelarCompra_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(173, 367);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 18);
			this->label5->TabIndex = 13;
			this->label5->Text = L"TOTAL R$:";
			// 
			// textBoxTOTAL
			// 
			this->textBoxTOTAL->Location = System::Drawing::Point(176, 388);
			this->textBoxTOTAL->Name = L"textBoxTOTAL";
			this->textBoxTOTAL->Size = System::Drawing::Size(143, 27);
			this->textBoxTOTAL->TabIndex = 14;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(201, 227);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(118, 107);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// VENDAS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(676, 433);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBoxTOTAL);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->buttonCancelarCompra);
			this->Controls->Add(this->buttonConfirmarComprar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->richTextBoxHISTORICO_VENDAS);
			this->Controls->Add(this->textBoxSubTOTAL);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->buttonCONFIRMAR_VENDAS);
			this->Controls->Add(this->textBoxQUANTIDADE_ITENS);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBoxVERRIFICAR);
			this->Controls->Add(this->buttonPesquisarVENDAS);
			this->Controls->Add(this->textBoxNomeVENDAS);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"VENDAS";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SGMB - Vendas";
			this->Load += gcnew System::EventHandler(this, &VENDAS::VENDAS_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void VENDAS_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void buttonCancelarCompra_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Close();
	}
	private: System::Void buttonPesquisarVENDAS_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 int Qntd = 0, itens = 0, cont = 0;

				 float total = 0;

				 bool Acess = false;

				 string LINE, NomeVendas, Total, QntdITENS, SubTotalVendas;
				 String ^NOME_VENDAS, ^LINHA;

				 ifstream DEL1, DEL2, DEL3, DEL4;

				 NOME_VENDAS = textBoxNomeVENDAS->Text;
				 NomeVendas = msclr::interop::marshal_as<std::string>(NOME_VENDAS);


				 for (int i = 0; i <= 4; i++)
				 {

					 if (i == 1)
					 {
						 DEL1.open("ALIMENTICIOS.mdf");

						 if (DEL1.is_open())
						 {
							 while (getline(DEL1, LINE))
							 {
								 if (LINE == ESCAPE)
								 {
									 Acess = false;
								 }

								 if (LINE == NomeVendas)
								 {
									 Acess = true;
								 }
								 if (LINE == NomeVendas && Acess == true)
								 {
									 LINHA = msclr::interop::marshal_as<String^>(LINE);
									 NOME = msclr::interop::marshal_as<String^>(LINE);
									 richTextBoxVERRIFICAR->AppendText(LINHA);
									 richTextBoxVERRIFICAR->AppendText("\n");
									 ++cont;
								 }

								 if (LINE != ESCAPE)
								 {
									 if (LINE != NomeVendas && Acess == true)
									 {
										 if (cont <= 6)
										 {
											 LINHA = msclr::interop::marshal_as<String^>(LINE);
											 richTextBoxVERRIFICAR->AppendText(LINHA);
											 richTextBoxVERRIFICAR->AppendText("\n");
											 ++cont;
										 }

										 if (cont == 6)
										 {
											 PRECO = stof(LINE);
											 cont = 50;
										 }

									 }
								 }
							 }
						 }
						 DEL1.close();
					 }

					 else if (i == 2)
					 {
						 DEL2.open("PERFUMARIA.mdf");

						 if (DEL2.is_open())
						 {
							 while (getline(DEL2, LINE))
							 {
								 if (LINE == ESCAPE)
								 {
									 Acess = false;
								 }

								 if (LINE == NomeVendas)
								 {
									 Acess = true;
								 }
								 if (LINE == NomeVendas && Acess == true)
								 {
									 LINHA = msclr::interop::marshal_as<String^>(LINE);
									 NOME = msclr::interop::marshal_as<String^>(LINE);
									 richTextBoxVERRIFICAR->AppendText(LINHA);
									 richTextBoxVERRIFICAR->AppendText("\n");
									 ++cont;
								 }

								 if (LINE != ESCAPE)
								 {
									 if (LINE != NomeVendas && Acess == true)
									 {
										 if (cont <= 6)
										 {
											 LINHA = msclr::interop::marshal_as<String^>(LINE);
											 richTextBoxVERRIFICAR->AppendText(LINHA);
											 richTextBoxVERRIFICAR->AppendText("\n");
											 ++cont;
										 }

										 if (cont == 6)
										 {
											 PRECO = stof(LINE);
											 cont = 50;
										 }

									 }
								 }
							 }
						 }
						 DEL2.close();
					 }

					 else if (i == 3)
					 {
						 DEL3.open("SANEANTES.mdf");

						 if (DEL3.is_open())
						 {
							 while (getline(DEL3, LINE))
							 {
								 if (LINE == ESCAPE)
								 {
									 Acess = false;
								 }

								 if (LINE == NomeVendas)
								 {
									 Acess = true;
								 }
								 if (LINE == NomeVendas && Acess == true)
								 {
									 LINHA = msclr::interop::marshal_as<String^>(LINE);
									 NOME = msclr::interop::marshal_as<String^>(LINE);
									 richTextBoxVERRIFICAR->AppendText(LINHA);
									 richTextBoxVERRIFICAR->AppendText("\n");
									 ++cont;
								 }

								 if (LINE != ESCAPE)
								 {
									 if (LINE != NomeVendas && Acess == true)
									 {
										 if (cont <= 6)
										 {
											 LINHA = msclr::interop::marshal_as<String^>(LINE);
											 richTextBoxVERRIFICAR->AppendText(LINHA);
											 richTextBoxVERRIFICAR->AppendText("\n");
											 ++cont;
										 }

										 if (cont == 6)
										 {
											 PRECO = stof(LINE);
											 cont = 50;
										 }

									 }
								 }
							 }
						 }
						 DEL3.close();
					 }

					 else if (i == 4)
					 {
						 DEL4.open("PROD_SAUDE.mdf");

						 if (DEL4.is_open())
						 {
							 while (getline(DEL4, LINE))
							 {
								 if (LINE == ESCAPE)
								 {
									 Acess = false;
								 }

								 if (LINE == NomeVendas)
								 {
									 Acess = true;
								 }
								 if (LINE == NomeVendas && Acess == true)
								 {
									 LINHA = msclr::interop::marshal_as<String^>(LINE);
									 NOME = msclr::interop::marshal_as<String^>(LINE);
									 richTextBoxVERRIFICAR->AppendText(LINHA);
									 richTextBoxVERRIFICAR->AppendText("\n");
									 ++cont;
								 }

								 if (LINE != ESCAPE)
								 {
									 if (LINE != NomeVendas && Acess == true)
									 {
										 if (cont <= 6)
										 {
											 LINHA = msclr::interop::marshal_as<String^>(LINE);
											 richTextBoxVERRIFICAR->AppendText(LINHA);
											 richTextBoxVERRIFICAR->AppendText("\n");
											 ++cont;
										 }

										 if (cont == 6)
										 {
											 PRECO = stof(LINE);
											 cont = 50;
										 }

									 }
								 }
							 }
						 }
						 DEL4.close();
					 }



				 }


				 

	}
	private: System::Void buttonCONFIRMAR_VENDAS_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 int Qntd = 0;

				 string preco, total;

				 string QntdITENS, SubTotalVendas, QNTD_S;
				 String ^QNTD_ITENS, ^qntd_s11, ^PRECO_S11;

				 QNTD_ITENS = textBoxQUANTIDADE_ITENS->Text;
				 string::size_type Size_Int2;
				 QntdITENS = msclr::interop::marshal_as<std::string>(QNTD_ITENS);
				 Qntd = stoi(QntdITENS, &Size_Int2);
				 QNTD = Qntd;

				 SUBTOTAL_VENDAS = (PRECO * Qntd);

				 stringstream convert;
				 convert << fixed << setprecision(2) << SUBTOTAL_VENDAS;
				 SubTotalVendas = convert.str();
				 subtotal_vendas = msclr::interop::marshal_as<String^>(SubTotalVendas);

				 textBoxSubTOTAL->Text = subtotal_vendas;


				 richTextBoxHISTORICO_VENDAS->AppendText(NOME);
				 richTextBoxHISTORICO_VENDAS->AppendText(".............");

				 stringstream convert2;
				 convert2 << QNTD;
				 QNTD_S = convert2.str();
				 qntd_s11 = msclr::interop::marshal_as<String^>(QNTD_S);
				 richTextBoxHISTORICO_VENDAS->AppendText(qntd_s11);
				 richTextBoxHISTORICO_VENDAS->AppendText(" x ");

				 stringstream convert3;
				 convert << fixed << setprecision(2) << PRECO;
				 preco = convert3.str();
				 PRECO_S11 = msclr::interop::marshal_as<String^>(preco);
				 richTextBoxHISTORICO_VENDAS->AppendText(PRECO_S11);
				 richTextBoxHISTORICO_VENDAS->AppendText(" = ");
				 richTextBoxHISTORICO_VENDAS->AppendText(subtotal_vendas);
				 richTextBoxHISTORICO_VENDAS->AppendText("\n");

				 TOTAL += SUBTOTAL_VENDAS;

				 stringstream convert4;
				 convert4 << fixed << setprecision(2) << TOTAL;
				 total = convert4.str();
				 Total = msclr::interop::marshal_as<String^>(total);
				 textBoxTOTAL->Text = Total;

				 textBoxNomeVENDAS->Clear();
				 richTextBoxVERRIFICAR->Clear();
				 textBoxQUANTIDADE_ITENS->Clear();
	}
	private: System::Void buttonConfirmarComprar_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 PAGAMENTOS PAGTO;
				 PAGTO.setTOTAL(Total);
				 PAGTO.ShowDialog();
				 

				 MessageBox::Show("SISTEMA PRONTO PARA NOVA VENDA!", "SGMB", MessageBoxButtons::OK, MessageBoxIcon::Information);

				 richTextBoxHISTORICO_VENDAS->Clear();
				 textBoxTOTAL->Clear();
				 textBoxSubTOTAL->Clear();
	}
	};
}
