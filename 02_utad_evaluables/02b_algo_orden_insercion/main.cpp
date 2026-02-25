#include <iostream>
using namespace std;

void ordenarInsercion(int x[], int len);

int main()
{
    int n;
	cin >> n;
	int *x = new int[n];
	for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
	ordenarInsercion(x, n);
}

/**
 * @brief Algoritmo de ordenación insercion
 *
 * @param x: Array de numeros a ordenar
 * @param len: Longitud del array
 *
 * Recorremos el array. Vamos comparando cada elemento con su anterior
 * Si vemos que el elemento posterior es mayor que el anterior:
 * - guardamos la posicion del mayor
 * - lo comparamos con todos los elementos anteriores, hasta que encontremos
 * uno que sea menor o igual
 * - a medida que lo vamos comparando los movemos una posicion mas arriba
 * - cuando encontramos un elemento menor, insertamos el elemento guardado
 *
 */
void ordenarInsercion(int x[], int len)
{
    for (int i = 1; i < len; i++)
    {
        /*Añadir código de ordenación mediante inserción*/
        if(x[i - 1] > x[i])
        {
            int temp = x[i];
            int j = i - 1;

            while(x[j] > temp)
            {
                x[j + 1] = x[j];
                j--;
            }

            x[j + 1] = temp;
        }


        for (int k = 0; k < len; k++)
        {
            cout << x[k] << " ";
        }
        cout << endl;
    }
}