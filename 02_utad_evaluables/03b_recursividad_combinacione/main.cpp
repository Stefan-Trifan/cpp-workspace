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
int calcular_combinaciones(int n, int r);

/* _________________________________________
   Inicio main() */

int main()
{
	// Declaración de variables
    int n;
    int r;
    int resultado;

    cin >> n;

    while(n > 0)
    {

        cin >> r;

        if(r > n)
        {
            cout << "ERROR" << '\n';
            cin >> n;
        }
        else
        {
            resultado = calcular_combinaciones(n, r);
            cout << resultado << '\n';
            cin >> n;
        }
    }


	return 0;
}

/* _________________________________________
   Inicio definicion de funciones */

// Funciones del programa
/**
 * @brief Calcula el numero de combinaciones de n elementos en grupos de tamaño r
 *
 * Utilizamos la formula recursiva C(n,r) = C(n-1,r-1) + C(n-1,r)
 *
 * Los casos bases son
 * n == r
 * r = 0
 * r = 1
 *
 * Complejidad
 * - Analisis Temporal T(n) = 2n
 * - Orden Temporal O(2n)
 *
 * - Analisis Espacial M(n) = n
 * - Orden Espacial O(n)
 */
int calcular_combinaciones(int n, int r)
{
    // Caso base
    if(n == r || r == 0)
    {
        return 1;
    }
    if(r == 1)
    {
        return n;
    }

    // Llamada recursiva
    return calcular_combinaciones(n - 1, r - 1) + calcular_combinaciones(n - 1, r);
}
