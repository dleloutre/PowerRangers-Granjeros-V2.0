#include "Turnos.h"

Turnos::Turnos(float dificultad){
	this->cantidadTurnosTotales = dificultad*CANTIDAD_BASE_DE_TURNOS;
	this->turnoActual = 0;
}

unsigned int Turnos::obtenerCantidadTurnosTotales() {
	return this->cantidadTurnosTotales;
}

void Turnos::terminarTurno() {
	this->turnoActual++;
}
