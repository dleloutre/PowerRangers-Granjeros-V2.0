//Esto use para probar el comienzo del juego

unsigned int dificultadElegida, cantidadJugadores, terrenoSeleccionado, fila, columna, posicion;
float dificultad;
string nombre;

menuDificultad();
cin >> dificultadElegida;
if (dificultadElegida == 1){
	dificultad = 3;
} else if (dificultadElegida == 2) {
	dificultad = 2;
} else {
	dificultad = 1;
}

cout << "Ingrese la cantidad de jugadores" << endl;
cin >> cantidadJugadores;

//crea lista de jugadores y se definen los turnos
Juego partidaActual(cantidadJugadores);
Turnos turnos(dificultad);

/*
* crea cada jugador identificado por nombre y los va agregando a la lista de jugadores, a cada jugador
* se le asigna una lista con propiedades con un terreno inicial
*/

for (unsigned int i = 1; i <= partidaActual.obtenerCantidadJugadores(); i++) {
	cout<<"Ingresar nombre jugador n°:"<< i << endl;
	cin>>nombre;
	partidaActual.agregarJugador(dificultad, nombre); //ver el tema de "siguienteJugador"
}

//solo para probar que agregue bien a la lista
for (unsigned int j = 1; j <= partidaActual.obtenerCantidadJugadores(); j++) {
	cout << partidaActual.obtenerJugadores()->obtener(j)->obtenerNombre() << endl;
}


//while (turnos.obtenerTurnoActual() <= turnos.obtenerCantidadTurnosTotales() ){
	for (unsigned int jugadorActual = 1; jugadorActual <= partidaActual.obtenerCantidadJugadores(); jugadorActual++) {
		cout << "Esta jugando:" <<partidaActual.obtenerJugadores()->obtener(jugadorActual)->obtenerNombre() << endl;

		cout << "Seleccione un terreno:" << endl;

		Propiedades* terrenosDisponibles = partidaActual.accederAJugador(jugadorActual)->obtenerTerrenos();

		//compruebo la lista de terrenos
		for (unsigned int j=1; j <= terrenosDisponibles->obtenerCantidadTerrenos() ; j++){
			cout << j << ": Terreno de dimension " <<
				terrenosDisponibles->accederATerreno(j)->obtenerColumnas() << "x"
				<< terrenosDisponibles->accederATerreno(j)->obtenerFilas() << endl;
		}

		cin >> terrenoSeleccionado;

		Terreno* terreno = terrenosDisponibles->accederATerreno(terrenoSeleccionado);

		cout << terreno->obtenerPosicionTerreno() << ": Terreno de dimension " << terreno->obtenerColumnas() << "x"
			<< terreno->obtenerFilas() << endl;


		cout << "Selecciona la posicion de la parcela. Ingrese primero la fila y "
				"luego la columna" << endl;
		cin >> fila;
		cin >> columna;

		cout << "Antes de regar: " << terreno->obtenerParcela(fila, columna).regado() << endl;
		terreno->modificarParcela(fila, columna)->regarParcela();
		cout << "Despues de regar: " << terreno->obtenerParcela(fila, columna).regado() << endl;

		cout << "Compra Terreno" << endl;
		terrenosDisponibles->comprarTerreno(dificultad);
		cout <<"Tiene:" << terrenosDisponibles->obtenerCantidadTerrenos() << " propiedades" << endl;

		terrenosDisponibles->comprarTerreno(dificultad);
		cout <<"Tiene:" << terrenosDisponibles->obtenerCantidadTerrenos() << " propiedades" << endl;


		cout << "Que terreno desea vender?:" << endl;

		for (unsigned int a=1; a <= terrenosDisponibles->obtenerCantidadTerrenos(); a++) {
			cout << "Terreno" << a << endl;
		}

		cin>>posicion;

		Terreno* terrenoEnVenta = terrenosDisponibles->accederATerreno(posicion);
		terrenosDisponibles->venderTerreno(terrenoEnVenta);
		cout <<"Tiene:" << terrenosDisponibles->obtenerCantidadTerrenos() << " propiedades" << endl;
	}


cout << "Cantidad terrenos primer jugador: " << partidaActual.accederAJugador(1)->obtenerTerrenos()->obtenerCantidadTerrenos()<<endl;

cout <<"Parcela 1,1 del jugador 1, terreno 1: " <<partidaActual.accederAJugador(1)->obtenerTerrenos()->accederATerreno(1)->obtenerParcela(1,1).regado() << endl;

cout <<"Parcela 1,1 del jugador 2, terreno 1: " <<partidaActual.accederAJugador(2)->obtenerTerrenos()->accederATerreno(1)->obtenerParcela(1,1).regado() << endl;
