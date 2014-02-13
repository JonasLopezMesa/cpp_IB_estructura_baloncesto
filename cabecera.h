#ifndef _CABECERA_H_
#define _CABECERA_H_


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void menu ();

struct jugador // estructura del jugador
{
	int dorsal ;
	string puesto ;
	int canastas ;
	int asistencias ;
	int rebotes ;
	int valor ;
}static jugador0 = {21,"base",35,78,56,0} ;

struct equipo //estructura del equipo que incluye la estructura del jugador
{
	int codigo;
	jugador jugador1[2];
	int numero;
};
static equipo grupo[3];
static char cadena[6];
static int ko=0;
static int jui=0;



void mostrarequipo(); // subprograma que muestra el contenido del fichero en pantalla
void guardarequipo(); //subprograma que guarda la array de equipo en un fichero
void verjugador();// subprograma que muestra un jugador
void verequipo(int j);
float porcentaje(); //subprograma que calcula el porcentaje de un jugador respecto al mejor jugador de su clase y de su equipo
void insertarjugador(int i); // subprograma que inserta un jugador que esta dentro de un equipo
void insertarequipo(); //subprograma que inserta un equipo que esta
void menu ();

#endif