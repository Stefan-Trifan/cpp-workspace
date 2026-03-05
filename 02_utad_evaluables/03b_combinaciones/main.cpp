/*
    Stefan Trifan

    #if 0
    #en
*/

/* _________________________________________
   Inicio cabecera */

#include <iostream>
using namespace std;
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}

// Funciones del programa
int calcular_combinaciones(int n, int r);

/* _________________________________________
   Inicio main() */

int main()
{
	// Declaración de variables
    int n;
    int r;

    cin >> n;
    cin >> r;

    cout << calcular_combinaciones(n, r) << '\n';

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
