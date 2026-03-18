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
bool comprobar_palindromo(string texto, int i, int j);

/* _________________________________________
   Inicio main() */

int main()
{
    // Declaración de variables
    string mi_texto;
    int longitud;
    int i;
    int j;

    // Pedimos texto y comprobamos longitud
    cin >> mi_texto;
    assertdomjudge(mi_texto.length() <= 20);

    longitud = mi_texto.length();
    i = 0;
    j = longitud - 1;

    if(comprobar_palindromo(mi_texto, i, j))
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }
    return 0;
}

/* _________________________________________
   Inicio definicion de funciones */

// Funciones del programa
/**
 * @brief Recibe un texto y dos índices, uno que empieza
 * desde el principio y otro que empieza desde el final.
 *
 * Cuando llamamos a la función, primero comprobamos
 * que la primera y la última letra son iguales.
 *
 * Si son distintas, paramos la función.
 * Si son iguales,
 * - incrementamos el primer índice
 * - decrementamos el último índice.
 * - llamamos de manera recursiva a la función.
 *
 * Volvemos a repetir el proceso hasta que
 * el primer índice se cruce con el último índice.
 *
 * Complejidad
 * - Analisis Temporal T(n) = n + 1
 * - Orden Temporal O(n)
 *
 * - Analisis Espacial M(n) = n + 1
 * - Orden Espacial O(n)
 */
bool comprobar_palindromo(string text, int i, int j)
{
    if(text[i] != text[j])
    {
        return false;
    }
    else if(i >= j)
    {
        return true;
    }
    i++;
    j--;
    return comprobar_palindromo(text, i, j);
}