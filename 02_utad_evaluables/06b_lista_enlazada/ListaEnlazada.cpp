#include "ListaEnlazada.h"
#include "assertdomjudge.h"
#include <iostream>

using namespace std;

// ___________________________________________________
// _____________________________________ Constructores

/**
 * @brief: Crea una lista de tamaño 0
 * Para ello inicializará los atributos [n]
 * así como el puntero al primer nodo [Lista]
 * */
ListaEnlazada::ListaEnlazada()
{
	n     = 0;
	lista = nullptr;
}

/**
 * @brief: Se encarga de liberar la memoria
 * que fue reservada de forma dinámica para almacenar el vector
 * */
// todo 8
ListaEnlazada::~ListaEnlazada()
{
    // Recorremos la lista desde el primer nodo, de uno en uno
    // Guardamos en variable auxiliar el siguiente nodo
    // Eliminamos nodo actual con delete
    // Avanzamos al siguiente nodo
}

// ___________________________________________________
// ____________________________________________ Getter
/**
 * @brief: Devuelve el tamaño actual de la lista contigua
 * */
int ListaEnlazada::getN()
{
    return this->n;
}

/**
 * @brief: Devuelve el elemento de la lista contigua
 * que se encuentra en la posición [pos]
 * (Utiliza internamente getNodo)
 * */
// todo 2
int ListaEnlazada::getValor(int pos)
{
    // Precondiciones
    assertdomjudge(pos >= 0 && pos < n)

	// Buscamos el nodo con getNodo(pos)
	// Devolvemos su valor
	return -1;
}

/**
 * @brief: Permite obtener el nodo de la lista
 * que se encuentra en la posición [pos]
 * */
Nodo *ListaEnlazada::getNodo(int pos)
{
    // Precondiciones
    assertdomjudge(pos >= 0 && pos < n);

    Nodo *miNodo = lista;

    // Empezamos desde lista (primer nodo)
    // Recorremos los nodos de uno en uno
    // Cuando alcancemos el nodo en la
    // posicion [pos], lo devolvemos
    for(int i = 0; i < pos; i++)
    {
        miNodo = miNodo->siguienteNodo;
    }
	return miNodo;
}

// ___________________________________________________
// ____________________________________________ Setter

/**
 * @brief: Modifica el elemento de la lista
 * que se encuentra en la posición [pos] por el valor [val]
 * (Utiliza internamente getNodo)
 * Este elemento tenía que haberse insertado anteriormente
 * */
// todo 3
void ListaEnlazada::setValor(int pos, int nuevoValor)
{
    // Precondiciones
    assertdomjudge(pos >= 0 && pos < n)

	// Obtenemos el nodo con getNodo(pos)
	// Reemplazamos su elemento por [nuevoValor]
}

// ___________________________________________________
// __________________________________ Métodos Públicos

/**
 * @brief: Inserta un nuevo elemento en la posición [pos]
 * de la lista con valor val,
 * cambiando los punteros correspondientes
 * (Utiliza internamente getNodo)
 * */
// todo 4
void ListaEnlazada::insertar(int pos, int nuevoValor)
{
    // Precondiciones
    assertdomjudge(pos >= 0 && pos <= n)

	// Creamos nuevo_nodo
	// nuevo_nodo->elemento = nuevoValor
	// nuevo_nodo->siguienteNodo = nullptr
    Nodo* nuevoNodo = new Nodo;
    nuevoNodo->elemento = nuevoValor;
    nuevoNodo->siguienteNodo = nullptr;

	// Buscamos el nodo deseado:

    // * CASO 1: Primer nodo
    // Obtenemos primer nodo (lista)
    // Apuntamos nuevo_nodo a primer nodo
    // Apuntamos lista a nuevo_nodo
    if(pos == 0)
    {
        Nodo* aux;
        lista = nuevoNodo;
    }


    // * CASO 2: Ultima posicion
    // Obtenemos ultimo nodo con getNodo(n - 1)
    // Apuntamos el ultimo nodo a nuevo_nodo
    // nuevo_nodo->nullptr

    // * CASO 3: Nodo intermedio
    // ...->nodo(pos-1)->nodo(pos)->...
    //                   nuevo_nodo
    // Obtenemos el nodo con getNodo(pos)
    // Obtenemos el nodo(-1) con getNodo(pos - 1)

    // nuevo_nodo->nodo(pos)
    // nodo(pos-1)->nuevo_nodo

    // resultado:
    // nodo(pos-1)->nuevo_nodo->nodo(pos)->...

    n++;
}

/**
 * @brief: Elimina el elemento que se encuentra en la posición [pos]
 * cambiando los punteros correspondientes
 * (Utiliza internamente getNodo)
 * */
// todo 5
void ListaEnlazada::eliminar(int pos)
{
    // Precondiciones
    assertdomjudge(pos >= 0 && pos < n)

	// Buscamos el nodo deseado:

    // * CASO 1: Eliminar Primer nodo
    // Obtenemos primer nodo con getNodo(0)
    // Apuntamos con variable auxiliar Primer nodo
    // Apuntamos lista a segundo nodo
    // Delete donde apunta la variable auxiliar

    // * CASO 2: Eliminar Ultima posicion
    // Obtenemos ultimo nodo con getNodo(n - 1)
    // Auxiliar apunta a ultimo nodo
    // Penultima posicion apunta a nullptr
    // Delete donde apunta la variable auxiliar

    // * CASO 3: Eliminar Nodo intermedio
    // Obtenemos nodo(pos) con getNodo(pos)
    // Obtenemos nodo(-1) con getNodo(pos - 1)
    // Variable auxiliar apunta a nodo(0)
    // nodo(-1)->nodo(+1)
    // Delete donde apunta la variable auxiliar

}

/**
 * @brief: Concatena la lista indicada como parámetro
 * al final de nuestra lista
 * (No utiliza internamente getNodo)
 * */
// todo 7
void ListaEnlazada::concatenar(ListaEnlazada *listaAConcatenar)
{
	// Recorremos todos los nodos hasta encontrar el ultimo
	// Apuntamos el ultimo nodo a listaAConcatenar->lista
    // Actualizamos n sumando los elementos concatenados
}

/**
 * @brief: Busca un elemento en la lista contigua
 * con valor igual a [num]
 * - retorna su posición
 * - [-1] si no se ha podido encontrar
 * (No utiliza internamente getNodo)
 * */
// todo 6
int ListaEnlazada::buscar(int elementoABuscar)
{
	// Recorremos los nodos de uno en uno, guardando la posicion actual
	// Comparamos cada nodo->elemento con [elementoABuscar]
	// Si coincide, devolvemos la posicion.

	// Si llegamos al final de la lista y no hay coincidencias
	// , devovlemos -1
	return -1;
}

void ListaEnlazada::toString()
{
	// Recorremos cada nodo de uno en uno, empezando desde lista
    // Recorremos hasta nullptr
	// Por cada nodo imprimimos su posicion y su elemento

    Nodo *miNodo = lista;
    int posicion = 0;

    while(miNodo != nullptr)
    {
        cout << miNodo->elemento << ' ';
        miNodo = miNodo->siguienteNodo;
        posicion++;
    }
    cout << "\n\n";
    for(int i = 0; i < posicion; i++)
    {
        cout << i << ' ';
    }
    cout << '\n';
}