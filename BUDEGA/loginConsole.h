#ifndef LOGINCONSOLE_H
#define LOGINCONSOLE_H

#include "BUDEGA.h"

using namespace std;

class  USUARIO
	{
		string Nome;
		string Senha;
		string Nivel;

	public:

		USUARIO();

		void setNome(string);
		void setSenha(string);
		void setNivel(string);

		string getNome();
		string getSenha();
		string getNivel();

		bool GravaDados();
		bool ValidaDados(string, string, string);

};



#endif
