#include "Terreno.h"

Terreno::Terreno(unsigned int filas, unsigned int columnas){
	Parcela crearParcela;
	this->posicionTerreno = 1;
	this->accesoATerreno = NULL;
	this->filas = filas;
	this->columnas = columnas;
	this->terreno = new Parcela* [this->filas];
	for (unsigned int a=0; a < this->filas; a++){
			this->terreno[a] = new Parcela[this->columnas];
		}

	for (unsigned int i=0; i<this->filas; i++) {
		for (unsigned int j=0; j<this->columnas; j++) {
			terreno[i][j] = crearParcela;
		}
	}
}

Parcela Terreno::obtenerParcela(unsigned int posicionFila, unsigned int posicionColumna){
	return this->terreno[posicionFila-1][posicionColumna-1];
}

Parcela* Terreno::modificarParcela(unsigned int posicionFila, unsigned int posicionColumna){
	this->accesoATerreno = &this->terreno[posicionFila-1][posicionColumna-1];
	return this->accesoATerreno;
}

unsigned int Terreno::obtenerFilas(){
	return this->filas;
}

unsigned int Terreno::obtenerColumnas(){
	return this->columnas;
}

unsigned int Terreno::obtenerPosicionTerreno(){
	return this->posicionTerreno;
}

void Terreno::siguienteTerreno(){
	this->posicionTerreno++;
}

Terreno::~Terreno(){
	for(unsigned int i = 0; i < this->filas; i++)
	   delete [] this->terreno[i];
	delete [] this->terreno;
}
