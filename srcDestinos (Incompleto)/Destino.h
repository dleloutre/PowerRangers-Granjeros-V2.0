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

		char cultivo;

	public:

		/*
		 * post: instancia de 'Cultivo' inicializada
		 */

		Destino(char cultivo, std::string nombreDelDestino, int distancia){

			this -> nombreDelDestino = nombreDelDestino;

			this -> distancia = distancia;

			this -> cultivo = cultivo;

		}


		/*
		 * post: devuelve el dato 'nombreDelDestino'
		 */

		int obtenerNombreDelDestino(){

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

		char obtenerCultivo(){

			return this -> cultivo;

		}


};



#endif /* DESTINO_H_ */
