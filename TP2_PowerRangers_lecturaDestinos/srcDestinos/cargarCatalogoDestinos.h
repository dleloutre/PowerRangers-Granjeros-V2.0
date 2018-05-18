/*
 * agendaEstelar.h
 *
 *  Created on: May 12, 2018
 *      Author: agustin
 */

#ifndef CARGARCATALOGODESTINOS_H_
#define CARGARCATALOGODESTINOS_H_

#include "Destino.h"
#include "Lista.h"
#include "Traductor.h"

class CargarCatalogoDestinos{

	private:

		Lista<Destino*>* destinos; // TAL VEZ NO


	public:

		/*
		 * post: constructor recibe puntero a la lista de cultivos;
		 */
		CargarCatalogoDestinos();


		/*
		 * post: lee un archivo txt, y agrega los datos a una
		 * lista de punteros a cultivos
		 */
		void leerArchivo(std::string rutaEntrada);


		/*
		 * pre: recibe un string tipo getline del archivo cultivos.txt
		 * post: cargar los datos en un vector y se los pasa a
		 */
		void cargarStringAVector(std::string stringLinea);



		Lista<Destino*>* obtenerPunteroAListaDeDestinos();


		/*
		 * post: libera cada puntero a cultivo que se fueron agregando
		 * como datos a la lista
		 */
		~CargarCatalogoDestinos();


};


#endif /* CARGARCATALOGODESTINOS_H_ */
