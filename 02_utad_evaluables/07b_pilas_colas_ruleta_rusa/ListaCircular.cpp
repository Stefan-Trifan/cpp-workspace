#include "ListaCircular.h"
using namespace std;
// clang-format off
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}
// clang-format on

// Lista circular doblemente enlazada

// __________________________________________________
// ___________________________________ Método Privado
Nodo* ListaCircular::getNodo(int pos)
{
	assertdomjudge(n > 0);

	Nodo* miNodo = actual;

	int numVueltas = abs(pos) % n;

	if (pos > 0)
	{
		for (int i = 0; i < numVueltas; i++)
		{
			miNodo = miNodo->siguienteNodo;
		}
	}
	else
	{
		for (int i = 0; i < numVueltas; i++)
		{
			miNodo = miNodo->anteriorNodo;
		}
	}

	return miNodo;
}

// __________________________________________________
// ____________________________________ Constructores
ListaCircular::ListaCircular()
{
	n      = 0;
	actual = nullptr;
}

ListaCircular::~ListaCircular()
{
    while(n > 0)
    {
        eliminar(0);
    }
}

// __________________________________________________
// ___________________________________________ Getter
/** @brief
 * Devuelve el string que se encuentra
 * en la posición pos de la lista. */
string ListaCircular::getValor(int pos)
{
	return getNodo(pos)->elemento;
}

int ListaCircular::getN()
{
	return this->n;
}

// __________________________________________________
// ___________________________________________ Setter
void ListaCircular::setValor(int pos, string nuevoValor)
{
	getNodo(pos)->elemento = nuevoValor;
}

// __________________________________________________
// _________________________________ Metodos Públicos
/** @brief
 * Introduce nuevo nodo en la posición pos de la lista. */
void ListaCircular::insertar(int pos, string nuevoValor)
{
	Nodo* nuevoNodo     = new Nodo;
	nuevoNodo->elemento = nuevoValor;

	if (n == 0)
	{
		actual                   = nuevoNodo;
		nuevoNodo->anteriorNodo  = nuevoNodo;
		nuevoNodo->siguienteNodo = nuevoNodo;
	}
	else
	{
		Nodo* nodoPos      = getNodo(pos);
		Nodo* nodoAnterior = getNodo(pos - 1);

		nodoAnterior->siguienteNodo = nuevoNodo;
		nodoPos->anteriorNodo       = nuevoNodo;

		nuevoNodo->anteriorNodo  = nodoAnterior;
		nuevoNodo->siguienteNodo = nodoPos;
	}

	if (pos == 0)
	{
		actual = nuevoNodo;
	}

	n++;
}

/** @brief
 * Elimina el elemento que se encuentra
 * en la posición pos en la lista. */
void ListaCircular::eliminar(int pos)
{
	Nodo* aux;

	if (n == 0)
	{
		return;
	}
	else if (n == 1)
	{
		aux    = actual;
		actual = nullptr;
		delete aux;
	}
	else if (n == 2)
	{
		aux    = getNodo(pos);
		actual = getNodo(pos + 1);
        actual->siguienteNodo = actual;
        actual->anteriorNodo = actual;
		delete aux;
	}
	else
	{
		Nodo* anterior  = getNodo(pos - 1);
		Nodo* posterior = getNodo(pos + 1);
		aux             = getNodo(pos);

		anterior->siguienteNodo = posterior;
		posterior->anteriorNodo = anterior;

        actual = posterior;

		delete aux;
	}

	n--;
}

/** @brief
 * Gira todos los elementos de la lista
 * hacia la izquierda o la derecha
 * como indique su valor.
 * - Si el valor es positivo todos los elementos
 * de la lista se desplazarán tantas posiciones
 * a la derecha como indique el valor.
 * - Si el valor es negativo el desplazamiento
 * será hacia la izquierda. */
void ListaCircular::girar(int pos)
{
	actual = getNodo(pos);
}

// debug
void ListaCircular::toString()
{
	for (int i = 0; i < n; i++)
	{
		if (getNodo(i) == actual)
		{
            cout << '[' << getValor(i) << ']' << ' ';
		}
		else
		{
			cout << getValor(i) << ' ';
		}
	}
	cout << endl;
}
