#include <fstream>
#include <sstream>
#include "cargarCatalogoSemillas.h"


CargarCatalogoSemillas::CargarCatalogoSemillas(){

	this->semillas = semillas;

}

//void leer archivo, solo lee y delega la tarea a otro
void CargarCatalogoSemillas::leerArchivo(std::string rutaEntrada) {

	/* crea el archivo y abre la ruta especificada */
	std::ifstream entrada;
	entrada.open(rutaEntrada.c_str());

	//declara un string
	std::string getLinea;

	/* lee el resto del archivo */
	while (! entrada.eof()) {

		std::getline(entrada, getLinea);

		//clase funcion que haga todos lo de bajo

		this->cargarStringASemilla(getLinea);

	} // while
	/* cierra el archivo, liberando el recurso */
	entrada.close();
}

void CargarCatalogoSemillas::cargarStringASemilla(std::string getLinea){

	int i=0;

	Traductor traductor;

	//crea un vector para almacenar cada dato del txt.
	std::string vectorDeStrings[CANTIDAD_DATOS_SEMILLAS];

	//carga el vector con los datos de la linea
	for (int j=0; j<= (CANTIDAD_DATOS_SEMILLAS-1); j++){ //
		while(getLinea[i] != ',' && getLinea[i]!= '\0'){
			vectorDeStrings[j] =  vectorDeStrings[j] + getLinea[i];
			i++;
		}
		i++;
	}

	Semilla* punteroSemilla;

	std::string nombre = vectorDeStrings[0];

	int costo = traductor.convertirAEntero(vectorDeStrings[1]);

	int tiempoCrecimiento = traductor.convertirAEntero(vectorDeStrings[2]);

	int rentabilidad = traductor.convertirAEntero(vectorDeStrings[3]);

	int tiempoRecuperacion = traductor.convertirAEntero(vectorDeStrings[4]);

	int consumoAgua = traductor.convertirAEntero(vectorDeStrings[5]);

	/*asigno un espacio en el heap para un puntero a una Semilla*/
	punteroSemilla = new Semilla(nombre, costo, tiempoCrecimiento,
			 rentabilidad, tiempoRecuperacion, consumoAgua);

	this->semillas->agregar(punteroSemilla);


	return;
}

Lista<Semilla*>* CargarCatalogoSemillas::obtenerPunteroAListaDeSemillas(){

	return this ->semillas;
}



CargarCatalogoSemillas::~CargarCatalogoSemillas(){

	semillas->iniciarCursor();

	while (semillas->avanzarCursor()){
		Semilla* PtrABorrar = semillas->obtenerCursor();

		delete PtrABorrar;
	}

	delete this->semillas;

}

