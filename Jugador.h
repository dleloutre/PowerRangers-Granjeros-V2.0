#ifndef JUGADOR_H_
#define JUGADOR_H_

#include "Propiedades.h"

class Jugador {
	private:
		std::string nombre;
		unsigned int cantidadCreditos;
		Propiedades* listaTerrenos;

	public:

		//post: crea un jugador identificado por 'nombre', se le asigna una cantidad de creditos y una
		//lista de propiedades que contiene un terreno inicial
		Jugador(float dificultad, std::string nombre);

		//post: devuelve el nombre del jugador
		std::string obtenerNombre();

		//post: devuelve la cantidad de creditos que tiene el jugador
		unsigned int obtenerCantidadCreditos();
    
    //post: devuelve los terrenos que posee el jugador
 		Propiedades* obtenerTerrenos();


};



#endif /* JUGADOR_H_ */
