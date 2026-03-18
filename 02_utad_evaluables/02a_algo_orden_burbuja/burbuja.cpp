#include <iostream>
using namespace std;

void ordenarBurbuja(int x[], int len);

int main()
{
	int n;
	cin >> n;
	int *x = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	ordenarBurbuja(x, n);
}

/**
 * @brief Algoritmo de ordenación burbuja
 *
 * @param x: Array de numeros a ordenar
 * @param len: Longitud del array
 *
 * Se repite tantas veces como numero de elementos
 * Por cada pasada
 * - Compara cada par de numeros incrementando de uno en uno
 * - Reemplaza el numero mas grande hasta que llegue al final de la lista
 *
 * Complejidad
 * - Analisis Temporal T(n) = 2n^2
 * - Orden Temporal O(n^2)
 *
 * - Analisis Espacial M(n) = 4
 * - Orden Espacial O(1)
 *
 */
void ordenarBurbuja(int x[], int len)
{
	for (int i = 1; i < len; i++)
	{
		/*Añadir código de ordenación usando algoritmo de burbuja*/

		for (int j = 1; j <= len - i; j++)
		{
			if (x[j] < x[j - 1])
			{
				int temp = x[j];
				x[j]     = x[j - 1];
				x[j - 1] = temp;
			}
		}

		// Imprime estado acutal del array por cada pasada
		for (int k = 0; k < len; k++)
		{
			cout << x[k] << " ";
		}
		cout << endl;
	}
}
