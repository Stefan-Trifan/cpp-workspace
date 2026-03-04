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
float calcular_raiz(float mitad, float num, float err, float min, float max);

/* _________________________________________
   Inicio main() */

int main()
{
	// Declaración de variables
    float mi_num;
    float mi_err;

    cin >> mi_num;
    cin >> mi_err;

    cout << calcular_raiz(mi_num / 2, mi_num, mi_err, 0, mi_num) << '\n';

	return 0;
}

/* _________________________________________
   Inicio definicion de funciones */

// Funciones del programa
float calcular_raiz(float mitad, float num, float err, float min, float max)
{
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
        printf("reduccion\n");
        min = mitad / 2;
        max = mitad;
        return calcular_raiz((max - mitad) / 2, num, err, min, max);
    }
    else if(mitad * mitad < num)
    {
        printf("ampliacion\n");
        min = mitad / 2;
        max = mitad;
        return calcular_raiz(mitad + mitad / 2, num, err, min, max);
    }
}
