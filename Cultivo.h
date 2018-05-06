
#ifndef CULTIVO_H_
#define CULTIVO_H_

#include <string>

class Cultivo{

	private:

		char cultivo;

		int costoSemilla;

		int rentabilidad;

		int tiempoRecuperacion;

		int aguaTurno;

	public:

		/*
		 * post: instancia de 'Cultivo' inicializada
		 */

		Cultivo(char cultivo, int costo,
				int renta, int tiempo, int agua){

			this -> cultivo = cultivo;

			this ->costoSemilla = costo;

			this ->rentabilidad = renta;

			this ->tiempoRecuperacion = tiempo;

			this -> aguaTurno = agua;

		}

		/*
		 * post: devuelve el dato 'cultivo'
		 */

		char obtenerCultivo(){

			return this -> cultivo;

		}

		/*
		 * post: devuelve el dato 'costoSemilla'
		 */

		int obtenerCostoSemilla(){

			return this ->costoSemilla;

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
