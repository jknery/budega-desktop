#ifndef CADASTRODADOS_H
#define CADASTRODADOS_H

#include "BUDEGA.h"

using namespace std;

	class DADOS_FISICO_JURIDICOS
	{

	protected:

		string NOME;
		string CPF_CNPJ;

		struct ENDERECO
		{
			string NomeDaRua;
			string NumDaCasa;
			string Bairro;
			string CEP;
		};

		string TELEFONE_FIXO;
		string TELEFONE_MOVEL;
		string EMAIL;

	public:

		DADOS_FISICO_JURIDICOS();

		virtual string GET_NOME() = 0;
		virtual string GET_TELEFONE_FIXO() = 0;
		virtual string GET_TELEFONE_MOVEL() = 0;
		virtual string GET_CPF_CNPJ() = 0;
		virtual string GET_EMAIL() = 0;

		virtual void SET_NOME(string) = 0;
		virtual void SET_ENDERECO(string, string, string, string) = 0;
		virtual void SET_TELEFONE_FIXO(string) = 0;
		virtual void SET_TELEFONE_MOVEL(string) = 0;
		virtual void SET_CPF_CNPJ(string) = 0;
		virtual void SET_EMAIL(string) = 0;
	};

	

	class CLIENTES: public DADOS_FISICO_JURIDICOS
	{
		string RG;
		string SEXO;
		

	public:

		CLIENTES();
		ENDERECO ADDR_CLI;

		string GET_NOME();
		string GET_TELEFONE_FIXO();
		string GET_TELEFONE_MOVEL();
		string GET_CPF_CNPJ();
		string GET_EMAIL();
		string GET_RG();
		string GET_SEXO();
		

		void SET_NOME(string);
		void SET_ENDERECO(string, string, string, string);
		void SET_TELEFONE_FIXO(string);
		void SET_TELEFONE_MOVEL(string);
		void SET_CPF_CNPJ(string);
		void SET_EMAIL(string);
		void SET_RG(string);
		void SET_SEXO(string);
		
	};

	class FORNECEDORES: public DADOS_FISICO_JURIDICOS
	{
		string NOME_FANTASIA;
		string TIPO_DE_PRODUTO_FORNECIDO;
		string REGISTRO_ANVISA;

	public:

		FORNECEDORES();
		ENDERECO ADDR_FORN;

		string GET_NOME();
		string GET_TELEFONE_FIXO();
		string GET_TELEFONE_MOVEL();
		string GET_CPF_CNPJ();
		string GET_EMAIL();
		string GET_NOME_FANTASIA();
		string GET_TIPO_DE_PRODUTO_FORNECIDO();
		string GET_REGISTRO_ANVISA();

		void SET_NOME(string);
		void SET_ENDERECO(string, string, string, string);
		void SET_TELEFONE_FIXO(string);
		void SET_TELEFONE_MOVEL(string);
		void SET_CPF_CNPJ(string);
		void SET_EMAIL(string);
		void SET_NOME_FANTASIA(string);
		void SET_TIPO_DE_PRODUTO_FORNECIDO(string);
		void SET_REGISTRO_ANVISA(string);
	};

	class DADOS_PRODUTOS
	{

	protected:

		string REFERENCIA;
		string NOME_PRODUTO;
		string TIPO_PRODUTO;
		string MARCA;
		float PRECO;
		int QUANTIDADE_ESTOQUE;
		string REGISTRO_ANVISA;

	public:

		
		virtual string GET_REFERENCIA() = 0;
		virtual string GET_NOME_PRODUTO() = 0;
		virtual string GET_TIPO_PRODUTO() = 0;
		virtual string GET_MARCA() = 0;
		virtual float GET_PRECO() = 0;
		virtual int GET_QNTD_ESTOQUE() = 0;
		virtual string GET_REGISTRO_ANVISA() = 0;
		

		virtual void SET_REFERENCIA(string) = 0;
		virtual void SET_NOME_PRODUTO(string) = 0;
		virtual void SET_TIPO_PRODUTO(string) = 0;
		virtual void SET_MARCA(string) = 0;
		virtual void SET_PRECO(float) = 0;
		virtual void SET_QNTD_ESTOQUE(int) = 0;
		virtual void SET_REGISTRO_ANVISA(string) = 0;

	};

	

	class PERFUMARIA: public DADOS_PRODUTOS
	{
	public:

		PERFUMARIA();

		string GET_REFERENCIA();
		string GET_NOME_PRODUTO();//
		string GET_TIPO_PRODUTO();//
		string GET_MARCA();//
		float GET_PRECO();//
		string GET_REGISTRO_ANVISA();//
		int GET_QNTD_ESTOQUE();

		void SET_REFERENCIA(string);
		void SET_NOME_PRODUTO(string);
		void SET_TIPO_PRODUTO(string);
		void SET_MARCA(string);
		void SET_PRECO(float);
		void SET_REGISTRO_ANVISA(string);
		void SET_QNTD_ESTOQUE(int);
		
	};

	class ALIMENTICIOS: public DADOS_PRODUTOS
	{

	public:

		ALIMENTICIOS();

		string GET_REFERENCIA();
		string GET_NOME_PRODUTO();//
		string GET_TIPO_PRODUTO();//
		string GET_MARCA();//
		float GET_PRECO();//
		string GET_REGISTRO_ANVISA();//
		int GET_QNTD_ESTOQUE();

		void SET_REFERENCIA(string);
		void SET_NOME_PRODUTO(string);
		void SET_TIPO_PRODUTO(string);
		void SET_MARCA(string);
		void SET_PRECO(float);
		void SET_REGISTRO_ANVISA(string);
		void SET_QNTD_ESTOQUE(int);
	};

	class SANEANTES: public DADOS_PRODUTOS
	{

	public:

		SANEANTES();

		string GET_REFERENCIA();
		string GET_NOME_PRODUTO();//
		string GET_FORMULA();//
		string GET_TIPO_PRODUTO();//
		string GET_MARCA();//
		float GET_PRECO();//
		string GET_REGISTRO_ANVISA();//
		string GET_LABORATORIO();//
		int GET_QNTD_ESTOQUE();

		void SET_REFERENCIA(string);
		void SET_FORMULA(string);
		void SET_NOME_PRODUTO(string);
		void SET_TIPO_PRODUTO(string);
		void SET_MARCA(string);
		void SET_PRECO(float);
		void SET_REGISTRO_ANVISA(string);
		void SET_LABORATORIO(string);
		void SET_QNTD_ESTOQUE(int);
	};

	class PRODUTOS_SAUDE: public DADOS_PRODUTOS
	{

	public:

		PRODUTOS_SAUDE();

		string GET_REFERENCIA();
		string GET_NOME_PRODUTO();//
		string GET_TIPO_PRODUTO();//
		string GET_MARCA();//
		float GET_PRECO();//
		string GET_REGISTRO_ANVISA();//
		int GET_QNTD_ESTOQUE();

		void SET_REFERENCIA(string);
		void SET_NOME_PRODUTO(string);
		void SET_TIPO_PRODUTO(string);
		void SET_MARCA(string);
		void SET_PRECO(float);
		void SET_REGISTRO_ANVISA(string);
		void SET_QNTD_ESTOQUE(int);
	};

	class DATA_BASE_CLIENTES: public CLIENTES
	{
	public:
		void GRAVA_DADOS(CLIENTES*);
		
	};

	class DATA_BASE_FORNECEDORES: public FORNECEDORES
	{
	public:
		void GRAVA_DADOS(FORNECEDORES*);
		
	};

	
	class DATA_BASE_PERFUMARIA: public PERFUMARIA
	{
	public:
		void GRAVA_DADOS(PERFUMARIA*);
		
	};

	class DATA_BASE_ALIMENTICIOS: public ALIMENTICIOS
	{
	public:
		void GRAVA_DADOS(ALIMENTICIOS*);
		
	};

	class DATA_BASE_SANEANTES: public SANEANTES
	{
	public:
		void GRAVA_DADOS(SANEANTES*);
	
	};

	class DATA_BASE_PROD_SAUDE: public PRODUTOS_SAUDE
	{
	public:
		void GRAVA_DADOS(PRODUTOS_SAUDE*);
		
	};

#endif
