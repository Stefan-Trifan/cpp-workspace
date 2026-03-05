#include <iostream>
using namespace std;

void combinar(int a[], int len_a, int b[], int len_b, int c[]);
void ordenarMergeSort(int x[], int len);

int main()
{
	int n;
	cin >> n;
	int *x = new int[n];
	for (int i = 0; i < n; i++)
		cin >> x[i];
	ordenarMergeSort(x, n);
}
void ordenarMergeSort(int x[], int len)
{
	int temp[len];

	if (true) // caso básico
	{
		return;
	}
	else
	{
		/*Ordenar dos mitades */

		/*Combinar ambas mitades y guardarlo en temp */

		/*Copiar del array temporal al array resultado */
		for (int k = 0; k < len; k++)
		{
			x[k] = temp[k];
			cout << x[k] << " ";
		}
		cout << endl;
	}
}

void combinar(int a[], int len_a, int b[], int len_b, int c[])
{
	// Añadir código que permite combinar dos arrays
}
