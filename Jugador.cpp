#include <string>
#include "Jugador.h"
using namespace std;

Jugador::Jugador(float dificultad, string nombre){
	this->nombre = nombre;
	this->cantidadCreditos = 2*CANTIDAD_MINIMA_FILAS*CANTIDAD_MINIMA_COLUMNAS*dificultad;
	this->listaTerrenos = new Propiedades(dificultad);
}

string Jugador::obtenerNombre() {
	return this->nombre;
}

unsigned int Jugador::obtenerCantidadCreditos(){
	return this->cantidadCreditos;
}

Propiedades* Jugador::obtenerTerrenos(){
	return this->listaTerrenos;
}
