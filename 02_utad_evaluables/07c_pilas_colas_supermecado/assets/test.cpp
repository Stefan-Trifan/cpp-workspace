#include "Supermercado.h"
#include <iostream>

using namespace std;

// clang-format off
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}
// clang-format on

/* _________________________________________
   Inicio main() */

int main()
{

	printf("\n_________________________________________START\n\n");

	// Declaracion de variables
	Supermercado* supermercado = new Supermercado(3);

	supermercado->nuevoUsuario(0, 1);
	supermercado->nuevoUsuario(0, 1);
	supermercado->nuevoUsuario(0, 1);
	supermercado->nuevoUsuario(0, 1);
	supermercado->nuevoUsuario(0, 1);
	supermercado->nuevoUsuario(0, 1);
	supermercado->nuevoUsuario(1, 2);
	supermercado->nuevoUsuario(1, 2);
	supermercado->nuevoUsuario(1, 2);
	supermercado->nuevoUsuario(1, 2);
	supermercado->nuevoUsuario(1, 2);
	supermercado->nuevoUsuario(1, 2);
	supermercado->nuevoUsuario(2, 3);
	supermercado->nuevoUsuario(2, 3);
	supermercado->nuevoUsuario(2, 3);
	supermercado->nuevoUsuario(2, 3);
	supermercado->nuevoUsuario(2, 3);
	supermercado->nuevoUsuario(2, 3);

	supermercado->toString();

    cout << "Cerrando caja..." << "\n\n";

	supermercado->cerrarCaja(1);
	supermercado->toString();

	printf("\n_________________________________________EXIT\n\n");
	return 0;
}
