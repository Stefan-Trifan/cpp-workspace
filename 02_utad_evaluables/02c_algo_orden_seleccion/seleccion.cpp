#include <iostream>
using namespace std;

void ordenarSeleccion(int x[], int len);

int main()
{
	int n;
	cin >> n;
	int *x = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	ordenarSeleccion(x, n);
}

/**
 * @brief Algoritmo de ordenación seleccion
 *
 * @param x: Array de numeros a ordenar
 * @param len: Longitud del array
 *
 * Recorremos el array.
 * Buscamos el elemento menor y lo reemplazamos por el primero
 * Repetimos el mismo proceso desde el sigueinte elemento y así hasta el final
 *
 * Complejidad
 * - Analisis Temporal T(n) = 2n^2 + n
 * - Orden Temporal O(n^2) 
 *
 * - Analisis Espacial M(n) = 5
 * - Orden Espacial O(1)
 *
 */
void ordenarSeleccion(int x[], int len)
{
	for (int i = 0; i < len; i++)
	{
		/*Añadir código de ordenar mediante selección */

		// Buscamos el menor elemento del array
		int menor   = x[i];
		int i_menor = i;
		for (int j = i; j < len; j++)
		{
			if (x[j] < menor)
			{
				menor   = x[j];
				i_menor = j;
			}
		}

		int temp   = x[i];
		x[i]       = x[i_menor];
		x[i_menor] = temp;

		for (int k = 0; k < len; k++)
		{
			cout << x[k] << " ";
		}
		cout << endl;
	}
}
