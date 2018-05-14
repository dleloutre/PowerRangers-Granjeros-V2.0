/*
 * ejemplo.cpp
 *
 *  Created on: May 6, 2018
 *      Author: agustin
 */

#include <string>
#include <iostream>

#include "cargarCatalogoCultivos.h" //para leer el txt y cargar la lista
#include "CatalogoCultivos.h" // para utilizar el catalogo una vez cargado


//jugar
int main() {

	std::string archivoCultivos = "cultivos.txt";

	//creo lista de punteros a estrellas
	Lista<Cultivo*> listaCultivos;

	//creo un puntero que apunta a listaEstrellas
	Lista <Cultivo*>* cultivos= &listaCultivos;

	CargaCatalogoCultivos cargarCatalogo(cultivos);

	cargarCatalogo.leerArchivo(archivoCultivos);

	//completarCatalogo.cargarCatalogoConArchivoDestino(archivodestinostxt)

	//classAlmacen almacen (cultivos);

	// ver ejercicio mensajeria para manejo de listas

	//testeo

	CatalogoCultivos catalogo;

	Cultivo* cultivo = catalogo.obtenerCultivo(cultivos,'A');

	std::cout << cultivo->obtenerRentabilidad() << std::endl;

	cultivos->iniciarCursor();


	// solo para ver si la lista cargo bien los datos del txt, no es un uso
	while (cultivos->avanzarCursor()){

		Cultivo* semilla =cultivos->obtenerCursor();
		std::cout << semilla->obtenerCultivo() << " " << semilla->obtenerCostoSemilla() << " " << semilla->obtenerTiempoCosecha()<< " "
				<< semilla->obtenerRentabilidad() << " " << semilla->obtenerTiempoRecuperacion() << " " << semilla->obtenerAguaPorTurno() << std::endl;


	}
//////////////////


	return 0;
}


