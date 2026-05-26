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

    miAgenda.introducirContacto(10, "pepa");

    cout << miAgenda.getContacto(10) << '\n';

	cout << "\n_________________________________________EXIT\n\n";
	return 0;
}
