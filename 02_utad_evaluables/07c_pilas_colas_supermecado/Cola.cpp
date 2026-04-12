#include "Cola.h"
#include <cstdlib>
#include <iostream>
using namespace std;

// clang-format off
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}
// clang-format on

// Cola Enlazada Simple

// =========================================================
// * Constructor
// =========================================================

/** @brief
 * Constructor sin parámetros de la estructura Cola.
 * Deberá inicializar los punteros principio y final.
 * */
Cola::Cola()
{
	principio = nullptr;
	final     = nullptr;
}

// =========================================================
// * Métodos Públicos
// =========================================================

/** @brief
 * Recibe un num que representará
 * el orden de llegada del cliente al super
 * y lo colocará al final de la cola.
 * */
void Cola::encolar(int num)
{
	// clang-format off
    assertdomjudge((
        principio == nullptr && final == nullptr) ||
        principio != nullptr && final != nullptr);
	// clang-format on

	Nodo* nuevo = new Nodo(num);

	if (principio == nullptr)
	{
        // Cola vacía
		principio = nuevo;
		final     = nuevo;
	}
	else
	{
        // Al menos 1 elemento
		final->siguiente = nuevo;
		final            = nuevo;
	}
}

/** @brief
 * Devuelve el num que representa
 * el orden de llegada del cliente
 * que se encuentra en la primera pos de la cola
 * (El primero en llegar).
 * */
// todo
int Cola::desencolar()
{
	return 0;
}

/** @brief
 * Indica si la cola se encuentra vacía.
 * */
// todo
bool Cola::estaVacia()
{
	return false;
}

// Debug
void Cola::toString()
{
	Nodo* aux = principio;

	while (aux != nullptr)
	{
		cout << aux->valor << ' ';
		aux = aux->siguiente;
	}
	cout << '\n';
}