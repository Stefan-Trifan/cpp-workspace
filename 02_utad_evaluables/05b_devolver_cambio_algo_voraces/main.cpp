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

    int valores[8] = { 500, 200, 100,  50,  25,  10,   5,   1};
	int num_monedas;
	int cantidad;

	do
	{
		cin >> cantidad;
		int cambio = cantidad;

		if (cantidad > 0)
		{
			for (int i = 0; i < 8; i++)
			{
				num_monedas = cambio / valores[i];
				cambio %= valores[i];
				cout << num_monedas << " ";
			}
			cout << "\n";
		}
	} while (cantidad > 0);

	return 0;
}
