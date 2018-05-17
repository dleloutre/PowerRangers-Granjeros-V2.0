#ifndef COSECHA_H_
#define COSECHA_H_

class Cosecha{
private:

	char tipoCosecha;
	int cantidadDeLaCosecha;
public:
	Cosecha(char tipoCosecha, int cantidadDeLaCosecha);

	int obtenerCantidad();
	char obtenerTipoCosecha();
	void agregarUnaUnidadDeCosecha();
};



#endif /* COSECHA_H_ */
