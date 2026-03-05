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
float calcular_raiz(float num, float err, float min, float max);

/* _________________________________________
   Inicio main() */

int main()
{
	// Declaración de variables
    float mi_num;
    float mi_err;
    float resultado;


    cin >> mi_num;
    cin >> mi_err;
    if(mi_num < 0 || mi_err < 0)
    {
        cout << "ERROR" << '\n';
        return 0;
    }

    resultado = calcular_raiz(mi_num, mi_err, 0, mi_num);
    cout << resultado << '\n';

	return 0;
}

/* _________________________________________
   Inicio definicion de funciones */

// Funciones del programa
/**
 * @brief Función recursiva que recibe un número, el margen de error.
 * Por cada iteración se ajusta el mínimo y el máximo
 * dentro de los cuales se puede encontrar la raíz.
 *
 * Buscamos la mitad entre el mínimo y el máximo. Si la mitad al cuadrado es mayor que el número, significa que hay que reducir el maximo al valor de la mitad mitad.
 * Si la mitad al cuadrado es menor que el número, ajustamos el valor del mínimo a la mitad.
 *
 * Complejidad
 * - Analisis Temporal T(n) = T(n/2) + 1
 * - Orden Temporal O(log((max - min) / err))
 *
 * - Analisis Espacial M(n) = T(n/2) + 1
 * - Orden Espacial O(log((max - min) / err))
 */
float calcular_raiz(float num, float err, float min, float max)
{
    float mitad = (min + max) / 2.0;

    // Caso base
    if(mitad * mitad >= num - err && mitad * mitad <= num + err)
    {
        return mitad;
    }

    // Reduccion del problema + Llamada recursiva
    if(mitad * mitad > num)
    {
        cout << mitad << '\n';
        max = mitad;
        return calcular_raiz(num, err, min, max);
    }
    else
    {
        cout << mitad << '\n';
        min = mitad;
        return calcular_raiz(num, err, min, max);
    }
}
