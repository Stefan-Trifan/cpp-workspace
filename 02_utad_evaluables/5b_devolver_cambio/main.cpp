/*
    Stefan Trifan

    #if 0
    #en
*/

/* _________________________________________
   Inicio cabecera */

#include <iostream>
using namespace std;

/* _________________________________________
   Inicio main() */

int main()
{
	// Declaración de variables

	// clang-format off
    int monedas[8] = {   0,   0,   0,   0,   0,   0,   0,   0};
    int valores[8] = { 500, 200, 100,  50,  25,  10,   5,   1};
	// clang-format on

    int cantidad;

	do
	{
		cin >> cantidad;
		// cout << cantidad << endl; // todo test

		int cambio = cantidad;

		if (cantidad > 0)
		{
            for(int i = 0; i < 8; i++)
            {
                monedas[i] = cambio / valores[i];
                cambio %= valores[i];
                cout << monedas[i] << " ";
            }
			cout << "\n";
		}
	} while (cantidad > 0);

	return 0;
}
