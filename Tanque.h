#ifndef TANQUE_H_
#define TANQUE_H_


#include "CatalogoSemillas.h"


class Tanque
{
private:
	int capacidadTotal;
	int capacidadOcupada;
	int capacidadLibre;
	int aguaDisponiblePorEsteTurno;

public:
	Tanque(int n, int m, float dificultad);

	//pre:
	//post: devuelve la capacidad total del tanque

	int obtenerCapacidadTotal();

	// pre:
	// post: devuelve la cantidad de unidades de agua que tiene el tanque

	int obtenerCapacidadOcupada();
	// pre:
	//post devuelve la cantidad de espacio libre en el tanque

	int obtenerCapacidadLibre();

	//pre: 'nombreSemillaSeleccionada' está en la lista de semillas y el agua disponible en el tanque es mayor a las unidades de riego
	//     necesarias para el cultivo.

	//post: utiliza las unidades de agua requeridas

	int utilizarAgua(Lista<Semilla*>* semillas, char nombreSemillaSeleccionada);

	//pre:
	//post: establece la cantidad de agua disponible por este turno, se calcula mediante la suma del
	//      agua por turno (que es aleatoria) más la capacidad Ocupada del tanque.

	int determinarAguaPorEsteTurno();

	//pre:
	//post:  actualiza la capacidad Ocupada y capacidad Disponible.
	void actualizarCapacidades();

	//pre:
	//post: devuelve la cantdiad de agua que se puede utilizar.
	int obtenerAguaDisponible();
};


#endif /* TANQUE_H_ */
