#ifndef INFORMACIONSEMILLA_H_
#define INFORMACIONSEMILLA_H_

#include "Lista.h"
#include "Semilla.h"

class InformacionSemilla{

	public:

	/*
	 * pre: 'cultivo' debe estar entre [A....
	 * post: busca en la lista 'Cultivos' devuelve los datos del cultivo correspondiente a cultivoDeseado
	 nota: consideramos 'semillas' en plural para referirnos a la lista
	 */

	Semilla* obtenerInformacionSemilla(Lista<Semilla*>* semillas, char semillaSeleccionada);

};

#endif
