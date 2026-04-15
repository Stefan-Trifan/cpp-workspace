/*
    Stefan Trifan

    #if 0
    #en
*/

/* _________________________________________
   Inicio cabecera */

#include "Agenda.h"
#include "assertdomjudge.h"
#include <iostream>
#include <string>

using namespace std;

// Funciones del programa

// Funciones auxiliares

/* _________________________________________
   Inicio main() */

int main()
{
    cout << "\n_________________________________________START\n\n";

	// Declaración de variables
    int capacidad = 10;
    Agenda miAgenda(capacidad);

    miAgenda.introducirContacto(10, "Pepe");
    // miAgenda.introducirContacto(100, "Juan");

    miAgenda.imprimir();



    cout << "\n_________________________________________EXIT\n\n";
	return 0;
}

/* _________________________________________
   Inicio definicion de funciones */

// Funciones del programa

// Funciones auxiliares
