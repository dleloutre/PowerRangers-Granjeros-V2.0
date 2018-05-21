#include "CatalogoSemillas.h"

Semilla* CatalogoSemillas::obtenerInformacionSemilla(Lista<Semilla*>* semillas, std::string nombreSemillaSeleccionada){

	Semilla* semilla=NULL;
	bool semillaEncontrada = false;

	semillas->iniciarCursor();

	while(semillas->avanzarCursor() && !semillaEncontrada){
		semilla = semillas->obtenerCursor();

		if(semillas->obtenerCursor()->obtenerNombre() == nombreSemillaSeleccionada){
					semilla = semillas->obtenerCursor() ;
					semillaEncontrada = true;
				}
	}
	return semilla;
}
