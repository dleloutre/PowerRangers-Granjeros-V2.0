/*
 * agendaEstelar.h
 *
 *  Created on: May 12, 2018
 *      Author: agustin
 */

#ifndef CARGARCATALOGOCULTIVOS_H_
#define CARGARCATALOGOCULTIVOS_H_

#include "Cultivo.h"
#include "Lista.h"
#include "Traductor.h"

class CargaCatalogoCultivos{

	private:


		Lista<Cultivo*>* cultivos; // TAL VEZ NO


	public:

		/*
		 * post: constructor recibe puntero a la lista de cultivos;
		 */
		CargaCatalogoCultivos(/*Lista<Cultivo*>* cultivos*/);


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


		/*
		 *
		 */
		Lista<Cultivo*>* obtenerPunteroAListaDeCultivos();

		/*
		 * post: libera cada puntero a cultivo que se fueron agregando
		 * como datos a la lista
		 */
		~CargaCatalogoCultivos();


};


#endif /* CARGARCATALOGOCULTIVOS_H_ */
