#include "Creditos.h"

BolsaCreditos::BolsaCreditos(int n, int m, int dificultad)
{
	creditos = 2*(n*m)*dificultad;
};

bool BolsaCreditos::hayCreditosSuficientes(int creditos)
{
	return this->creditos >= creditos;
}
int BolsaCreditos::pagar(int creditosAPagar)
{	int creditosPagados= 0;
	if(hayCreditosSuficientes(creditosAPagar))
	{
		this->creditos -= creditosAPagar;
		creditosPagados = creditosAPagar;
	}
	return creditosPagados;
};

int BolsaCreditos::cobrar(int creditosACobrar)
{
	this->creditos += creditosACobrar;
	return creditosACobrar;
};

int BolsaCreditos::obtenerCreditos()
{
	return this->creditos;
	}
