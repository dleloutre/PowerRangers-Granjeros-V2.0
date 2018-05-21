#ifndef TERRENO_H_
#define TERRENO_H_

#include "Parcela.h"

class Terreno {

	private:
		unsigned int filas;
		unsigned int columnas;
		Parcela** terreno;
		Parcela* accesoATerreno;

	public:

		//POST: crea la matriz 'terreno' de tamanio filasxcolumnas
		Terreno(unsigned int filas, unsigned int columnas);

		//POST: devuelve la parcela que se encuentra en la posicionFila y posicionColumna del terreno
		Parcela obtenerParcela(unsigned int posicionFila, unsigned int posicionColumna);

		//POST: accede a la parcela que se encuentra en la posicionFila y posicionColumna del terreno
		Parcela* modificarParcela(unsigned int posicionFila, unsigned int posicionColumna);

		//POST: devuelve la cantidad de filas de la matriz 'terreno'
		unsigned int obtenerFilas();

		//POST: devuelve la cantidad de columnas de la matriz 'terreno'
		unsigned int obtenerColumnas();

		~Terreno();
};



#endif /* TERRENO_H_ */
