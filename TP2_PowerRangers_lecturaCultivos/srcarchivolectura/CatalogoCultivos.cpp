/*
 * CatalogoCultivos.cpp
 *
 *  Created on: May 14, 2018
 *      Author: agustin
 */



#include "CatalogoCultivos.h"


Cultivo* CatalogoCultivos::obtenerCultivo(Lista<Cultivo*>* cultivos, char cultivo){


	Cultivo* claseCultivo=NULL;
	bool encontro = false;

	cultivos->iniciarCursor();

	while(cultivos->avanzarCursor() && !encontro){
		claseCultivo = cultivos->obtenerCursor();

		if(claseCultivo->obtenerCultivo() == cultivo){
			encontro = true;
		}
	}

	return claseCultivo;

}
