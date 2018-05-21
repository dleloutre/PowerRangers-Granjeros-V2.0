#include "Terreno.h"
#include "Propiedades.h"
#include <string>
#include <iostream>
using namespace std;

Propiedades::Propiedades(float dificultad){
	this->terrenos = new Lista<Terreno*>;
	Terreno* terrenoInicial = new Terreno(CANTIDAD_MINIMA_FILAS*dificultad, CANTIDAD_MINIMA_COLUMNAS*dificultad);
	this->terrenos->agregar(terrenoInicial);
}


void Propiedades::comprarTerreno(float dificultad) {
		Terreno* terrenoNuevo = new Terreno(CANTIDAD_MINIMA_FILAS*dificultad, CANTIDAD_MINIMA_COLUMNAS*dificultad);
		this->terrenos->agregar(terrenoNuevo);
	}

void Propiedades::venderTerreno(Terreno* terrenoEnVenta) {
	bool vendido = false;
	unsigned int posicion = 0;
	this->terrenos->iniciarCursor();
	while (this->terrenos->avanzarCursor() && !vendido) {
		Terreno* terrenoActual = this->terrenos->obtenerCursor();
		vendido = (terrenoActual == terrenoEnVenta);
		posicion++;
	}
	if (vendido) {
		this->terrenos->remover(posicion);
	}
}


Lista<Terreno*>* Propiedades::obtenerTerrenos() {
	return this->terrenos;
}


Terreno* Propiedades::accederATerreno(unsigned int posicion){
	unsigned int posicionLista = 1;
	Terreno* terreno = NULL;
	this->terrenos->iniciarCursor();
	while (this->terrenos->avanzarCursor()) {
		Terreno* terrenoActual = this->terrenos->obtenerCursor();
		if ((posicion) == posicionLista){
			terreno = terrenoActual;
		}
		posicionLista++;
	}
	return terreno;
}


unsigned int Propiedades::obtenerCantidadTerrenos() {
	return this->obtenerTerrenos()->contarElementos();
}

Propiedades::~Propiedades() {
	terrenos->iniciarCursor();

	while (terrenos->avanzarCursor()){
		Terreno* PtrABorrar = terrenos->obtenerCursor();

		delete PtrABorrar;
	}

}
