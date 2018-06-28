/*
 * CatalogoDestinos.cpp
 *
 *  Created on: 24 may. 2018
 *      Author: daniela
 */

#include "CatalogoDestinos.h"

Destino* CatalogoDestinos::obtenerDestino(Lista<Destino*>* destinos, std::string cultivo){

	Destino* ptrClaseDestino=NULL;
	bool encontro=false;

	destinos->iniciarCursor();

	while(destinos->avanzarCursor() && !encontro){
		if(destinos->obtenerCursor()->obtenerCultivo() == cultivo){
			ptrClaseDestino = destinos ->obtenerCursor();
			encontro = true;
		}
	}

	return ptrClaseDestino;

}

Destino* CatalogoDestinos::obtenerDestino(Lista <Destino*>* destinos, unsigned int posicion) {
	Destino* destino = NULL;
	unsigned int posicionLista = 1;

	destinos->iniciarCursor();

	while(destinos->avanzarCursor()){
		Destino* destinoActual = destinos->obtenerCursor();

		if(posicionLista == posicion){
			destino = destinoActual;
		}
		posicionLista++;
	}
	return destino;
}



