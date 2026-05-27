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
	// todo debug: al final CAMBIAR A PRIVATE
	public:
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
		Contacto getValor(int pos);
		int getN();
		Nodo* getNodo(int pos);

		// _____________________ Setter
		void setValor(int pos, Contacto nuevoValor);

		// _____________________ Métodos públicos
		void insertar(int pos, Contacto nuevoValor);
		void eliminar(int pos);
		void concatenar(ListaEnlazada* listaAConcatenar);
		int buscar(Contacto elementoABuscar);
		void toString(); // debug
};
