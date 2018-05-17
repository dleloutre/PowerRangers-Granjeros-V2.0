#ifndef ALMACEN_H_
#define ALMACEN_H_

#include "Lista.h"
#include "Cosecha.h"

class Almacen
{
private:
	Lista<Cosecha*>* bodega;
	unsigned int capacidadTotal;
	unsigned int capacidadDisponible;
	unsigned int capacidadOcupada;
	unsigned int capacidadDeUnAlmacen;

public:
	Almacen(int filas, int columnas, int dificultad, Lista<Cosecha*>* bodega);
	//pre:
	//post: devuelve la capacidad total del almacen
	unsigned int obtenerCapacidadTotal();
	//pre
	//post: devuelve la capacidad disponible en el almacen
	unsigned int obtenerCapacidadDisponible();
	//pre
	//post:devuelve la capacidad ocupada del almacen

	unsigned int obtenerCapacidadOcupada();
	//pre:
	//post añade capacidad equivalente a un almacen a la capacidad total
	void agregarCapacidadTotal();
	//pre: hay lugar disponible
	//post: ocupa un lugar en el almacen
	void ocuparUnLugar();

	//pre: no esta vacio
	//post: libera un lugar en el almacen
	void liberarUnLugar();

	//pre:
	//post devuelve si hay lugar disponible en el almacen
	bool hayLugar();

	//pre:
	//post: si el tipo de cosecha ya se encuentra en el almacen se le suma uno a su cantidad, si no, se agrega el tipo
	//      de cosecha a la lista y su cantidad inicia en 1
	int agregarUnaCosecha(char tipoCosecha);
	//pre:
	//post: devuelve la cantidad que hay  del tipo de cosecha ingresado en el almacen.
	int obtenerCantidadCosecha(char tipoCosecha);


};


#endif /* ALMACEN_H_ */
