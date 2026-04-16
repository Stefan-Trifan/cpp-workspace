/*
    Stefan Trifan

    #if 0
    #en
*/

/* _________________________________________
   Inicio cabecera */

#include <iostream>
#include "assertdomjudge.h"
#include "Agenda.h"

using namespace std;

/* _________________________________________
   Inicio main() */

int main()
{
	cout << "\n_________________________________________START\n\n";

	// Declaración de variables
    Agenda miAgenda(10);

    miAgenda.nombres[1] = "Steve";
    miAgenda.telefonos[1] = 1;
    miAgenda.vacias[1] = false;
    miAgenda.n++;

    miAgenda.nombres[2] = "Mate";
    miAgenda.telefonos[2] = 2;
    miAgenda.vacias[2] = false;
    miAgenda.n++;

    miAgenda.nombres[9] = "Val";
    miAgenda.telefonos[9] = 1;
    miAgenda.vacias[9] = false;
    miAgenda.n++;

    miAgenda.imprimir();

    cout << miAgenda.buscarHueco(3) << '\n';

	cout << "\n_________________________________________EXIT\n\n";
	return 0;
}
