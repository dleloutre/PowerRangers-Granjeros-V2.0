#ifndef TRADUCTOR_H_
#define TRADUCTOR_H_

#include <string>
#include <sstream>


class Traductor{

	public:

	/*
	 * post: convierte a enteros el 'valor' recibido
	 */

int convertirAEntero(std::string array){

	int valor;

	// cambia los string a enteros
	std::istringstream buffer(array);
	valor=0; //si ocurre algo, por defecto pone un 0
	buffer >> valor;

	return valor;

}


};



#endif /* TRADUCTOR_H_ */
