#pragma once

class ListaContigua
{
	private:
		// ___________________________________________________
		// _________________________________________ Atributos

		// Num de elementos almacenados actualmente
		// en la lista contigua
		int n;

		// Max elementos que se pueden almacenar en la lista
		int capacidad;

		// Num de poses que incrementa/decrementa
		// la capacidad de la ListaContigua cuando es necesario
		int incremento;

		// Puntero a un array de enteros.
		// Permitirá almacenar [capacidad] elementos de tipo int.
		// Este array deberá ser reservado de forma dinámica
		// en sus constructores y ser liberada en su destructor
		int *vector;

	public:
		// ___________________________________________________
		// _____________________________________ Constructores

		/**
		 * @brief Inicializa los atributos
		 * [n], [capacidad] e [incremento]
		 * así como el [puntero] al vector de enteros
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		ListaContigua(int incremento);

		/**
		 * @brief Se encarga de liberar la memoria que fue reservada
		 * de forma dinámica para almacenar el vector
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		~ListaContigua();

		// ___________________________________________________
		// ____________________________________________ Getter

		/**
		 * @brief Devuelve el tamaño actual de la lista contigua
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		int getN();

		/**
		 * @brief Devuelve el elemento de la lista contigua que
		 * se encuentra en la posición [pos]
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		int getValor(int pos);

		/**
		 * @brief Devuelve la capacidad de la lista contigua
		 * (Máximo número de elementos que puede albergar)
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		int getCapacidad();

		// ___________________________________________________
		// ____________________________________________ Setter

		/**
		 * @brief Modifica el elemento de la lista contigua que
		 * se encuentra en la posición [pos] por el valor [val]
		 *
		 * Este elemento tenía que haberse insertado anteriormente
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		void setValor(int pos, int nuevoValor);

		// ___________________________________________________
		// __________________________________ Métodos Públicos

		/**
		 * @brief Inserta un nuevo elemento en la posición pos
		 * de la lista con valor val, dejando primero un hueco
		 * para introducirlo (desplazando los elementos
		 * a la derecha con memmove)
		 *
		 * En el caso de que al insertar se alcance
		 * la máxima capacidad del vector deberá
		 * incrementarse esta en la
		 * cantidad incremento usando realloc
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		void insertar(int pos, int nuevoValor);

		/**
		 * @brief Elimina el elemento que se encuentra en la posición pos
		 * y por tanto deberá desplazar a la izquierda todos los elementos
		 * que se encuentren a su derecha mediante memmove
		 *
		 * Si al eliminar este elemento el número de elementos del vector
		 * es menor o igual que [capacidad − 2 × incremento],
		 * se deberá reducir la capacidad en incremento elementos * [capacidad − incremento]
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		void eliminar(int pos);

		/**
		 * @brief Concatena la lista indicada como parámetro
		 * al final de nuestra lista (almacenada en vector)
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		void concatenar(ListaContigua *listaAConcatenar);

		/**
		 * @brief Busca un elemento en la lista contigua
		 * con valor igual a [num]
		 * Retorna su posición o -1 si no se ha podido encontrar
		 *
		 * Complejidad
		 * - Temporal: O()
		 * - Espacial: O() */
		int buscar(int elementoABuscar);

        // debug / testing
        void toString();
};