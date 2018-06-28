#ifndef CATALOGODESTINOS_H_
#define CATALOGODESTINOS_H_

#include "Destino.h"
#include "Lista.h"

class CatalogoDestinos{

	public:

		/*
		 * post: devuelve el puntero a la clase Destino que tenga
		 * como atributo this->cultivo al 'cultivo'
		 */
		Destino* obtenerDestino(Lista <Destino*>* destinos, std::string cultivo);

		Destino* obtenerDestino (Lista <Destino*>* destinos, unsigned int posicion);

};
