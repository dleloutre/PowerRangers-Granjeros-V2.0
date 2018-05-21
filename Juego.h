#ifndef JUEGO_H_
#define JUEGO_H_

#include "Lista.h"
#include "Jugador.h"

class Juego {
	private:
			Lista<Jugador*>* jugadores;
			unsigned int cantidadJugadores;

	public:
			//post: crea una lista de jugadores
			Juego(unsigned int cantidadJugadores);

			//post: devuelve la cantidad de jugadores que hay en la partida
			unsigned int obtenerCantidadJugadores();

			//post: devuelve el acceso al jugador en la posicion [1...obtenerCantidadJugadores()]
			Jugador* accederAJugador(unsigned int posicion);

			//post: agrega un jugador a la partida
			void agregarJugador(unsigned int dificultad, std::string nombre);

			//post: devuelve el puntero a la lista de jugadores
			Lista<Jugador*>* obtenerJugadores();

			//post: libera los recursos utilizados
			~Juego();

};



#endif /* JUEGO_H_ */
