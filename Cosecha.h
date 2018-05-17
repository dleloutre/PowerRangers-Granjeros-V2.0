#ifndef COSECHA_H_
#define COSECHA_H_

class Cosecha{
private:

	char tipoCosecha;
	int cantidadDeLaCosecha;

public:

	//post: asigna qué cultivo ha sido cosechado y qué cantidad del mismo
	Cosecha(char tipoCosecha, int cantidadDeLaCosecha);

	//post: devuelve la cantidad de cosecha
	int obtenerCantidad();

	//post: devuelve el cultivo que ha sido cosechado
	char obtenerTipoCosecha();

	//post: agrega una unidad de cosecha a 'cantidadDeLaCosecha'
	void agregarUnaUnidadDeCosecha();
};



#endif /* COSECHA_H_ */




#endif /* COSECHA_H_ */
