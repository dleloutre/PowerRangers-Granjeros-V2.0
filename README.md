# PowerRangers-Granjeros-V2.0
TP Granjeros v2.0 Algoritmos y programacion II

**************
06/05
Power Ranger Rojo
Subi archivos datosCultivos.cpp .h y Cultivo.h

con #include "datosCultivos.h" en el codigo se puede utilizar la clase "DatosCultivos" cuyo metodo devuelve el puntero a la Clase
Cultivo con todos los datos de ese tipo de semilla

  DatosCultivos datosCultivos;

  Cultivo* punteroCultivoConSemillaDelTipo = datosCultivos.obtenerCultivo(cultivos,cultivo)
  
  /*
  * siendo cultivos la lista con todos los datos del archivo.txt cargados
  */y cultivo el caracter que ustedes estan buscando
  
  Ejemplo: 
  
  Cultivo* punteroCultivoConSemillaDelTipo = datosCultivos.obtenerCultivo(cultivos,'A');
 
  Costo_Semilla_A = punteroCultivoConSemillaDelTipo -> obtenerCostoSemilla();


SUJETO A MODIFICACIONES...
******************
