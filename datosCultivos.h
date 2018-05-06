
#ifndef DATOSCULTIVOS_H_
#define DATOSCULTIVOS_H_

#include "Cultivo.h"
#include "Lista.h"

class DatosCultivos{

	public:

	/*
	 * pre: 'cultivo' debe estar entre [A....
	 * post: busca en la lista 'Cultivos' devuelve el Cultivo cuyo tipo de 'cultivo' es el indicado
	 */
	Cultivo* obtenerCultivo(Lista<Cultivo*>*, char cultivo);

};
