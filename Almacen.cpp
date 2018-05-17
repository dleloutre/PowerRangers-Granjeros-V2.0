#include "Almacen.h"


#include <iostream>

Almacen::Almacen(int fila, int columna, int dificultad, Lista<Cosecha*>* bodega)
{
	this->bodega = bodega;
	this->capacidadDeUnAlmacen = 2*(fila+columna)*dificultad;
	this->capacidadTotal = this->capacidadDeUnAlmacen;
	this->capacidadOcupada = 0;
	this->capacidadDisponible = this->capacidadTotal;
};

unsigned int Almacen::obtenerCapacidadDisponible()
{
	return this->capacidadDisponible;
};

unsigned int Almacen::obtenerCapacidadOcupada()
{
	return this->capacidadOcupada;
};

unsigned int Almacen::obtenerCapacidadTotal()
{
	return this->capacidadTotal;
};

void Almacen::agregarCapacidadTotal()
{
	this->capacidadTotal+=this->capacidadDeUnAlmacen;
};
void Almacen::ocuparUnLugar()
{
	this->capacidadOcupada++;
	this->capacidadDisponible--;
};

void Almacen::liberarUnLugar()
{
	this->capacidadOcupada--;
	this->capacidadDisponible++;
};

bool Almacen::hayLugar()
{
	return (this->capacidadDisponible>0);
};


int Almacen::agregarUnaCosecha(char tipoCosecha)
{	int cosechaAgregada = 0;
	if(hayLugar()){
		Cosecha* claseCosecha = NULL;
		bool encontroCosecha = false;
		this->bodega->iniciarCursor();
		while(bodega->avanzarCursor() && !encontroCosecha){
			claseCosecha = bodega->obtenerCursor();

			if(claseCosecha->obtenerTipoCosecha() == tipoCosecha){
				encontroCosecha = true;
				claseCosecha->agregarUnaUnidadDeCosecha();
			}
		}
		if(encontroCosecha == false)
			{
				this->bodega->agregar(new Cosecha(tipoCosecha, 1));
			}
		cosechaAgregada = 1;
		ocuparUnLugar();
	}
	return cosechaAgregada;
};

int Almacen::obtenerCantidadCosecha(char tipoCosecha)
{	int cantidad = 0;
	Cosecha* claseCosecha=NULL;
	bool encontroCosecha = false;
	this->bodega->iniciarCursor();
	while(bodega->avanzarCursor() && !encontroCosecha){
		claseCosecha = bodega->obtenerCursor();
		if(claseCosecha->obtenerTipoCosecha() == tipoCosecha){
			cantidad = claseCosecha->obtenerCantidad();
			encontroCosecha = true;
		}
	}
	return cantidad;
}
