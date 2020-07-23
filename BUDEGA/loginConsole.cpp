#include "loginConsole.h"

USUARIO::USUARIO()
{
	 Nome = "NULL";
	 Senha = "NULL";
	 Nivel = "NULL";
}

void USUARIO::setNome(string NOME)
{
	Nome = NOME;
}

void USUARIO::setSenha(string SENHA)
{
	Senha = SENHA;
}

void USUARIO::setNivel(string NIVEL)
{
	Nivel = NIVEL;
}


string USUARIO::getNome()
{
	return Nome;
}

string USUARIO::getSenha()
{
	return Senha;
}

string USUARIO::getNivel()
{
	return Nivel;
}



bool USUARIO::GravaDados()
{
	fstream REC;

	REC.open("Login.mdf", ios::in | ios::out | ios::app);

	if (REC.is_open())
	{
		REC << ESCAPE << endl;
		REC << Nome << endl;
		REC << Senha << endl;
		REC << Nivel << endl;
		REC.close();
		return true;
	}
	else
	{
		return false;
	}
	

	
}

bool USUARIO::ValidaDados(string logon, string senha, string nivel)
{
	string LINE;

	int odt = 0;
	
	bool VALIDADO = false;

	ifstream CHECK;

	CHECK.open("Login.mdf");

	if (CHECK.is_open())
	{
		while (getline(CHECK, LINE))
		{
			if (LINE == logon)
			{
				++odt;
			}

			if (LINE == senha)
			{
				++odt;
			}

			if (LINE == nivel)
			{
				++odt;
			}

			if (odt == 3)
			{
				VALIDADO = true;
			}

		}
	}
	CHECK.close();

	return VALIDADO;

}