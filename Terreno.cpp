#include "Terreno.h"

Terreno::Terreno(){
	Parcela crearParcela;
	this->tamanio = TAMANIO_MINIMO;
	for (unsigned int i=0; i<this->tamanio; i++) {
		for (unsigned int j=0; j<this->tamanio; j++) {
			terreno[i][j]=crearParcela;
		}
	}
}

Terreno::Terreno(unsigned int tamanio){
	Parcela crearParcela;
	this->tamanio = tamanio;
	for (unsigned int i=0; i<this->tamanio; i++) {
		for (unsigned int j=0; j<this->tamanio; j++) {
			terreno[i][j]=crearParcela;
		}
	}
}

Parcela Terreno::obtenerTerreno(unsigned int posicionFila, unsigned int posicionColumna){
	return this->terreno[posicionFila][posicionColumna];
}

unsigned int Terreno::obtenerTamanio(){
	return this->tamanio;
}
