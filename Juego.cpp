#include "Juego.h"
#include <string>
using namespace std;

Juego::Juego(unsigned int cantidadJugadores){
	this->cantidadJugadores = cantidadJugadores;
	this->jugadores = new Lista<Jugador*>;
}

unsigned int Juego::obtenerCantidadJugadores(){
	return this->cantidadJugadores;
}

Jugador* Juego::accederAJugador(unsigned int posicion){
	unsigned int posicionLista = 1;
	Jugador* jugador = NULL;
	this->jugadores->iniciarCursor();
	while (this->jugadores->avanzarCursor()) {
		Jugador* jugadorActual = this->jugadores->obtenerCursor();
		if (posicion == posicionLista){
			jugador = jugadorActual;
		}
		posicionLista++;
	}
	return jugador;
}

void Juego::agregarJugador(unsigned int dificultad, std::string nombre){
	Jugador* jugador = new Jugador(dificultad, nombre);
	this->jugadores->agregar(jugador);
}

Lista<Jugador*>* Juego::obtenerJugadores(){
	return this->jugadores;
}

Juego::~Juego(){
	jugadores->iniciarCursor();

	while (jugadores->avanzarCursor()){
		Jugador* PtrABorrar = jugadores->obtenerCursor();

		delete PtrABorrar;
	}
}
