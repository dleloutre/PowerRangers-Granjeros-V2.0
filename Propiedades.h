#ifndef PROPIEDADES_H_
#define PROPIEDADES_H_

#include "Lista.h"
#include "Terreno.h"
const int CANTIDAD_MINIMA_FILAS = 2;
const int CANTIDAD_MINIMA_COLUMNAS = 2;

class Propiedades {

	private:
		Lista<Terreno*>* terrenos;

	public:

		//POST: crea una lista con punteros a Terreno y agrega un terreno inicial
		Propiedades(float dificultad);

		//POST: agrega un terreno de 'dimension' filas y 'dimension' columnas a la lista de terrenos
		void comprarTerreno (float dificultad);

		//PRE: debe haber por lo menos un terreno en la lista de terrenos
		//POST: elimina de la lista de terrenos 'terrenoEnVenta'
		void venderTerreno(Terreno* terrenoEnVenta);

		//POST: devuelve 'terrenos'
		Lista<Terreno*>* obtenerTerrenos();

		//PRE: 'posicion' debe estar entre [1...obtenerCantidadTerrenos()]
		Terreno* accederATerreno(unsigned int posicion);

		//POST: devuelve la cantidad de terrenos que hay en la lista de terrenos
		unsigned int obtenerCantidadTerrenos ();

		//POST: libera recursos
		~Propiedades();

};


#endif /* PROPIEDADES_H_ */
