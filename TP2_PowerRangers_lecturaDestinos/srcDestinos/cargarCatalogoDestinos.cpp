/*
 * lectura.cpp
 *
 *  Created on: May 6, 2018
 *      Author: agustin
 */


#include <fstream>
#include <sstream>
#include "cargarCatalogoDestinos.h"


CargarCatalogoDestinos::CargarCatalogoDestinos(){


	this -> destinos = new Lista <Destino*>;

}

//void leer archivo, solo lee y delega la tarea a otro
void CargarCatalogoDestinos::leerArchivo(std::string rutaEntrada) {


	/* crea el archivo y abre la ruta especificada */
	std::ifstream entrada;
	entrada.open(rutaEntrada.c_str());

	//declara un string
	std::string stringLinea;


	/* lee el resto del archivo */
	while (! entrada.eof()) {


		std::getline(entrada, stringLinea);

		//clase funcion que haga todos lo de bajo

		this -> cargarStringAVector(stringLinea);


	} // while
	/* cierra el archivo, liberando el recurso */
	entrada.close();

}


void CargarCatalogoDestinos::cargarStringAVector(std::string getLinea){

	int i=0;

	Traductor Traductor;

	//crea un vector para almacenar cada dato del txt.
	std::string vectorDeStrings[3];

	//carga el vector con los datos de la linea
	for (int j=0; j<= 2; j++){ //
		while(getLinea[i] != ',' && getLinea[i]!= '\0'){
			vectorDeStrings[j] =  vectorDeStrings[j] + getLinea[i];
			i++;
		}
		i++;
	}


	Destino* ptrADestino;

	std::string destino = vectorDeStrings[0];

	int distancia= Traductor.convertirAEntero(vectorDeStrings[1]);

	std::string cultivo=vectorDeStrings[2];

	/*asigno un espacio en el heap para un puntero a una Estrella*/
	ptrADestino = new Destino(destino, distancia, cultivo);

	this->destinos->agregar(ptrADestino);


	return;
}




/////
Lista<Destino*>* CargarCatalogoDestinos::obtenerPunteroAListaDeDestinos(){

	return this ->destinos;
}



CargarCatalogoDestinos::~CargarCatalogoDestinos(){

	destinos->iniciarCursor();

	while (destinos->avanzarCursor()){
		Destino* PtrABorrar = destinos->obtenerCursor();

		delete PtrABorrar;
	}

	delete this ->destinos;

}
