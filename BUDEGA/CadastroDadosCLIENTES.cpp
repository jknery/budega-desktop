#include "CadastroDados.h"

DADOS_FISICO_JURIDICOS::DADOS_FISICO_JURIDICOS()
{
	NOME = "NULL";
	TELEFONE_FIXO = "NULL";
	TELEFONE_MOVEL = "NULL";
	CPF_CNPJ = "NULL";
	EMAIL = "NULL";
}
//////////////////////////////////////////////////////////////////
CLIENTES::CLIENTES()
{
	RG = "NULL";
	SEXO = "NULL";
}
/////////////////////////////////////////////////////////////////
string CLIENTES::GET_NOME()
{
	return NOME;
}
string CLIENTES::GET_TELEFONE_FIXO()
{
	return TELEFONE_FIXO;
}
string CLIENTES::GET_TELEFONE_MOVEL()
{
	return TELEFONE_MOVEL;
}
string CLIENTES::GET_CPF_CNPJ()
{
	return CPF_CNPJ;
}
string CLIENTES::GET_EMAIL()
{
	return EMAIL;
}
string CLIENTES::GET_RG()
{
	return RG;
}
string CLIENTES::GET_SEXO()
{
	return SEXO;
}
/////////////////////////////////////////////////////////////
void CLIENTES::SET_NOME(string nome)
{
	NOME = nome;
}
void CLIENTES::SET_ENDERECO(string RUA, string NumCasa, string BAIRRO, string Cep)
{
	ADDR_CLI.NomeDaRua = RUA;
	ADDR_CLI.NumDaCasa = NumCasa;
	ADDR_CLI.Bairro = BAIRRO;
	ADDR_CLI.CEP = Cep;
}
void CLIENTES::SET_TELEFONE_FIXO(string fixo)
{
	TELEFONE_FIXO = fixo;
}
void CLIENTES::SET_TELEFONE_MOVEL(string movel)
{
	TELEFONE_MOVEL = movel;
}
void CLIENTES::SET_CPF_CNPJ(string cpf_cnpj)
{
	CPF_CNPJ = cpf_cnpj;
}
void CLIENTES::SET_EMAIL(string email)
{
	EMAIL = email;
}
void CLIENTES::SET_RG(string rg)
{
	RG = rg;
}
void CLIENTES::SET_SEXO(string sexo)
{
	SEXO = sexo;
}
