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
int calc_n_max_coches(int n_pilas, int v_minimo, int arr_pilas[]);

// Funciones auxiliares

/* _________________________________________
   Inicio main() */

int main()
{
	cout << "\n_________________________________________START\n\n";

	// Declaración de variables
	int repeticiones = 0;
	int n_pilas      = 0;
	int v_minimo     = 0;
	int resultado    = 0;

	cin >> repeticiones;

	for (int i = 0; i < repeticiones; i++)
	{
        // Pedimos datos
		cin >> n_pilas;
		cin >> v_minimo;

		int arr_pilas[n_pilas];

        // Pedimos voltajes
		for (int i = 0; i < n_pilas; i++)
		{
			cin >> arr_pilas[i];
		}

		// Calculamos
        cout << calc_n_max_coches(n_pilas, v_minimo, arr_pilas) << '\n';
	}

	cout << "\n_________________________________________EXIT\n\n";
	return 0;
}

/* _________________________________________
   Inicio definicion de funciones */

// Funciones del programa
int calc_n_max_coches(int n_pilas, int v_minimo, int arr_pilas[])
{

    return 0;
}

// Funciones auxiliares
