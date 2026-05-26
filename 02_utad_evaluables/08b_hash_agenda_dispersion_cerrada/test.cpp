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
    miAgenda.introducirContacto(100, "pepa");
    miAgenda.introducirContacto(1000, "pepa");
    miAgenda.introducirContacto(20, "pepa");
    miAgenda.introducirContacto(200, "pepa");
    miAgenda.introducirContacto(2000, "pepaa");

    cout << miAgenda.getContacto(2000) << '\n';

	cout << "\n_________________________________________EXIT\n\n";
	return 0;
}
