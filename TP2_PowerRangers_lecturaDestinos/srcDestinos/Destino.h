/*
 * Semilla.h
 *
 *  Created on: May 6, 2018
 *      Author: agustin
 */

#ifndef DESTINO_H_
#define DESTINO_H_

#include <string>

class Destino{

	private:

		std::string nombreDelDestino;

		int distancia;

		std::string cultivo;

	public:

		/*
		 * post: instancia de 'Cultivo' inicializada
		 */

		Destino(std::string nombreDelDestino, int distancia, std::string cultivo){

			this -> nombreDelDestino = nombreDelDestino;

			this -> distancia = distancia;

			this -> cultivo = cultivo;

		}


		/*
		 * post: devuelve el dato 'nombreDelDestino'
		 */

		std::string obtenerNombreDelDestino(){

			return this ->nombreDelDestino;

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
