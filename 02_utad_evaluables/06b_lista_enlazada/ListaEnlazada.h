#pragma once
#include "Nodo.h"

class ListaEnlazada
{
	private:
		// Almacena el num de elementos almacenados actualmente
		// en la lista contigua.
		int n;

		/**
		 * Puntero a un objeto de tipo struct Nodo definido en Nodo.h
		 *
		 * Esta estructura tiene dos campos:
		 * - elemento de tipo entero donde se guardará los números
		 * - un puntero a Nodo para apuntar al siguiente elemento.
		 *
		 * Cada uno de estos elementos deberá ser reservado de forma dinámica
		 * en sus constructores y ser liberada en su destructor.
		 */
		Nodo *lista;

		// ___________________________________________________
		// __________________________________ Métodos privados

		/**
		 * @brief: Permite obtener el nodo de la lista
         * que se encuentra en la posición [pos] 
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		Nodo *getNodo(int posicion);

	public:
		// ___________________________________________________
		// _____________________________________ Constructores

		/**
		 * @brief: Crea una lista de tamaño 0
		 * Para ello inicializará los atributos [n]
		 * así como el puntero al primer nodo [Lista]
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		ListaEnlazada();

		/**
		 * @brief: Se encarga de liberar la memoria
		 * que fue reservada de forma dinámica para almacenar el vector 
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		~ListaEnlazada();

		// ___________________________________________________
		// __________________________________ Métodos Públicos

		/**
		 * @brief: Devuelve el elemento de la lista contigua
         * que se encuentra en la posición [pos]
         * (Utiliza internamente getNodo)
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		int getValor(int posicion);

		/**
		 * @brief: Modifica el elemento de la lista contigua
         * que se encuentra en la posición [pos] por el valor [val]
         * (Utiliza internamente getNodo)
		 * Este elemento tenía que haberse insertado anteriormente
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		void setValor(int posicion, int nuevoValor);

		/**
		 * @brief: Devuelve el tamaño actual de la lista contigua 
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		int getN();

		/**
		 * @brief: Inserta un nuevo elemento en la posición [pos]
         * de la lista con valor val,
         * cambiando los punteros correspondientes
         * (Utiliza internamente getNodo) 
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		void insertar(int posicion, int nuevoValor);

		/**
		 * @brief: Elimina el elemento que se encuentra en la posición [pos]
		 * cambiando los punteros correspondientes
		 * (Utiliza internamente getNodo)
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		void eliminar(int posicion);

		/**
		 * @brief: Concatena la lista indicada como parámetro
         * al final de nuestra lista
         * (No utiliza internamente getNodo)
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		void concatenar(ListaEnlazada *listaAConcatenar);

		/**
		 * @brief: Busca un elemento en la lista contigua
         * con valor igual a [num] y retorna su posición o
         * [-1] si no se ha podido encontrar
		 * (No utiliza internamente getNodo)
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		int buscar(int elementoABuscar);
};
