#include "CadastroDados.h"

using namespace std;


void DATA_BASE_CLIENTES::GRAVA_DADOS(CLIENTES* Cli)
{
	fstream DATA_CLIENTE;

	DATA_CLIENTE.open("CLIENTES.mdf", ios::in | ios::out | ios::app);

	if(DATA_CLIENTE.is_open() == true)
	{
		DATA_CLIENTE << "##########" << endl;
		DATA_CLIENTE << Cli -> GET_NOME() << endl;
		DATA_CLIENTE << Cli -> GET_CPF_CNPJ() << endl;
		DATA_CLIENTE << Cli -> GET_RG() << endl;
		DATA_CLIENTE << Cli -> GET_SEXO() << endl;
		DATA_CLIENTE << Cli -> ADDR_CLI . NomeDaRua << endl;
		DATA_CLIENTE << Cli -> ADDR_CLI . NumDaCasa << endl;
		DATA_CLIENTE << Cli -> ADDR_CLI . Bairro << endl;
		DATA_CLIENTE << Cli -> ADDR_CLI . CEP << endl;
		DATA_CLIENTE << Cli -> GET_TELEFONE_FIXO() << endl;
		DATA_CLIENTE << Cli -> GET_TELEFONE_MOVEL() << endl;
		DATA_CLIENTE << Cli -> GET_EMAIL() << endl;
	}

	DATA_CLIENTE.close();
}
