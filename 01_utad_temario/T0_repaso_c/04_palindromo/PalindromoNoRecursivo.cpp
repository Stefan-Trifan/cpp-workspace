/*
    Autor
    Stefan Trifan
*/

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    // Declaramos un string
    // Declaramos numCaracteres
    string nombre;
    int numCaracteres = 0;
    bool esPalindromo = true;

    // Leemos el string
    getline(cin, nombre);;

    numCaracteres = nombre.length();

    // Vemos si es un palíndromo
    // abba ababa
    int j = numCaracteres - 1;
    for(int i = 0; i < numCaracteres - 1 / 2; i++)
    {
        if(nombre[i] != nombre[j])
        {
            esPalindromo = false;
            std::cout << esPalindromo;
            return 0;
        }
        j--;
    }

    std::cout << esPalindromo;

    return 0;
}
