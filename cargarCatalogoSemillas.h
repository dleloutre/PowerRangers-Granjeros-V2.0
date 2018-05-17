#ifndef CARGARCATALOGOSEMILLAS_H_
#define CARGARCATALOGOSEMILLAS_H_

#include "Semilla.h"
#include "Lista.h"

const int CANTIDAD_DATOS_SEMILLAS = 5;

class CargaCatalogoSemillas{

	private:

		Lista<Semilla*>* semillas; // TAL VEZ NO

	public:

		/*
		 * post: constructor recibe puntero a la lista de cultivos;
		 */
		CargaCatalogoSemillas(Lista<Semilla*>* semillas);


		/*
		 * post: lee un archivo txt, y agrega los datos a una
		 * lista de punteros a semillas
		 */
		void leerArchivo(std::string rutaEntrada);


		/*
		 * pre: recibe un string tipo getline del archivo cultivos.txt
		 * post: cargar los datos en un vector y se los pasa a
		 */
		void cargarStringAVector(std::string stringLinea);

		/*
		 * post: recibe un vector de strings y los convierte a enteros vectorDeEnteros
		 */

		void convertirVectorAEnteros(int vectorDeEnteros[], std::string vectorDeStrings[]);

		/*
		 * post: inicializa el constructor Semilla con los datos del vectorDeEnteros y los incluye en un puntero
		 *  y agrega dicho puntero a la lista de semillas
		 */
		void agregarDatosVectorComoPunteroALaLista(int vectorDeEnteros[], char semilla);

		/*
		 * post: libera cada puntero a semilla que se fueron agregando
		 * como datos a la lista
		 */
		~CargaCatalogoSemillas();

};


#endif /* CARGARCATALOGOSEMILLAS_H_ */
