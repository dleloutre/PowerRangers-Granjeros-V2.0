#include "Tanque.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Tanque::Tanque(int n, int m, float dificultad)
{
	this->capacidadTotal = n*m*dificultad;
	this->capacidadOcupada = 0;
	this->capacidadLibre = this->capacidadTotal;
	this->aguaDisponiblePorEsteTurno = 0;
}

int Tanque::obtenerCapacidadTotal()
{
	return capacidadTotal;
};

int Tanque::obtenerCapacidadLibre()
{
	return this->capacidadLibre;
};

int Tanque::obtenerCapacidadOcupada()
{
	return this->capacidadOcupada;
};


int Tanque::determinarAguaPorEsteTurno()
{
	int dado = (rand() % 6 )+1;
	int aguaAleatoria = (5*dado);
	this->aguaDisponiblePorEsteTurno = aguaAleatoria + this->capacidadOcupada;
	aguaAleatoria = 0;
	return this-> aguaDisponiblePorEsteTurno;
};

int Tanque::obtenerAguaDisponible()
{
	return this->aguaDisponiblePorEsteTurno;
}

int Tanque::utilizarAgua(Lista<Semilla*>* semillas, char nombreSemillaSeleccionada)
{	int aguaUtilizada = 0;
	CatalogoSemillas catalogo;
	Semilla* semillaDeCatalogo = catalogo.obtenerInformacionSemilla(semillas, nombreSemillaSeleccionada);

	int cantidadDeAguaParaRegar = semillaDeCatalogo->obtenerConsumoAgua();

	if(this->aguaDisponiblePorEsteTurno >= cantidadDeAguaParaRegar)
	{
		this->aguaDisponiblePorEsteTurno = this->aguaDisponiblePorEsteTurno - cantidadDeAguaParaRegar;
		aguaUtilizada = cantidadDeAguaParaRegar;
	}
	return aguaUtilizada;
};

void Tanque::actualizarCapacidades()
{
	if(this->aguaDisponiblePorEsteTurno >= this->capacidadTotal)
	{
		this->capacidadLibre = 0;
		this->capacidadOcupada = this->capacidadTotal;
	}
	else
	{	this->capacidadOcupada = this->aguaDisponiblePorEsteTurno;
		this->capacidadLibre = this->capacidadTotal - this->capacidadOcupada;
	}
	this->aguaDisponiblePorEsteTurno = this->capacidadOcupada;
};
