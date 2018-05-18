/*
 * CatalogoCultivos.cpp
 *
 *  Created on: May 14, 2018
 *      Author: agustin
 */



#include "CatalogoCultivos.h"


Cultivo* CatalogoCultivos::obtenerCultivo(Lista<Cultivo*>* cultivos, std::string cultivo){


	Cultivo* claseCultivo=NULL;
	bool encontro = false;

	cultivos->iniciarCursor();

	while(cultivos->avanzarCursor() && !encontro){


		if(cultivos->obtenerCursor()->obtenerCultivo() == cultivo){
			claseCultivo = cultivos->obtenerCursor() ;
			encontro = true;
		}
	}

	return claseCultivo;

}
