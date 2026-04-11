#include "ListaCircular.h"
#include <iostream>
using namespace std;

int main()
{
	// Declaracion variables
	ListaCircular miLista;

	//             pos, nuevoValor
	miLista.insertar(0, "0");
	miLista.insertar(1, "1");

	miLista.toString();

    miLista.eliminar(1);

	miLista.toString();

	// miLista.eliminar(0);


	return 0;
}
