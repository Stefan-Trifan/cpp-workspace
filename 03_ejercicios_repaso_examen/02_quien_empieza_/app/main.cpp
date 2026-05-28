/*
    Stefan Trifan

    #if 0
    #en
*/

/* _________________________________________
   Inicio cabecera */

#include <iostream>

using namespace std;
// clang-format off
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}
// clang-format on

// Funciones del programa

// Funciones auxiliares

/* _________________________________________
   Inicio main() */

int main()
{
	cout << "\n________________________________START\n\n";

	// Declaración de variables
	int n_ninos  = 0;
	int n_saltos = 0;

	do
    {
        // Num niños
        cin >> n_ninos;
        assertdomjudge(n_ninos >= 0 && n_ninos <= 10000);

        cin >> n_saltos;
        assertdomjudge(n_saltos >= 0 && n_saltos <= 1000);

        if(n_ninos == 0 && n_saltos == 0)
        {
            break;
        }
    }
    while (n_ninos != 0 && n_saltos != 0);


	cout << "\n________________________________EXIT\n\n";
	return 0;
}

/* _________________________________________
   Inicio definicion de funciones */

// Funciones del programa

// Funciones auxiliares
