#include "Pila.h"
using namespace std;

// ______________ Constructor

/** @brief
 * Constructor con parámetros de la estrucutra Pila.
 * - Asignará el nombre indicado a la pila.
 * - Inicializará el puntero a la cima
 * */
Pila::Pila(string name)
{
	this->name = name;
    this->cima = nullptr;
}

// ___________________ Getter

/** @brief
 * Devuelve el nombre de la pila.
 * */
string Pila::nombrePila()
{
	return this->name;
}

// _________ Metodos Públicos

/** @brief
 * Recibe un num
 * - Representará el tam del disco
 * - Lo colocará en la cima de la pila.
 * Deberá imprimir por pantalla el movimiento realizado:
 * “Apilando disco N en poste P”
 * */
void Pila::apilar(int num)
{
	cout << "Apilando disco " << num << " en poste " << name << endl;

    // cima apunta a nuevo nodo, creado con constructor
    cima = new Nodo(num, cima);
}

/** @brief
 * Devuelve el num que se encuentra en la cima de la pila:
 * - Representará al tam del disco
 * - Se encuentra en la parte superior
 * Deberá indicar por pantalla el movimiento realizado:
 * “Desapilando disco N del poste P”
 * */
int Pila::desapilar()
{
    cout << "Desapilando disco " << cima->valor << " del poste " << name << endl;
    int valor = cima->valor;

    Nodo* aux = cima;
    cima = cima->siguiente;
    delete aux;

	return valor;
}

/** @brief
 * Indica si la pila se encuentra vacía.
 * */
bool Pila::estaVacia()
{
	return cima == nullptr;
}

// debug
void Pila::toString()
{
    Nodo* aux = cima;
	while(aux != nullptr)
    {
        cout << aux->valor << ' ';
        aux = aux->siguiente;
    }

    cout << endl;
}
