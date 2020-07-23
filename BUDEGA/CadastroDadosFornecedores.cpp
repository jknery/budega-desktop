#include "CadastroDados.h"

FORNECEDORES::FORNECEDORES()
{
	 NOME_FANTASIA = "NULL";
	 TIPO_DE_PRODUTO_FORNECIDO = "NULL";
	 REGISTRO_ANVISA = "NULL";
}

string FORNECEDORES::GET_NOME()
{
	return NOME;
}
string FORNECEDORES::GET_TELEFONE_FIXO()
{
	return TELEFONE_FIXO;
}
string FORNECEDORES::GET_TELEFONE_MOVEL()
{
	return TELEFONE_MOVEL;
}
string FORNECEDORES::GET_CPF_CNPJ()
{
	return CPF_CNPJ;
}
string FORNECEDORES::GET_EMAIL()
{
	return EMAIL;
}
string FORNECEDORES::GET_NOME_FANTASIA()
{
	return NOME_FANTASIA;
}
string FORNECEDORES::GET_TIPO_DE_PRODUTO_FORNECIDO()
{
	return TIPO_DE_PRODUTO_FORNECIDO;
}
string FORNECEDORES::GET_REGISTRO_ANVISA()
{
	return REGISTRO_ANVISA;
}

void FORNECEDORES::SET_NOME(string nome)
{
	NOME = nome;
}
void FORNECEDORES::SET_ENDERECO(string rua, string numCasa, string bairro, string cep)
{
	ADDR_FORN.NomeDaRua = rua;
	ADDR_FORN.NumDaCasa = numCasa;
	ADDR_FORN.Bairro = bairro;
	ADDR_FORN.CEP = cep;
}

void FORNECEDORES::SET_TELEFONE_FIXO(string fixo)
{
	TELEFONE_FIXO = fixo;
}

void FORNECEDORES::SET_TELEFONE_MOVEL(string movel)
{
	TELEFONE_MOVEL = movel;
}

void FORNECEDORES::SET_CPF_CNPJ(string cnpj)
{
	CPF_CNPJ = cnpj;
}
void FORNECEDORES::SET_EMAIL(string email)
{
	EMAIL = email;
}

void FORNECEDORES::SET_NOME_FANTASIA(string nomeFan)
{
	NOME_FANTASIA = nomeFan;
}

void FORNECEDORES::SET_TIPO_DE_PRODUTO_FORNECIDO(string tipoProduto)
{
	TIPO_DE_PRODUTO_FORNECIDO = tipoProduto;
}

void FORNECEDORES::SET_REGISTRO_ANVISA(string anvisa)
{
	REGISTRO_ANVISA = anvisa;
}