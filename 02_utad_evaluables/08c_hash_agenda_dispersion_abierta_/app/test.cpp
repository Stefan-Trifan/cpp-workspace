// Steve

/* _________________________________________
   Inicio cabecera */

#include <iostream>
#include "ListaEnlazada.h"

using namespace std;
// clang-format off
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}
// clang-format on

int main()
{
    cout << "\n__________________________START\n\n";

	// Declaración de variables
   ListaEnlazada lista;
   cout << lista.getN() << '\n';

   cout << "\n__________________________EXIT\n\n";
	return 0;
}

// todos
/**
 * ListaEnlazada
 * Agenda
 */