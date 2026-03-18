/*
    Stefan Trifan

    #if 0
    #en
*/

/* _________________________________________
   Inicio cabecera */

#include <iostream>
using namespace std;

// Funciones del programa

// Funciones auxiliares

/* _________________________________________
   Inicio main() */

int main()
{
	cout << "\n________________________________START\n\n";

	// Declaración de variables
	int x500 = 0;
	int x200 = 0;
	int x100 = 0;
	int x50  = 0;
	int x25  = 0;
	int x10  = 0;
	int x5   = 0;
	int x1   = 0;
	int cantidad;
	int cambio;

	do
	{
		cin >> cantidad;
		// cout << cantidad << endl; // todo test

        cambio = cantidad;

        if(cantidad > 0)
        {
            x500 = cambio / 500;
            cambio %= 500;

            x200 = cambio / 200;
            cambio %= 200;

            x100 = cambio / 100;
            cambio %= 100;

            x50 = cambio / 50;
            cambio %= 50;

            x25 = cambio / 25;
            cambio %= 25;

            x10 = cambio / 10;
            cambio %= 10;

            x5 = cambio / 5;
            cambio %= 5;

            x1 = cambio / 1;
            cambio %= 1;

            cout << x500 << " " << x200 << " " << x100 << " " << x50 << " " << x25 << " " << x10 << " " << x5 << " " << x1 << "\n";
        }
	} while (cantidad > 0);

	cout << "\n________________________________EXIT\n\n";
	return 0;
}

/* _________________________________________
   Inicio definicion de funciones */

// Funciones del programa

// Funciones auxiliares
