#include "CadastroDados.h"

void DATA_BASE_PROD_SAUDE::GRAVA_DADOS(PRODUTOS_SAUDE* SAUDE)
{
	fstream DATA_PROD_SAUDE;

	DATA_PROD_SAUDE.open("PROD_SAUDE.mdf", ios::in | ios::out | ios::app);

	if (DATA_PROD_SAUDE.is_open() == true)
	{
		DATA_PROD_SAUDE << "##########" << endl;
		DATA_PROD_SAUDE << SAUDE->GET_NOME_PRODUTO() << endl;
		DATA_PROD_SAUDE << SAUDE->GET_TIPO_PRODUTO() << endl;
		DATA_PROD_SAUDE << SAUDE->GET_MARCA() << endl;
		DATA_PROD_SAUDE << SAUDE->GET_REGISTRO_ANVISA() << endl;
		DATA_PROD_SAUDE << SAUDE->GET_REFERENCIA() << endl;
		DATA_PROD_SAUDE << fixed << setprecision(2) << SAUDE->GET_PRECO() << endl;
		DATA_PROD_SAUDE << SAUDE->GET_QNTD_ESTOQUE() << endl;
	}

	DATA_PROD_SAUDE.close();
}