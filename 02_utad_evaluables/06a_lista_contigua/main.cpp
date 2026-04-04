/*
    Stefan Trifan

    #if 0
    #end if
*/

/* _________________________________________
   Inicio cabecera */

#include "ListaContigua.h"
#include <iostream>
using namespace std;

/* _________________________________________
   Inicio main() */

int main()
{

	printf("\n_________________________________________START\n\n");

	// Declaración de variables
	ListaContigua *lista1;
	int incremento;

	// Creamos nueva lista
	incremento = 4;
	lista1     = new ListaContigua(incremento);

	// Insertamos elementos
	// insertar(pos, valor)
	lista1->insertar(0, 1);
	lista1->insertar(1, 2);
	lista1->insertar(2, 3);
	lista1->insertar(3, 4);
	lista1->insertar(4, 5);
	lista1->toString();
	lista1->insertar(1, 9);
	lista1->toString();
	lista1->eliminar(2);
	lista1->toString();

	printf("\n_________________________________________EXIT\n\n");

	return 0;
}
