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
float calcular_raiz(float temp, float num, float err);

/* _________________________________________
   Inicio main() */

int main()
{
	// Declaración de variables
    float mi_num;
    float mi_err;

    cin >> mi_num;
    cin >> mi_err;

    cout << calcular_raiz(mi_num, mi_num, mi_err) << '\n';

	return 0;
}

/* _________________________________________
   Inicio definicion de funciones */

// Funciones del programa
float calcular_raiz(float temp, float num, float err)
{
    float mitad = temp / 2; // [mitad] = 7.5,[temp] = 15, [num] = 15

    printf("Vuelta [mitad]: %.3f\n", mitad);
    // Caso base
    if(mitad * mitad >= num - err && mitad * mitad <= num + err)
    {
        printf("Base [mitad]: %.3f\n", mitad);
        return mitad;
    }

    // Reduccion del problema + Llamada recursiva
    if(mitad * mitad > num)
    {
        // printf("DEBUG reduccion > [mitad]: %.3f\n", mitad);
        return calcular_raiz(mitad, num, err);
    }
    else
    {
        // printf("DEBUG reduccion < [mitad]: %.3f\n", mitad);
        return calcular_raiz(mitad + mitad / 2, num, err);
    }
}
