// Steve
#include "ListaEnlazada.h"
#include "assertdomjudge.h"
#include <iostream>

// _____________________ Constructores
// Constructor. Crea una lista de tamaño 0
// Complejidad temporal y espacial: O(1)
ListaEnlazada::ListaEnlazada()
{
	this->n                          = 0;
	this->lista                      = nullptr;
	this->posicionUltimoNodoAccedido = 0;
	this->punteroUltimoNodoAccedido  = nullptr;
}

// Destructor. Libera memoria
// Complejidad temporal: O(n)
// * done 8
ListaEnlazada::~ListaEnlazada()
{
	Nodo* aux = lista;

	while (aux != nullptr)
	{
		Nodo* siguiente = aux->siguienteNodo;
		delete aux;
		aux = siguiente;
	}

	lista = nullptr;
	n     = 0;
}

// _____________________ Getter
// Devuelve un elemento de la lista en determinada posición
// Parámetro: la posición del elemento
// Retorno: una copia del elemento encontrado en esa posición
// Precondiciones: posicion en [0, n-1] y n>0
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// * done 2
Contacto ListaEnlazada::getValor(int pos)
{
	// Precondiciones
	assertdomjudge(pos >= 0 && pos < n);

	// Buscamos el nodo con getNodo(pos)
	// Devolvemos su valor

	return getNodo(pos)->elemento;
}

// Devuelve el tamaño actual de la lista
// Complejidad temporal y espacial: O(1)
// * done 1
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
// * done 4
Nodo* ListaEnlazada::getNodo(int pos)
{
	// Precondiciones
	assertdomjudge(pos >= 0 && pos < n);

	Nodo* miNodo = lista;

	for (int i = 0; i < pos; i++)
	{
		miNodo = miNodo->siguienteNodo;
	}

	return miNodo;
}

// _____________________ Setter
// Modifica un elemento de la lista
// Parámetros:
// - posicion: la posición del elemento que queremos modificar
// - nuevoValor: el nuevo valor del elemento
// Precondiciones: posicion en [0, n-1] y n>0
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// * done 3
void ListaEnlazada::setValor(int pos, Contacto nuevoValor)
{
	// Precondiciones
	assertdomjudge(pos >= 0 && pos < n);

	// Obtenemos el nodo con getNodo(pos)
	// Reemplazamos su elemento por nuevoValor
	getNodo(pos)->elemento = nuevoValor;
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
// * done 5
void ListaEnlazada::insertar(int pos, Contacto nuevoValor)
{
	// Precondiciones
	assertdomjudge(pos >= 0 && pos <= n);

	// Creamos nuevo nodo
	Nodo* nuevoNodo          = new Nodo;
	nuevoNodo->elemento      = nuevoValor;
	nuevoNodo->siguienteNodo = nullptr;

	if (pos == 0)
	{
		nuevoNodo->siguienteNodo = lista;
		lista                    = nuevoNodo;
	}
	else if (pos == n)
	{
		getNodo(n - 1)->siguienteNodo = nuevoNodo;
	}
	else if (pos > 0 && pos < n)
	{
		nuevoNodo->siguienteNodo        = getNodo(pos);
		getNodo(pos - 1)->siguienteNodo = nuevoNodo;
	}

	n++;
}

// Elimina un elemento en una posición dada.
// Los elementos que hab�a desde posicion+1 hasta el final de la lista se desplazar�n una posición a la izquierda
// Parámetros:
// - posicion: la posición del elemento que queremos borrar. Si es 0 se elimina el primero y si es n-1 se elimina el �ltimo
// Precondiciones: posicion en [0, n-1] y n>0
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// * done 6
void ListaEnlazada::eliminar(int pos)
{
	assertdomjudge(pos >= 0 && pos < n);

	Nodo* aux;

	if (pos == 0)
	{
		aux   = lista;
		lista = lista->siguienteNodo;
		delete aux;
	}
	else if (pos == n - 1)
	{
		aux                           = getNodo(n - 1);
		getNodo(n - 2)->siguienteNodo = nullptr;
		delete aux;
	}
	else if (pos > 0 && pos < n - 1)
	{
		aux                             = getNodo(pos);
		getNodo(pos - 1)->siguienteNodo = getNodo(pos + 1);
		delete aux;
	}

	n--;
}

// Concatena una lista al final de la lista actual
// Cada uno de los elementos de la lista a concatenar se copian, en orden, al final de la lista actual
// Parámetro: puntero a la lista cuyos elementos queremos concatenar al final de nuestra lista
// Precondici�n: listaAConcatenar!=NULL
// Complejidad temporal: O(capacidad), siendo capacidad = listaAConcatenar.getN()
// Complejidad espacial: O(capacidad), siendo capacidad = listaAConcatenar.getN()
// * todo 9
void ListaEnlazada::concatenar(ListaEnlazada* listaAConcatenar)
{
	if (lista == nullptr)
	{
		lista = listaAConcatenar->lista;
	}
	else
	{
		Nodo* aux = getNodo(n - 1);
        aux->siguienteNodo = listaAConcatenar->lista;
        listaAConcatenar->lista->anteriorNodo = aux;
	}

    n += listaAConcatenar->n;
}

// Busca la posición de un elemento en la ListaContigua
// Parámetro: el elemento a buscar
// Retorno: posición del elemento (de 0 a n-1) si se encuentra, o -1 en caso contrario
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// * done 7
int ListaEnlazada::buscar(Contacto elementoABuscar)
{
	Nodo* miNodo = lista;
	int pos      = 0;

	while (miNodo != nullptr)
	{
		if (miNodo->elemento.telefono == elementoABuscar.telefono)
		{
			return pos;
		}
		miNodo = miNodo->siguienteNodo;
		pos++;
	}

	return -1;
}

void ListaEnlazada::toString()
{
}
