#include "Terreno.h"
#include "Propiedades.h"

Propiedades::Propiedades(){
	this->terrenos = new Lista<Terreno*>;
}

void Propiedades::comprarTerreno(Terreno* terreno) {
		this->terrenos->agregar(terreno);
	}

void Propiedades::venderTerreno(Terreno* terrenoEnVenta) {
	bool vendido = false;
	unsigned int posicion = 0;
	this->obtenerTerrenos()->iniciarCursor();
	while (this->obtenerTerrenos()->avanzarCursor() && !vendido) {
		Terreno* terrenoActual = this->obtenerTerrenos()->obtenerCursor();
		vendido = (terrenoActual == terrenoEnVenta);
		posicion++;
	}
	if (vendido) {
		this->obtenerTerrenos()->remover(posicion);
	}
}


Lista<Terreno*>* Propiedades::obtenerTerrenos() {
	return this->terrenos;
}

Terreno* Propiedades::accederATerreno(unsigned int posicion){
	unsigned int posicionLista = 1;
	Terreno* terreno = NULL;
	this->obtenerTerrenos()->iniciarCursor();
	while (this->obtenerTerrenos()->avanzarCursor()) {
		Terreno* terrenoActual = this->obtenerTerrenos()-> obtenerCursor();
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
	delete this->terrenos;
}
