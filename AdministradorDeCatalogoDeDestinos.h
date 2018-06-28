#ifndef ADMINISTRADORDECATALOGODEDESTINOS_H_
#define ADMINISTRADORDECATALOGODEDESTINOS_H_

#include "Destino.h"
#include "Lista.h"
#include "Traductor.h"

class AdministradorDeCatalogoDestinos{

	private:

		Lista<Destino*>* destinos;


	public:

		/*
		 * post: crea una lista de punteros a clase Destino y
		 * se la asigna a 'destinos'
		 */
		AdministradorDeCatalogoDestinos();

		/*
		 * post: lee el archivo .txt recibido por 'rutaEntrada'
		 *
		 */
		void leerArchivo(std::string rutaEntrada);

		/*
		 * post: recibe un string tipo getline del metodo leerArchivo
		 * carga los datos en un vector, los convierte a enteros y se los pasa
		 * al constructor Destino y los agrega a la lista 'destinos'
		 */

		void cargarStringADestino(std::string stringLinea);

		/*
		 * post: devuelve un puntero a la lista de destinos
		 */

		Lista<Destino*>* obtenerListaDeDestinos();

		/*
		 * post: libera cada puntero a Destino que se fueron agregando
		 * como datos a la lista
		 */
		~AdministradorDeCatalogoDestinos();


};




#endif /* ADMINISTRADORDECATALOGODEDESTINOS_H_ */
