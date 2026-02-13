/*
    Autor
    Stefan Trifan
*/

#include <iostream>

// Prototipos

int main(int argc, char* argv[])
{
    int miNumero = 0;
    int suma = 0;

    // Leer un numero por terminal y meter dentro de la variable miNumero
    std::cin >> miNumero;

    if(miNumero % 2 == 0)
        for(int i = 0; i <= miNumero; i += 2)
            suma += i;
    else
        for(int i = 1; i <= miNumero; i += 2)
            suma += i;

    // Imprimir variable suma
    std::cout << suma;

    return 0;
}

// Definición de funciones