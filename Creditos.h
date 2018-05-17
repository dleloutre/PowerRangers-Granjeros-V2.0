#ifndef CREDITOS_H_
#define CREDITOS_H_

class BolsaCreditos
{
private:
	int creditos;
public:
	BolsaCreditos(int n, int m, int dificulad);
	//pre: hay suficientes creditos
	//post: resta los creditos a pagar de la bolsa
	int pagar(int creditosAPagar);
	//pre:
	//post: agrega los creditos a cobrar a la bolsa
	int cobrar(int creditosACobrar);
	//pre:
	//post: devuelve si hay igual o mas creditos que los ingresados
	bool hayCreditosSuficientes(int creditos);
	//pre:
	//post devuelve la cantidad de creditos que hay en la bolsa
	int obtenerCreditos();

};



#endif /* CREDITOS_H_ */
