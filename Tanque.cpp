#include "Tanque.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Tanque::Tanque(int n, int m, float dificultad)
{
	capacidadTotal = n*m * dificultad;
	capacidadOcupada = 0;
	capacidadLibre = capacidadTotal;
	aguaDisponiblePorEsteTurno = 0;
}

int Tanque::obtenerCapacidadTotal()
{
	return capacidadTotal;
};
