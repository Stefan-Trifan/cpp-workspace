#include "ListaCircular.h"
using namespace std;
// clang-format off
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}
// clang-format on

// Lista circular doblemente enlazada

// __________________________________________________
// ___________________________________ Método Privado
// todo doing
Nodo* ListaCircular::getNodo(int pos)
{
	Nodo* miNodo;
	return miNodo;
}

// __________________________________________________
// ____________________________________ Constructores
ListaCircular::ListaCircular()
{
	n      = 0;
	actual = nullptr;
}

// todo
ListaCircular::~ListaCircular()
{
}

// __________________________________________________
// ___________________________________________ Getter
/** @brief
 * Devuelve el string que se encuentra
 * en la posición pos de la lista. */
// todo test
string ListaCircular::getValor(int pos)
{
	assertdomjudge(pos >= 0 && pos < n);

	return getNodo(pos)->elemento;
}

int ListaCircular::getN()
{
	return this->n;
}

// __________________________________________________
// ___________________________________________ Setter
// todo test
void ListaCircular::setValor(int pos, string nuevoValor)
{
	assertdomjudge(pos >= 0 && pos < n);

	getNodo(pos)->elemento = nuevoValor;
}

// __________________________________________________
// _________________________________ Metodos Públicos
/** @brief
 * Introduce nuevo nodo en la posición pos de la lista. */
// todo doing
void ListaCircular::insertar(int pos, string nuevoValor)
{
	assertdomjudge(pos >= 0 && pos <= n);

	Nodo* nuevoNodo          = new Nodo;
	nuevoNodo->elemento      = nuevoValor;
	nuevoNodo->anteriorNodo  = nuevoNodo;
	nuevoNodo->siguienteNodo = nuevoNodo;

	if (n == 0)
	{
		actual = nuevoNodo;
	}

	n++;
}

/** @brief
 * Elimina el elemento que se encuentra
 * en la posición pos en la lista. */
// todo
void ListaCircular::eliminar(int pos)
{
	assertdomjudge(pos >= 0 && pos < n);
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
// todo
void ListaCircular::girar(int p)
{
}

// todo doing
void ListaCircular::toString()
{
	cout << actual->elemento << endl;
}
