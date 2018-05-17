#include "Almacen.h"


#include <iostream>

Almacen::Almacen(int fila, int columna, int dificultad, Lista<Cosecha*>* bodega)
{
	this->bodega = bodega;
	capacidadDeUnAlmacen = 2*(fila+columna)*dificultad;
	capacidadTotal = capacidadDeUnAlmacen;
	capacidadOcupada = 0;
	capacidadDisponible = capacidadTotal;
};

unsigned int Almacen::obtenerCapacidadDisponible()
{
	return capacidadDisponible;
};

unsigned int Almacen::obtenerCapacidadOcupada()
{
	return capacidadOcupada;
};

unsigned int Almacen::obtenerCapacidadTotal()
{
	return capacidadTotal;
};

void Almacen::agregarCapacidadTotal()
{
	capacidadTotal+=capacidadDeUnAlmacen;
};
void Almacen::ocuparUnLugar()
{
	capacidadOcupada++;
	capacidadDisponible--;
};

void Almacen::liberarUnLugar()
{
	capacidadOcupada--;
	capacidadDisponible++;
};

bool Almacen::hayLugar()
{
	return this->capacidadDisponible>0;
};


int Almacen::agregarUnaCosecha(char tipoCosecha)
{	int cosechaAgregada = 0;
	if(hayLugar()){


		Cosecha* claseCosecha=NULL;
			bool encontro = false;

			this->bodega->iniciarCursor();

			while(bodega->avanzarCursor() && !encontro){
				claseCosecha = bodega->obtenerCursor();

				if(claseCosecha->obtenerTipoCosecha() == tipoCosecha){
					encontro = true;
					claseCosecha->agregarUnaUnidadDeCosecha();

				}
			}

			if(encontro == false)
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
	bool encontro = false;
		this->bodega->iniciarCursor();
		while(bodega->avanzarCursor() && !encontro){
			claseCosecha = bodega->obtenerCursor();
			if(claseCosecha->obtenerTipoCosecha() == tipoCosecha){
				cantidad = claseCosecha->obtenerCantidad();
				encontro = true;
				}
			}
		return cantidad;
}
