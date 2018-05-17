#include "Cosecha.h"

Cosecha::Cosecha(char tipoCosecha, int cantidad)
{
	this->tipoCosecha = tipoCosecha;
	this->cantidadDeLaCosecha = cantidad;
};

int Cosecha::obtenerCantidad()
{
	return this->cantidadDeLaCosecha;
};

char Cosecha::obtenerTipoCosecha()
{
	return this->tipoCosecha;

};

void Cosecha::agregarUnaUnidadDeCosecha()
{
	cantidadDeLaCosecha++;
}



