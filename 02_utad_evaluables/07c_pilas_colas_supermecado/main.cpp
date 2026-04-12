#include <iostream>
#include "Cola.h"

// todo al descomentar, borrar cola
// #include "Supermercado.h"

using namespace std;

// clang-format off
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}
// clang-format on


/* _________________________________________
   Inicio main() */

int main()
{
	// Declaración de variables
    Cola miColita;
    miColita.encolar(1);
    miColita.encolar(2);
    miColita.toString();

	return 0;
}
