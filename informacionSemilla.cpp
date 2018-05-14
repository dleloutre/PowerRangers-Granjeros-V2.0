#include "informacionSemilla.h"

#include <iostream>


Semilla* InformacionSemilla::obtenerInformacionSemilla(Lista<Semilla*>* semillas, char semillaSeleccionada){

	Semilla* semilla = NULL;
	bool semillaEncontrada = false;

	semillas->iniciarCursor();

	while(semillas->avanzarCursor() && !semillaEncontrada){
		semilla = semillas->obtenerCursor();
		semillaEncontrada = (semilla->obtenerNombre() == semillaSeleccionada);
	}

	return semilla;
}
