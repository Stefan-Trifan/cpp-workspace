#include "Pila.h"

// ______________ Constructor

/**
 * @brief Constructor con parámetros de la estrucutra Pila.
 * Inicializará el puntero a la cima
 * Asignará el nombre indicado a la pila.
 * */
// todo
Pila::Pila(string name)
{
}

// ___________________ Getter

/**
 * @brief Devuelve el nombre de la pila.
 * */
// todo
std::string Pila::nombrePila()
{
    return "Hola";
}

// _________ Metodos Públicos

/**
 * @brief Recibe un num que representará el tam del disco
 * y lo colocará en la cima de la pila.
 * Deberá imprimir por pantalla el movimiento realizado:
 * “Apilando disco N en poste P”
 * */
// todo
void Pila::apilar(int num)
{
	cout << "Apilando disco " << num << " en poste " << name << endl;
}

/**
 * @brief Devuelve el num que se encuentra en la cima de la pila
 * que representará al tamaña del disco
 * que se encuentra en la parte superior.
 * Deberá indicar por pantalla el movimiento realizado:
 * “Desapilando disco N del poste P”
 * */
// todo
int Pila::desapilar()
{
	cout << "Desapilando disco " /* << num */ << " del poste " << name << endl;
    return 0;
}

/**
 * @brief Indica si la pila se encuentra vacía.
 * */
// todo
bool Pila::estaVacia()
{
    return 0;
}
