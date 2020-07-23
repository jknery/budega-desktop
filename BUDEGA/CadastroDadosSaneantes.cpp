#include "CadastroDados.h"

SANEANTES::SANEANTES()
{
	REFERENCIA = "NULL";
	NOME_PRODUTO = "NULL";
	TIPO_PRODUTO = "NULL";
	MARCA = "NULL";
	PRECO = 0.0;
	REGISTRO_ANVISA = "NULL";
	QUANTIDADE_ESTOQUE = 0;
}

int SANEANTES::GET_QNTD_ESTOQUE()
{
	return QUANTIDADE_ESTOQUE;
}

string SANEANTES::GET_REFERENCIA()
{
	return REFERENCIA;
}
string SANEANTES::GET_NOME_PRODUTO()
{
	return NOME_PRODUTO;
}

string SANEANTES::GET_TIPO_PRODUTO()
{
	return TIPO_PRODUTO;
}
string SANEANTES::GET_MARCA()
{
	return MARCA;
}
float SANEANTES::GET_PRECO()
{
	return PRECO;
}
string SANEANTES::GET_REGISTRO_ANVISA()
{
	return REGISTRO_ANVISA;
}

void SANEANTES::SET_QNTD_ESTOQUE(int qntd)
{
	QUANTIDADE_ESTOQUE = qntd;
}

void SANEANTES::SET_REFERENCIA(string referencia)
{
	REFERENCIA = referencia;
}

void SANEANTES::SET_NOME_PRODUTO(string nome)
{
	NOME_PRODUTO = nome;
}
void SANEANTES::SET_TIPO_PRODUTO(string tipo)
{
	TIPO_PRODUTO = tipo;
}
void SANEANTES::SET_MARCA(string marca)
{
	MARCA = marca;
}
void SANEANTES::SET_PRECO(float price)
{
	PRECO = price;
}
void SANEANTES::SET_REGISTRO_ANVISA(string anvisa)
{
	REGISTRO_ANVISA = anvisa;
}
