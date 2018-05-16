/*
 * CatalogoDestinos.cpp
 *
 *  Created on: May 16, 2018
 *      Author: agustin
 */



#include "CatalogoDestinos.h"

Destino* CatalogoDestinos::obtenerDestino(Lista<Destino*>* destinos, char cultivo){

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
