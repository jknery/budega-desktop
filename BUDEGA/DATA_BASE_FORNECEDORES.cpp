#include "CadastroDados.h"

void DATA_BASE_FORNECEDORES::GRAVA_DADOS(FORNECEDORES* Forn)
{
	fstream DATA_FORNECEDORES;

	DATA_FORNECEDORES.open("FORNECEDORES.mdf", ios::in | ios::out | ios::app);

	if (DATA_FORNECEDORES.is_open() == true)
	{
		DATA_FORNECEDORES << "##########" << endl;
		DATA_FORNECEDORES << Forn->GET_NOME() << endl;
		DATA_FORNECEDORES << Forn->GET_NOME_FANTASIA() << endl;
		DATA_FORNECEDORES << Forn->GET_CPF_CNPJ() << endl;
		DATA_FORNECEDORES << Forn->ADDR_FORN.NomeDaRua << endl;
		DATA_FORNECEDORES << Forn->ADDR_FORN.NumDaCasa << endl;
		DATA_FORNECEDORES << Forn->ADDR_FORN.Bairro << endl;
		DATA_FORNECEDORES << Forn->ADDR_FORN.CEP << endl;
		DATA_FORNECEDORES << Forn->GET_TELEFONE_FIXO() << endl;
		DATA_FORNECEDORES << Forn->GET_TELEFONE_MOVEL() << endl;
		DATA_FORNECEDORES << Forn->GET_EMAIL() << endl;
		DATA_FORNECEDORES << Forn->GET_TIPO_DE_PRODUTO_FORNECIDO() << endl;
		DATA_FORNECEDORES << Forn->GET_REGISTRO_ANVISA();

	}

	DATA_FORNECEDORES.close();
}