#include <iostream>
#include "Rectangulo.h"

// Funciones del programa
void createRect()
{
    int ancho, alto;
    char* name = new char[100];
    std::cin >> ancho;
    std::cin >> alto;
    std::cin >> name;
    Rectangulo rectangulo(ancho, alto);
    rectangulo.setName(name);

    std::cout <<"Tamaño del rectangulo " << 
    rectangulo.getName() << ": " << rectangulo.perimetro() << std::endl;
    delete [] name;
    return;
}

// Funciones auxiliares
void clearBuffer();

/* _________________________________________
   Inicio main() */

int main(int argc, char *argv[])
{
    printf("\n_________________________________________START\n\n");

    createRect();
    createRect();

    printf("\n_________________________________________EXIT\n\n");
    return EXIT_SUCCESS;
}

/* _________________________________________
   Inicio definicion de funciones */

// Funciones del programa

// Funciones auxiliares
void clearBuffer()
{
    while (getchar() != '\n');
}