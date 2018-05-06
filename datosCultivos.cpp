#include "datosCultivos.h"

#include <iostream>




Cultivo* DatosCultivos::obtenerCultivo(Lista<Cultivo*>* cultivos,char cultivo){

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
