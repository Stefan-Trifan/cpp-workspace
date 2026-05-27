// Steve
#include "ListaEnlazada.h"
#include "assertdomjudge.h"
#include <iostream>

// _____________________ Constructores
// Constructor. Crea una lista de tamaño 0
// Complejidad temporal y espacial: O(1)
ListaEnlazada::ListaEnlazada()
{
    this->n = 0;
    this->lista = nullptr;
    this->posicionUltimoNodoAccedido = 0;
    this->punteroUltimoNodoAccedido = nullptr;
}

// Destructor. Libera memoria
// Complejidad temporal: O(n)
// todo
ListaEnlazada::~ListaEnlazada()
{

}

// _____________________ Getter
// Devuelve un elemento de la lista en determinada posición
// Parámetro: la posición del elemento
// Retorno: una copia del elemento encontrado en esa posición
// Precondiciones: posicion en [0, n-1] y n>0
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// todo
Contacto ListaEnlazada::getValor(int pos)
{
    Contacto borrar;
    return borrar;
}

// Devuelve el tamaño actual de la lista
// Complejidad temporal y espacial: O(1)
// todo
int ListaEnlazada::getN()
{
    return this->n;
}

// Obtiene un nodo de la lista
// Parametro: la posición del nodo
// Retorno: un puntero al nodo que esta en dicha posición
// Precondiciones:
// - la posición debe estar en el intervalo [0, n-1]
// - La lista no esta vacia (n>0)
// Complejidad temporal: O(n). Como maximo hace n/2 iteraciones porque decide si ir hacia delante o hacia atras
// Complejidad espacial: O(1)
// todo
Nodo* ListaEnlazada::getNodo(int pos)
{
    return nullptr;
}

// _____________________ Setter
// Modifica un elemento de la lista
// Parámetros:
// - posicion: la posición del elemento que queremos modificar
// - nuevoValor: el nuevo valor del elemento
// Precondiciones: posicion en [0, n-1] y n>0
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// todo
void ListaEnlazada::setValor(int pos, Contacto nuevoValor)
{

}

// _____________________ Métodos públicos
// Inserta un nuevo elemento en una posición de la lista
// Los elementos que habia desde la posición hasta el final de la lista se desplazaron una posición a la derecha
// Parámetros:
// - posición: la posición en donde queremos poner el nuevo elemento. Si es 0 se inserta al principio, si es n se inserta al final
// - nuevoValor: el nuevo elemento que queremos poner
// Precondiciones: posicion en [0, n]
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// todo
void ListaEnlazada::insertar(int pos, Contacto nuevoValor)
{

}

// Elimina un elemento en una posición dada.
// Los elementos que hab�a desde posicion+1 hasta el final de la lista se desplazar�n una posición a la izquierda
// Parámetros:
// - posicion: la posición del elemento que queremos borrar. Si es 0 se elimina el primero y si es n-1 se elimina el �ltimo
// Precondiciones: posicion en [0, n-1] y n>0
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// todo
void ListaEnlazada::eliminar(int pos)
{

}

// Concatena una lista al final de la lista actual
// Cada uno de los elementos de la lista a concatenar se copian, en orden, al final de la lista actual
// Parámetro: puntero a la lista cuyos elementos queremos concatenar al final de nuestra lista
// Precondici�n: listaAConcatenar!=NULL
// Complejidad temporal: O(capacidad), siendo capacidad = listaAConcatenar.getN()
// Complejidad espacial: O(capacidad), siendo capacidad = listaAConcatenar.getN()
// todo
void ListaEnlazada::concatenar(ListaEnlazada* listaAConcatenar)
{

}

// Busca la posición de un elemento en la ListaContigua
// Parámetro: el elemento a buscar
// Retorno: posición del elemento (de 0 a n-1) si se encuentra, o -1 en caso contrario
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// todo
int ListaEnlazada::buscar(Contacto elementoABuscar)
{
    return 0;
}

void ListaEnlazada::toString()
{

}

