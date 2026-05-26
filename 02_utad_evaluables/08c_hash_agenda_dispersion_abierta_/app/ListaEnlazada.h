// Blackboard

#pragma once
#include "Nodo.h"

// Clase que representa a una lista enlazada simple.
// No tiene restriccion de tamaño
// Se trata de una lista enlazada de nodos, en 
// donde cada nodo tiene un elemento (un int), y un 
// puntero al siguiente nodo
class ListaEnlazada
{
	private:
		// Puntero que apuntara al primer nodo de la lista, 
		// o sera NULL si la lista esta vacia
		Nodo* lista;

		// Numero actual de elementos que tiene la lista
		// Precondicion: n>=0
		int n;

		// Posicion y puntero del nodo que devolvio la ultima 
		// llamada a getNodo()
		int posicionUltimoNodoAccedido;
		Nodo* punteroUltimoNodoAccedido;

	public:
		// _____________________ Constructores
		ListaEnlazada();
		~ListaEnlazada();

		// _____________________ Getter
		Contacto getValor(int posicion);
		int getN();
		Nodo* getNodo(int posicion);

		// _____________________ Setter
		void setValor(int posicion, Contacto nuevoValor);

		// _____________________ Métodos públicos
		void insertar(int posicion, Contacto nuevoValor);
		void eliminar(int posicion);
		void concatenar(ListaEnlazada* listaAConcatenar);
		int buscar(Contacto elementoABuscar);
};
