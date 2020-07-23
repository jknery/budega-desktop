#include "CadastroDados.h"

void DATA_BASE_PERFUMARIA::GRAVA_DADOS(PERFUMARIA* PERFUM)
{
	fstream DATA_PERFUMARIA;

	DATA_PERFUMARIA.open("PERFUMARIA.mdf", ios::in | ios::out | ios::app);

	if (DATA_PERFUMARIA.is_open() == true)
	{
		DATA_PERFUMARIA << "##########" << endl;
		DATA_PERFUMARIA << PERFUM->GET_NOME_PRODUTO() << endl;
		DATA_PERFUMARIA << PERFUM->GET_TIPO_PRODUTO() << endl;
		DATA_PERFUMARIA << PERFUM->GET_MARCA() << endl;
		DATA_PERFUMARIA << PERFUM->GET_REGISTRO_ANVISA() << endl;
		DATA_PERFUMARIA << PERFUM->GET_REFERENCIA() << endl;
		DATA_PERFUMARIA << fixed << setprecision(2) << PERFUM->GET_PRECO() << endl;
		DATA_PERFUMARIA << PERFUM->GET_QNTD_ESTOQUE() << endl;
	}

	DATA_PERFUMARIA.close();
}