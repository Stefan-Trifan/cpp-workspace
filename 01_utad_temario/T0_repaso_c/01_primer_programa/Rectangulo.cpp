#include "Rectangulo.h"
#include <string.h>
#include <iostream>

Rectangulo::Rectangulo(int ancho, int alto)
{
    this->ancho = ancho;
    this->alto = alto;
    this->name = new char[100];
}

Rectangulo::~Rectangulo()
{
    delete [] this->name;
    std::cout << "memoria liberada" << std::endl;
}

void Rectangulo::setName(char* name)
{
    strcpy(this->name, name);
}

char* Rectangulo::getName()
{
    return this->name;
}

int Rectangulo::perimetro()
{
    return (alto + ancho) * 2;
}  
