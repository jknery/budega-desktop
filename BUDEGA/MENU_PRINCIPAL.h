#pragma once

#include "CADASTRO_CLIENTES.h"
#include "CADASTRO_FORNECEDOR.h"
#include "CADASTRO_ALIMENTOS.h"
#include "CADASTRO_PRODUTOS_SAUDE.h"
#include "CADASTRO_PERFUMARIA.h"
#include "CADASTRO_SANEANTES.h"

#include "EXIBIR_CLIENTES.h"
#include "EXIBIR_FORNECEDORES.h"
#include "EXIBIR_USUARIOS.h"

#include "PESQUISAR_CLIENTE.h"

#include "VENDAS.h"

#include "BUDEGAGUI.h"

namespace BUDEGA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MENU_PRINCIPAL
	/// </summary>
	public ref class MENU_PRINCIPAL : public System::Windows::Forms::Form
	{
		String^ NomeUser, ^NiveLUser;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labelNivelAtivo;

	private: System::Windows::Forms::Label^  labelUsuarioAtivo;
	private: System::Windows::Forms::ToolStripMenuItem^  cADASTROToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cLIENTEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fORNECEDORToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pRODUTOSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aLIMENTICIOSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pERFUMARIAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pRODUTOSDESAÚDEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pRODUTOSDELIMPEZAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aRTIGOSEMGERALToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  eXIBIRToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lISTADECLIENTESToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lISTADEFORNEDORESToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lISTADEUSUÁRIOSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pESQUISARToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cLIENTEToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  pORNECEDORToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pROTUDOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aLIMENTICIOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pERFUMARIAToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  pRODUTOSDESAÚDEToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  pRODUTOSDELIMPEZAToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  aRTIGOSEMGERALToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  eDITARToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  vENDASToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  eXCLUIRUSUARIOToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label2;

	public:

		void USER(String^, String^);

		MENU_PRINCIPAL(void)
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
		~MENU_PRINCIPAL()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  aRQUIVOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lOGOFFToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sAIRToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MENU_PRINCIPAL::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aRQUIVOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lOGOFFToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sAIRToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cADASTROToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cLIENTEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fORNECEDORToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pRODUTOSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aLIMENTICIOSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pERFUMARIAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pRODUTOSDESAÚDEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pRODUTOSDELIMPEZAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aRTIGOSEMGERALToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eXIBIRToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lISTADECLIENTESToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lISTADEFORNEDORESToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lISTADEUSUÁRIOSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pESQUISARToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cLIENTEToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pORNECEDORToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pROTUDOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aLIMENTICIOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pERFUMARIAToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pRODUTOSDESAÚDEToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pRODUTOSDELIMPEZAToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aRTIGOSEMGERALToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eDITARToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eXCLUIRUSUARIOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vENDASToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelNivelAtivo = (gcnew System::Windows::Forms::Label());
			this->labelUsuarioAtivo = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->aRQUIVOToolStripMenuItem,
					this->cADASTROToolStripMenuItem, this->eXIBIRToolStripMenuItem, this->pESQUISARToolStripMenuItem, this->eDITARToolStripMenuItem,
					this->vENDASToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(924, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aRQUIVOToolStripMenuItem
			// 
			this->aRQUIVOToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->lOGOFFToolStripMenuItem,
					this->sAIRToolStripMenuItem
			});
			this->aRQUIVOToolStripMenuItem->Name = L"aRQUIVOToolStripMenuItem";
			this->aRQUIVOToolStripMenuItem->Size = System::Drawing::Size(96, 21);
			this->aRQUIVOToolStripMenuItem->Text = L"ARQUIVO";
			// 
			// lOGOFFToolStripMenuItem
			// 
			this->lOGOFFToolStripMenuItem->Name = L"lOGOFFToolStripMenuItem";
			this->lOGOFFToolStripMenuItem->Size = System::Drawing::Size(198, 22);
			this->lOGOFFToolStripMenuItem->Text = L"LOGOUT";
			this->lOGOFFToolStripMenuItem->Click += gcnew System::EventHandler(this, &MENU_PRINCIPAL::lOGOFFToolStripMenuItem_Click);
			// 
			// sAIRToolStripMenuItem
			// 
			this->sAIRToolStripMenuItem->Name = L"sAIRToolStripMenuItem";
			this->sAIRToolStripMenuItem->Size = System::Drawing::Size(198, 22);
			this->sAIRToolStripMenuItem->Text = L"SAIR DO PROG.";
			this->sAIRToolStripMenuItem->Click += gcnew System::EventHandler(this, &MENU_PRINCIPAL::sAIRToolStripMenuItem_Click);
			// 
			// cADASTROToolStripMenuItem
			// 
			this->cADASTROToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->cLIENTEToolStripMenuItem,
					this->fORNECEDORToolStripMenuItem, this->pRODUTOSToolStripMenuItem
			});
			this->cADASTROToolStripMenuItem->Name = L"cADASTROToolStripMenuItem";
			this->cADASTROToolStripMenuItem->Size = System::Drawing::Size(107, 21);
			this->cADASTROToolStripMenuItem->Text = L"CADASTRO";
			// 
			// cLIENTEToolStripMenuItem
			// 
			this->cLIENTEToolStripMenuItem->Name = L"cLIENTEToolStripMenuItem";
			this->cLIENTEToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->cLIENTEToolStripMenuItem->Text = L"CLIENTE";
			this->cLIENTEToolStripMenuItem->Click += gcnew System::EventHandler(this, &MENU_PRINCIPAL::cLIENTEToolStripMenuItem_Click);
			// 
			// fORNECEDORToolStripMenuItem
			// 
			this->fORNECEDORToolStripMenuItem->Name = L"fORNECEDORToolStripMenuItem";
			this->fORNECEDORToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->fORNECEDORToolStripMenuItem->Text = L"FORNECEDOR";
			this->fORNECEDORToolStripMenuItem->Click += gcnew System::EventHandler(this, &MENU_PRINCIPAL::fORNECEDORToolStripMenuItem_Click);
			// 
			// pRODUTOSToolStripMenuItem
			// 
			this->pRODUTOSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->aLIMENTICIOSToolStripMenuItem,
					this->pERFUMARIAToolStripMenuItem, this->pRODUTOSDESAÚDEToolStripMenuItem, this->pRODUTOSDELIMPEZAToolStripMenuItem, this->aRTIGOSEMGERALToolStripMenuItem
			});
			this->pRODUTOSToolStripMenuItem->Name = L"pRODUTOSToolStripMenuItem";
			this->pRODUTOSToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->pRODUTOSToolStripMenuItem->Text = L"PRODUTOS";
			// 
			// aLIMENTICIOSToolStripMenuItem
			// 
			this->aLIMENTICIOSToolStripMenuItem->Name = L"aLIMENTICIOSToolStripMenuItem";
			this->aLIMENTICIOSToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->aLIMENTICIOSToolStripMenuItem->Text = L"ALIMENTICIOS";
			this->aLIMENTICIOSToolStripMenuItem->Click += gcnew System::EventHandler(this, &MENU_PRINCIPAL::aLIMENTICIOSToolStripMenuItem_Click);
			// 
			// pERFUMARIAToolStripMenuItem
			// 
			this->pERFUMARIAToolStripMenuItem->Name = L"pERFUMARIAToolStripMenuItem";
			this->pERFUMARIAToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->pERFUMARIAToolStripMenuItem->Text = L"PERFUMARIA";
			this->pERFUMARIAToolStripMenuItem->Click += gcnew System::EventHandler(this, &MENU_PRINCIPAL::pERFUMARIAToolStripMenuItem_Click);
			// 
			// pRODUTOSDESAÚDEToolStripMenuItem
			// 
			this->pRODUTOSDESAÚDEToolStripMenuItem->Name = L"pRODUTOSDESAÚDEToolStripMenuItem";
			this->pRODUTOSDESAÚDEToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->pRODUTOSDESAÚDEToolStripMenuItem->Text = L"PRODUTOS DE SAÚDE";
			this->pRODUTOSDESAÚDEToolStripMenuItem->Click += gcnew System::EventHandler(this, &MENU_PRINCIPAL::pRODUTOSDESAÚDEToolStripMenuItem_Click);
			// 
			// pRODUTOSDELIMPEZAToolStripMenuItem
			// 
			this->pRODUTOSDELIMPEZAToolStripMenuItem->Name = L"pRODUTOSDELIMPEZAToolStripMenuItem";
			this->pRODUTOSDELIMPEZAToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->pRODUTOSDELIMPEZAToolStripMenuItem->Text = L"PRODUTOS DE LIMPEZA";
			this->pRODUTOSDELIMPEZAToolStripMenuItem->Click += gcnew System::EventHandler(this, &MENU_PRINCIPAL::pRODUTOSDELIMPEZAToolStripMenuItem_Click);
			// 
			// aRTIGOSEMGERALToolStripMenuItem
			// 
			this->aRTIGOSEMGERALToolStripMenuItem->Name = L"aRTIGOSEMGERALToolStripMenuItem";
			this->aRTIGOSEMGERALToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->aRTIGOSEMGERALToolStripMenuItem->Text = L"ARTIGOS EM GERAL*";
			// 
			// eXIBIRToolStripMenuItem
			// 
			this->eXIBIRToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->lISTADECLIENTESToolStripMenuItem,
					this->lISTADEFORNEDORESToolStripMenuItem, this->lISTADEUSUÁRIOSToolStripMenuItem
			});
			this->eXIBIRToolStripMenuItem->Name = L"eXIBIRToolStripMenuItem";
			this->eXIBIRToolStripMenuItem->Size = System::Drawing::Size(79, 21);
			this->eXIBIRToolStripMenuItem->Text = L"EXIBIR";
			// 
			// lISTADECLIENTESToolStripMenuItem
			// 
			this->lISTADECLIENTESToolStripMenuItem->Name = L"lISTADECLIENTESToolStripMenuItem";
			this->lISTADECLIENTESToolStripMenuItem->Size = System::Drawing::Size(262, 22);
			this->lISTADECLIENTESToolStripMenuItem->Text = L"LISTA DE CLIENTES";
			this->lISTADECLIENTESToolStripMenuItem->Click += gcnew System::EventHandler(this, &MENU_PRINCIPAL::lISTADECLIENTESToolStripMenuItem_Click);
			// 
			// lISTADEFORNEDORESToolStripMenuItem
			// 
			this->lISTADEFORNEDORESToolStripMenuItem->Name = L"lISTADEFORNEDORESToolStripMenuItem";
			this->lISTADEFORNEDORESToolStripMenuItem->Size = System::Drawing::Size(262, 22);
			this->lISTADEFORNEDORESToolStripMenuItem->Text = L"LISTA DE FORNEDORES";
			this->lISTADEFORNEDORESToolStripMenuItem->Click += gcnew System::EventHandler(this, &MENU_PRINCIPAL::lISTADEFORNEDORESToolStripMenuItem_Click);
			// 
			// lISTADEUSUÁRIOSToolStripMenuItem
			// 
			this->lISTADEUSUÁRIOSToolStripMenuItem->Name = L"lISTADEUSUÁRIOSToolStripMenuItem";
			this->lISTADEUSUÁRIOSToolStripMenuItem->Size = System::Drawing::Size(262, 22);
			this->lISTADEUSUÁRIOSToolStripMenuItem->Text = L"LISTA DE USUÁRIOS";
			this->lISTADEUSUÁRIOSToolStripMenuItem->Click += gcnew System::EventHandler(this, &MENU_PRINCIPAL::lISTADEUSUÁRIOSToolStripMenuItem_Click);
			// 
			// pESQUISARToolStripMenuItem
			// 
			this->pESQUISARToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->cLIENTEToolStripMenuItem1,
					this->pORNECEDORToolStripMenuItem, this->pROTUDOToolStripMenuItem
			});
			this->pESQUISARToolStripMenuItem->Name = L"pESQUISARToolStripMenuItem";
			this->pESQUISARToolStripMenuItem->Size = System::Drawing::Size(113, 21);
			this->pESQUISARToolStripMenuItem->Text = L"PESQUISAR";
			// 
			// cLIENTEToolStripMenuItem1
			// 
			this->cLIENTEToolStripMenuItem1->Name = L"cLIENTEToolStripMenuItem1";
			this->cLIENTEToolStripMenuItem1->Size = System::Drawing::Size(184, 22);
			this->cLIENTEToolStripMenuItem1->Text = L"CLIENTE";
			this->cLIENTEToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MENU_PRINCIPAL::cLIENTEToolStripMenuItem1_Click);
			// 
			// pORNECEDORToolStripMenuItem
			// 
			this->pORNECEDORToolStripMenuItem->Name = L"pORNECEDORToolStripMenuItem";
			this->pORNECEDORToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->pORNECEDORToolStripMenuItem->Text = L"FORNECEDOR";
			// 
			// pROTUDOToolStripMenuItem
			// 
			this->pROTUDOToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->aLIMENTICIOToolStripMenuItem,
					this->pERFUMARIAToolStripMenuItem1, this->pRODUTOSDESAÚDEToolStripMenuItem1, this->pRODUTOSDELIMPEZAToolStripMenuItem1, this->aRTIGOSEMGERALToolStripMenuItem1
			});
			this->pROTUDOToolStripMenuItem->Name = L"pROTUDOToolStripMenuItem";
			this->pROTUDOToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->pROTUDOToolStripMenuItem->Text = L"PRODUTO";
			// 
			// aLIMENTICIOToolStripMenuItem
			// 
			this->aLIMENTICIOToolStripMenuItem->Name = L"aLIMENTICIOToolStripMenuItem";
			this->aLIMENTICIOToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->aLIMENTICIOToolStripMenuItem->Text = L"ALIMENTICIO";
			// 
			// pERFUMARIAToolStripMenuItem1
			// 
			this->pERFUMARIAToolStripMenuItem1->Name = L"pERFUMARIAToolStripMenuItem1";
			this->pERFUMARIAToolStripMenuItem1->Size = System::Drawing::Size(265, 22);
			this->pERFUMARIAToolStripMenuItem1->Text = L"PERFUMARIA";
			// 
			// pRODUTOSDESAÚDEToolStripMenuItem1
			// 
			this->pRODUTOSDESAÚDEToolStripMenuItem1->Name = L"pRODUTOSDESAÚDEToolStripMenuItem1";
			this->pRODUTOSDESAÚDEToolStripMenuItem1->Size = System::Drawing::Size(265, 22);
			this->pRODUTOSDESAÚDEToolStripMenuItem1->Text = L"PRODUTOS DE SAÚDE";
			// 
			// pRODUTOSDELIMPEZAToolStripMenuItem1
			// 
			this->pRODUTOSDELIMPEZAToolStripMenuItem1->Name = L"pRODUTOSDELIMPEZAToolStripMenuItem1";
			this->pRODUTOSDELIMPEZAToolStripMenuItem1->Size = System::Drawing::Size(265, 22);
			this->pRODUTOSDELIMPEZAToolStripMenuItem1->Text = L"PRODUTOS DE LIMPEZA";
			// 
			// aRTIGOSEMGERALToolStripMenuItem1
			// 
			this->aRTIGOSEMGERALToolStripMenuItem1->Name = L"aRTIGOSEMGERALToolStripMenuItem1";
			this->aRTIGOSEMGERALToolStripMenuItem1->Size = System::Drawing::Size(265, 22);
			this->aRTIGOSEMGERALToolStripMenuItem1->Text = L"ARTIGOS EM GERAL*";
			// 
			// eDITARToolStripMenuItem
			// 
			this->eDITARToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->eXCLUIRUSUARIOToolStripMenuItem });
			this->eDITARToolStripMenuItem->Name = L"eDITARToolStripMenuItem";
			this->eDITARToolStripMenuItem->Size = System::Drawing::Size(81, 21);
			this->eDITARToolStripMenuItem->Text = L"EDITAR";
			// 
			// eXCLUIRUSUARIOToolStripMenuItem
			// 
			this->eXCLUIRUSUARIOToolStripMenuItem->Name = L"eXCLUIRUSUARIOToolStripMenuItem";
			this->eXCLUIRUSUARIOToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->eXCLUIRUSUARIOToolStripMenuItem->Text = L"EXCLUIR USUARIO";
			// 
			// vENDASToolStripMenuItem
			// 
			this->vENDASToolStripMenuItem->Name = L"vENDASToolStripMenuItem";
			this->vENDASToolStripMenuItem->Size = System::Drawing::Size(84, 21);
			this->vENDASToolStripMenuItem->Text = L"VENDAS";
			this->vENDASToolStripMenuItem->Click += gcnew System::EventHandler(this, &MENU_PRINCIPAL::vENDASToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label1->Location = System::Drawing::Point(0, 543);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(477, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sistema de Gerenciamento para Mercearias de Bairro";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label2->Location = System::Drawing::Point(0, 525);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(492, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Projeto Técnicas de Programação - 3º Estagio - 2018.2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(4, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Usuário Ativo:";
			// 
			// labelNivelAtivo
			// 
			this->labelNivelAtivo->AutoSize = true;
			this->labelNivelAtivo->BackColor = System::Drawing::Color::Transparent;
			this->labelNivelAtivo->Location = System::Drawing::Point(4, 74);
			this->labelNivelAtivo->Name = L"labelNivelAtivo";
			this->labelNivelAtivo->Size = System::Drawing::Size(0, 18);
			this->labelNivelAtivo->TabIndex = 4;
			// 
			// labelUsuarioAtivo
			// 
			this->labelUsuarioAtivo->AutoSize = true;
			this->labelUsuarioAtivo->BackColor = System::Drawing::Color::Transparent;
			this->labelUsuarioAtivo->Location = System::Drawing::Point(4, 48);
			this->labelUsuarioAtivo->Name = L"labelUsuarioAtivo";
			this->labelUsuarioAtivo->Size = System::Drawing::Size(0, 18);
			this->labelUsuarioAtivo->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(785, 441);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(139, 120);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// MENU_PRINCIPAL
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(924, 561);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labelUsuarioAtivo);
			this->Controls->Add(this->labelNivelAtivo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->Name = L"MENU_PRINCIPAL";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SGMB - Menu Principal";
			this->Load += gcnew System::EventHandler(this, &MENU_PRINCIPAL::MENU_PRINCIPAL_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sAIRToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 Application::Exit();

	}
	private: System::Void lOGOFFToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 this->Close();
	}
	private: System::Void MENU_PRINCIPAL_Load(System::Object^  sender, System::EventArgs^  e) {

				 labelNivelAtivo->Text = NiveLUser;
				 labelUsuarioAtivo->Text = NomeUser;

	}
	private: System::Void cLIENTEToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 CADASTRO_CLIENTES CadCLI;
				 CadCLI.ShowDialog();
	}
	private: System::Void fORNECEDORToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 CADASTRO_FORNECEDOR CadFor;
				 CadFor.ShowDialog();

	}
	private: System::Void aLIMENTICIOSToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 CADASTRO_ALIMENTOS CadALI;
				 CadALI.ShowDialog();
	}
	private: System::Void pRODUTOSDESAÚDEToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 CADASTRO_PRODUTOS_SAUDE CadProdSaude;
				 CadProdSaude.ShowDialog();
	};

	private: System::Void pERFUMARIAToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 CADASTRO_PERFUMARIA CadPerf;
				 CadPerf.ShowDialog();
	}
private: System::Void pRODUTOSDELIMPEZAToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				CADASTRO_SANEANTES CadSane;
				CadSane.ShowDialog();
}
private: System::Void lISTADECLIENTESToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 EXIBIR_CLIENTES ShowCLI;
			 ShowCLI.ShowDialog();
}
private: System::Void lISTADEFORNEDORESToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 EXIBIR_FORNECEDORES ShowFOR;
			 ShowFOR.ShowDialog();
}
private: System::Void lISTADEUSUÁRIOSToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 EXIBIR_USUARIOS ShowUSER;
			 ShowUSER.ShowDialog();


}
private: System::Void vENDASToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 VENDAS vender;
			 vender.ShowDialog();

}
private: System::Void cLIENTEToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {

			 PESQUISAR_CLIENTE askcli;
			 askcli.ShowDialog();

}
};
}
