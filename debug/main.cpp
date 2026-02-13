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
    // getline(cin, nombre);
    nombre = "ababa";

    numCaracteres = nombre.length();

    // Vemos si es un palíndromo
    // abba ababa
    for(int i = 0; i < (numCaracteres - 1) / 2; i++)
    {
        for(int j = numCaracteres - 1; j > (numCaracteres - 1) / 2; j--)
        {
            if(nombre[i] != nombre[j])
            {
                esPalindromo = false;
            }
        }
    }

    std::cout << esPalindromo;

    return esPalindromo;
}
