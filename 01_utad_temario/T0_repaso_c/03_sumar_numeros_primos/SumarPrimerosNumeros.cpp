/*
    Autor
    Stefan Trifan
*/

#include <iostream>

int main(int argc, char* argv[])
{
    int miNumero = 0;
    int suma = 0;

    // Leer un numero por terminal y meter dentro de la variable miNumero
    std::cin >> miNumero;

    for(int i = 0; i <= miNumero; i++)
    {
        suma += i;
    }

    // Imprimir variable suma
    std::cout << suma;

    return 0;
}
