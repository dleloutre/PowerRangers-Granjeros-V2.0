/*
 * Destino.h
 *
 *  Created on: 24 may. 2018
 *      Author: daniela
 */

#ifndef DESTINO_H_
#define DESTINO_H_

#include <string>

class Destino{

	private:

		std::string nombre;

		int distancia;

		std::string cultivo;

	public:

		/*
		 * post: instancia de 'Destino' inicializada
		 */

		Destino(std::string nombreDelDestino, int distancia, std::string cultivo){

			this -> nombre = nombreDelDestino;

			this -> distancia = distancia;

			this -> cultivo = cultivo;

		}


		/*
		 * post: devuelve el dato 'nombreDelDestino'
		 */

		std::string obtenerNombreDelDestino(){

			return this ->nombre;

		}


		/*
		* post: devuelve el dato 'distancia'
		*/

		int obtenerDistancia(){

			return this -> distancia;
		}



		/*
		 * post: devuelve el dato 'cultivo'
		 */

		std::string obtenerCultivo(){

			return this -> cultivo;

		}


};


#endif /* DESTINO_H_ */
