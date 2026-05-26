// Steve
#include "ListaEnlazada.h"

// _____________________ Constructores
// Constructor. Crea una lista de tama�o 0
// Complejidad temporal y espacial: O(1)
// todo 
ListaEnlazada::ListaEnlazada()
{
    
}

// Destructor. Libera memoria
// Complejidad temporal: O(n)
// todo 
ListaEnlazada::~ListaEnlazada()
{
    
}

// _____________________ Getter
// Devuelve un elemento de la lista en determinada posici�n
// Par�metro: la posici�n del elemento
// Retorno: una copia del elemento encontrado en esa posici�n
// Precondiciones: posicion en [0, n-1] y n>0
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// todo 
Contacto ListaEnlazada::getValor(int posicion)
{
    Contacto borrar;
    return borrar;
}

// Devuelve el tama�o actual de la lista
// Complejidad temporal y espacial: O(1)
// todo 
int ListaEnlazada::getN()
{
    return 0;
}

// Obtiene un nodo de la lista
// Par�metro: la posici�n del nodo
// Retorno: un puntero al nodo que est� en dicha posici�n
// Precondiciones:
// - la posici�n debe estar en el intervalo [0, n-1]
// - La lista no esta vacia (n>0)
// Complejidad temporal: O(n). Como m�ximo hace n/2 iteraciones porque decide si ir hacia delante o hacia atr�s
// Complejidad espacial: O(1)
// todo
Nodo* getNodo(int posicion)
{
    return nullptr;
}

// _____________________ Setter
// Modifica un elemento de la lista
// Par�metros:
// - posicion: la posici�n del elemento que queremos modificar
// - nuevoValor: el nuevo valor del elemento
// Precondiciones: posicion en [0, n-1] y n>0
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// todo 
void ListaEnlazada::setValor(int posicion, Contacto nuevoValor)
{
    
}

// _____________________ Métodos públicos
// Inserta un nuevo elemento en una posici�n de la lista
// Los elementos que hab�a desde la posici�n hasta el final de la lista se desplazar�n una posici�n a la derecha
// Par�metros:
// - posici�n: la posici�n en donde queremos poner el nuevo elemento. Si es 0 se inserta al principio, si es n se inserta al final
// - nuevoValor: el nuevo elemento que queremos poner
// Precondiciones: posicion en [0, n]
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// todo 
void ListaEnlazada::insertar(int posicion, Contacto nuevoValor)
{
    
}

// Elimina un elemento en una posici�n dada.
// Los elementos que hab�a desde posicion+1 hasta el final de la lista se desplazar�n una posici�n a la izquierda
// Par�metros:
// - posicion: la posici�n del elemento que queremos borrar. Si es 0 se elimina el primero y si es n-1 se elimina el �ltimo
// Precondiciones: posicion en [0, n-1] y n>0
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// todo 
void ListaEnlazada::eliminar(int posicion)
{
    
}

// Concatena una lista al final de la lista actual
// Cada uno de los elementos de la lista a concatenar se copian, en orden, al final de la lista actual
// Par�metro: puntero a la lista cuyos elementos queremos concatenar al final de nuestra lista
// Precondici�n: listaAConcatenar!=NULL
// Complejidad temporal: O(capacidad), siendo capacidad = listaAConcatenar.getN()
// Complejidad espacial: O(capacidad), siendo capacidad = listaAConcatenar.getN()
// todo 
void ListaEnlazada::concatenar(ListaEnlazada* listaAConcatenar)
{
    
}

// Busca la posici�n de un elemento en la ListaContigua
// Par�metro: el elemento a buscar
// Retorno: posici�n del elemento (de 0 a n-1) si se encuentra, o -1 en caso contrario
// Complejidad temporal: O(n)
// Complejidad espacial: O(1)
// todo 
int ListaEnlazada::buscar(Contacto elementoABuscar)
{
    return 0;
}


