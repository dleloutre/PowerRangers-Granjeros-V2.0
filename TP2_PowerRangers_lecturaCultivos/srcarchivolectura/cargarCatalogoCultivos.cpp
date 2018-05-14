/*
 * lectura.cpp
 *
 *  Created on: May 6, 2018
 *      Author: agustin
 */


#include <fstream>
#include <sstream>
#include "cargarCatalogoCultivos.h"


CargaCatalogoCultivos::CargaCatalogoCultivos(Lista<Cultivo*>* cultivos){

	this -> cultivos = cultivos;

}

//void leer archivo, solo lee y delega la tarea a otro
void CargaCatalogoCultivos::leerArchivo(std::string rutaEntrada) {


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


void CargaCatalogoCultivos::cargarStringAVector(std::string stringLinea){

	int i=0;

	//crea un vector para almacenar cada dato del txt.
	std::string vectorDeStrings[5];

	//guarda el primer dato (A,B,C etc)
	char semilla = stringLinea[i];

	i+=2; //saltea la primera letra y la coma

	//carga el vector con los datos de la linea, sin incluir la primera letra
	for (int j=0; j<= 4; j++){ //
		while(stringLinea[i] != ',' && stringLinea[i]!= '\0'){
			vectorDeStrings[j] =  vectorDeStrings[j] + stringLinea[i];
			i++;
		}
		i++;
	}


	int vectorCultivos[5];

	this->convertirVectorAEnteros(vectorCultivos, vectorDeStrings);

	this->agregarDatosVectorComoPunteroALaLista(vectorCultivos, semilla);

	return;
}

void CargaCatalogoCultivos::convertirVectorAEnteros(int vectorCultivos[], std::string vectorDeStrings[]){
	/*crea un vectorCultivos de enteros y le pasa los strings del
	vectorDeStrings como int
	*/

	int i,valor;

	// cambia los string a enteros
	for (i=0; i<5; i++){
		std::istringstream buffer(vectorDeStrings[i]);
		valor=0; //si ocurre algo, por defecto pone un 0
		buffer >> valor;
		vectorCultivos[i]=valor;

	}

	return;
}


// ********** funcion asignar puntero (vectorcultivos puntero a vectorcultivos

void CargaCatalogoCultivos::agregarDatosVectorComoPunteroALaLista(int vectorCultivos[], char semilla){

	Cultivo* ptrEstrella;

	char cultivo = semilla;

	int costoSemilla=vectorCultivos[0];

	int tiempoCosecha=vectorCultivos[1];

	int rentabilidad=vectorCultivos[2];

	int tiempoRecuperacion=vectorCultivos[3];

	int aguaTurno=vectorCultivos[4];

	/*asigno un espacio en el heap para un puntero a una Estrella*/
	ptrEstrella = new Cultivo(cultivo, costoSemilla, tiempoCosecha,
			 rentabilidad, tiempoRecuperacion, aguaTurno);

	this->cultivos->agregar(ptrEstrella);


}





CargaCatalogoCultivos::~CargaCatalogoCultivos(){


	cultivos->iniciarCursor();

	while (cultivos->avanzarCursor()){
		Cultivo* PtrABorrar = cultivos->obtenerCursor();

		delete PtrABorrar;
	}

}
