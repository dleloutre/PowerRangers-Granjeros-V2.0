/*
 * Semilla.h
 *
 *  Created on: May 6, 2018
 *      Author: agustin
 */

#ifndef CULTIVO_H_
#define CULTIVO_H_

#include <string>

class Cultivo{

	private:

		std::string cultivo;

		int costoSemilla;

		int tiempoCosecha;

		int rentabilidad;

		int tiempoRecuperacion;

		int aguaTurno;

	public:

		/*
		 * post: instancia de 'Cultivo' inicializada
		 */

		Cultivo(std::string cultivo, int costo, int tiempoCosecha,
				int renta, int tiempo, int agua){

			this -> cultivo = cultivo;

			this ->costoSemilla = costo;

			this -> tiempoCosecha = tiempoCosecha;

			this ->rentabilidad = renta;

			this ->tiempoRecuperacion = tiempo;

			this -> aguaTurno = agua;

		}

		/*
		 * post: devuelve el dato 'cultivo'
		 */

		std::string obtenerCultivo(){

			return this -> cultivo;

		}

		/*
		 * post: devuelve el dato 'costoSemilla'
		 */

		int obtenerCostoSemilla(){

			return this ->costoSemilla;

		}

		/*
		* post: devuelve el dato 'tiempoCosecha'
		*/

		int obtenerTiempoCosecha(){

			return this -> tiempoCosecha;
		}


		/*
		 * post: devuelve el dato 'rentabilidad'
		 */

		int obtenerRentabilidad(){

			return this ->rentabilidad;
		}



		/*
		 * post: devuelve el dato 'tiempoRecuperacion'
		 */

		int obtenerTiempoRecuperacion(){

			return this ->tiempoRecuperacion;
		}



		/*
		 * post: devuelve el dato 'aguaTurno'
		 */
		int obtenerAguaPorTurno(){

			return this -> aguaTurno;

		}


};



#endif /* CULTIVO_H_ */
