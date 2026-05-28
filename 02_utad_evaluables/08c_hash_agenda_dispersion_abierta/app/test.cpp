// Steve

/* _________________________________________
   Inicio cabecera */

#include "Agenda.h"
#include "impresionListasEnlazadas.h"
#include <iostream>

using namespace std;
// clang-format off
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}
// clang-format on

int main()
{
	cout << "\n__________________________START\n\n";

    Agenda* agenda = new Agenda(10);

    agenda->introducirContacto(1000, "Steve");
    agenda->introducirContacto(2000, "Steve");

    agenda->imprimir();

    cout << agenda->existeContacto(1000) << '\n';

    cout << agenda->getContacto(3000) << '\n';

	cout << "\n__________________________EXIT\n\n";
	return 0;
}

// todos
/**
 * ListaEnlazada
 * Agenda
 */