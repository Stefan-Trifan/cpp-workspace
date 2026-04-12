#include "Cola.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// clang-format off
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}
// clang-format on

// __________________________________________________
// ______________________________________ Constructor

/** @brief
 * Constructor sin parámetros de la estructura Cola.
 * Deberá inicializar los punteros principio y final.
 * */
Cola::Cola()
{

}

// __________________________________________________
// _________________________________ Métodos Públicos

/** @brief
 * Recibe un num que representará
 * el orden de llegada del cliente al super
 * y lo colocará al final de la cola.
 * */
void Cola::encolar(int num)
{

}

/** @brief
 * Devuelve el num que representa
 * el orden de llegada del cliente
 * que se encuentra en la primera pos de la cola
 * (El primero en llegar).
 * */
int Cola::desencolar()
{
    return 0;
}

/** @brief
 * Indica si la cola se encuentra vacía.
 * */
bool Cola::estaVacia()
{
    return false;
}