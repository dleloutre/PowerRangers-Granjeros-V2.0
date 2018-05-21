#ifndef CARGARCATALOGOSEMILLAS_H_
#define CARGARCATALOGOSEMILLAS_H_

#include "Semilla.h"
#include "Lista.h"
#include "Traductor.h"

const int CANTIDAD_DATOS_SEMILLAS = 6;

class CargarCatalogoSemillas{

	private:

		Lista<Semilla*>* semillas; // TAL VEZ NO

	public:

		/*
		 * post: crea una lista de punteros a clase Cultivo y
		 * la asigna a 'cultivos'
		 */
		CargarCatalogoSemillas();


		/*
		 * post: lee el archivo .txt a recibido por 'rutaEntrada'
		 */
		void leerArchivo(std::string rutaEntrada);


		/*
		 * pre:
		 * post: recibe un string tipo getline del metodo leerArchivo
		 * cargar los datos en un vector, los convierte a enteros y se los pasa
		 * al constructor Cultivo y los agrega a la lista 'cultivos'
		 */
		void cargarStringASemilla (std::string stringLinea);

		/*
		 * post: devuelve el atributo 'cultivos'
		 */
		Lista<Semilla*>* obtenerPunteroAListaDeSemillas();

		/*
		 * post: libera cada puntero a semilla que se fueron agregando
		 * como datos a la lista
		 */
		~CargarCatalogoSemillas();

};


#endif /* CARGARCATALOGOSEMILLAS_H_ */

