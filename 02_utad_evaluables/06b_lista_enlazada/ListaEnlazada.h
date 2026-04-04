#pragma once
#include "Nodo.h"

class ListaEnlazada
{
	private:
		// Num de elementos almacenados
		int n;

		/**
		 * Puntero a un objeto de tipo struct Nodo definido en Nodo.h
		 *
		 * Esta estructura tiene dos campos:
		 * - elemento de tipo entero donde se guardará los números
		 * - un puntero a Nodo para apuntar al siguiente elemento.
		 *
		 * Cada uno de estos elementos deberá ser reservado
         * de forma dinámica en sus constructores
         * y ser liberada en su destructor.
		 */
		Nodo* lista;

	public:
		// _____________________________________ Constructores
		ListaEnlazada();
		~ListaEnlazada();

		// ____________________________________________ Getter
		int getN();
		int getValor(int pos);

    // private:
		Nodo* getNodo(int pos);

    public:
		// ____________________________________________ Setter
		void setValor(int pos, int nuevoValor);

		// __________________________________ Métodos Públicos
		void insertar(int pos, int nuevoValor);
		void eliminar(int pos);
		void concatenar(ListaEnlazada *listaAConcatenar);
		int buscar(int elementoABuscar);
		void toString(); // debug
};


