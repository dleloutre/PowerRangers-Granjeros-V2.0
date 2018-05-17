#include <fstream>
#include <sstream>
#include "cargarCatalogoSemillas.h"


CargaCatalogoSemillas::CargaCatalogoSemillas(Lista<Semilla*>* semillas){

	this->semillas = semillas;

}

//void leer archivo, solo lee y delega la tarea a otro
void CargaCatalogoSemillas::leerArchivo(std::string rutaEntrada) {

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

void CargaCatalogoSemillas::cargarStringAVector(std::string stringLinea){

	int i=0;

	//crea un vector para almacenar cada dato del txt.
	std::string vectorDeStrings[CANTIDAD_DATOS_SEMILLAS];

	//guarda el primer dato (A,B,C etc)
	char semilla = stringLinea[i];

	i+=2; //saltea la primera letra y la coma

	//carga el vector con los datos de la linea, sin incluir la primera letra
	for (int j=0; j<= (CANTIDAD_DATOS_SEMILLAS-1); j++){ //
		while(stringLinea[i] != ',' && stringLinea[i]!= '\0'){
			vectorDeStrings[j] =  vectorDeStrings[j] + stringLinea[i];
			i++;
		}
		i++;
	}

	int vectorSemillas[CANTIDAD_DATOS_SEMILLAS];

	this->convertirVectorAEnteros(vectorSemillas, vectorDeStrings);

	this->agregarDatosVectorComoPunteroALaLista(vectorSemillas, semilla);
}

void CargaCatalogoSemillas::convertirVectorAEnteros(int vectorSemillas[], std::string vectorDeStrings[]){
	/*crea un vectorCultivos de enteros y le pasa los strings del
	vectorDeStrings como int
	*/

	int i,valor;

	// cambia los string a enteros
	for (i=0; i<CANTIDAD_DATOS_SEMILLAS; i++){
		std::istringstream buffer(vectorDeStrings[i]);
		valor=0; //si ocurre algo, por defecto pone un 0
		buffer >> valor;
		vectorSemillas[i]=valor;
	}
}

// ********** funcion asignar puntero (vectorcultivos puntero a vectorcultivos

void CargaCatalogoSemillas::agregarDatosVectorComoPunteroALaLista(int vectorSemillas[], char semilla){

	Semilla* ptrSemilla;

	char nombre = semilla;

	int costo = vectorSemillas[0];

	int tiempoCrecimiento = vectorSemillas[1];

	int rentabilidad = vectorSemillas[2];

	int tiempoRecuperacion = vectorSemillas[3];

	int consumoAgua = vectorSemillas[4];

	/*asigno un espacio en el heap para un puntero a una Semilla*/
	ptrSemilla = new Semilla(nombre, costo, tiempoCrecimiento,
			 rentabilidad, tiempoRecuperacion, consumoAgua);

	this->semillas->agregar(ptrSemilla);
}

CargaCatalogoSemillas::~CargaCatalogoSemillas(){


	semillas->iniciarCursor();

	while (semillas->avanzarCursor()){
		Semilla* PtrABorrar = semillas->obtenerCursor();

		delete PtrABorrar;
	}

}
