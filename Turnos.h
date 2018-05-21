#ifndef TURNOS_H_
#define TURNOS_H_

const int CANTIDAD_BASE_DE_TURNOS = 10;

class Turnos {
	private:
			unsigned int cantidadTurnosTotales;
			unsigned int turnoActual;

	public:
			//post: define la cantidad de turnos disponibles segun el nivel de dificultad e inicializa los turnos jugados
			Turnos(float dificultad);

			//post: devuelve la cantidad de turnos disponibles para jugar
			unsigned int obtenerCantidadTurnosTotales();

			//post: devuelve el turno actual
			unsigned int obtenerTurnoActual();

			//post: termina el turno sumando un valor a 'turnoActual'
			void terminarTurno();
};



#endif /* TURNOS_H_ */
