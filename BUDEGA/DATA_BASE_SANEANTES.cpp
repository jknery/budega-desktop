#include "CadastroDados.h"

void DATA_BASE_SANEANTES::GRAVA_DADOS(SANEANTES* SANE)
{
	fstream DATA_SANEANTES;

	DATA_SANEANTES.open("SANEANTES.mdf", ios::in | ios::out | ios::app);

	if (DATA_SANEANTES.is_open() == true)
	{
		DATA_SANEANTES << "##########" << endl;
		DATA_SANEANTES << SANE->GET_NOME_PRODUTO() << endl;
		DATA_SANEANTES << SANE->GET_TIPO_PRODUTO() << endl;
		DATA_SANEANTES << SANE->GET_MARCA() << endl;
		DATA_SANEANTES << SANE->GET_REGISTRO_ANVISA() << endl;
		DATA_SANEANTES << SANE->GET_REFERENCIA() << endl;
		DATA_SANEANTES << fixed << setprecision(2) << SANE->GET_PRECO() << endl;
		DATA_SANEANTES << SANE->GET_QNTD_ESTOQUE() << endl;
	}

	DATA_SANEANTES.close();
}