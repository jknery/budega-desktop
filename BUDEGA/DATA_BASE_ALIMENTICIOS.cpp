#include "CadastroDados.h"

void DATA_BASE_ALIMENTICIOS::GRAVA_DADOS(ALIMENTICIOS* ALIMENT)
{
	fstream DATA_ALIMENTICIOS;

	DATA_ALIMENTICIOS.open("ALIMENTICIOS.mdf", ios::in | ios::out | ios::app);

	if (DATA_ALIMENTICIOS.is_open() == true)
	{
		DATA_ALIMENTICIOS << "##########" << endl;
		DATA_ALIMENTICIOS << ALIMENT->GET_NOME_PRODUTO() << endl;
		DATA_ALIMENTICIOS << ALIMENT->GET_TIPO_PRODUTO() << endl;
		DATA_ALIMENTICIOS << ALIMENT->GET_MARCA() << endl;
		DATA_ALIMENTICIOS << ALIMENT->GET_REGISTRO_ANVISA() << endl;
		DATA_ALIMENTICIOS << ALIMENT->GET_REFERENCIA() << endl;
		DATA_ALIMENTICIOS << fixed << setprecision(2) << ALIMENT->GET_PRECO() << endl;
		DATA_ALIMENTICIOS << ALIMENT->GET_QNTD_ESTOQUE() << endl;
	}
	DATA_ALIMENTICIOS.close();
}