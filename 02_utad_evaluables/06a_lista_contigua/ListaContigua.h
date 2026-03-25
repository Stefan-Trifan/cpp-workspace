#pragma once

class ListaContigua
{
	private:
		// ___________________________________________________
		// _________________________________________ Atributos

        // Num de elementos almacenados actualmente 
        // en la lista contigua
		int n;

        // Num max de elementos que se pueden almacenar en la lista
		int capacidad;

        // Num de posiciones que incrementa/decrementa
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
         * @brief Inicializará los atributos n, capacidad e incremento
         * así como el puntero al vector de enteros */
		ListaContigua(int incremento);

        /**
         * @brief Se encargará de liberar la memoria que fue reservada
         * de forma dinámica para almacenar el vector */
        ~ListaContigua();

		// ___________________________________________________
		// __________________________________ Métodos Públicos

        /**
         * @brief Devuelve el elemento de la lista contigua que
         * se encuentra en la posición [pos] */
		int getValor(int posicion);

        /**
         * @brief Modifica el elemento de la lista contigua que
         * se encuentra en la posición [pos] por el valor [val]
         *
         * OJO: Este elemento tenía que haberse insertado anteriormente */
		void setValor(int posicion, int nuevoValor);

        /**
         * @brief Devuelve el tamaño actual de la lista contigua */
		int getN();

        /**
         * @brief Devuelve la capacidad de la lista contigua
         * (Máximo número de elementos que puede albergar) */
		int getCapacidad();

        /**
         * @brief Inserta un nuevo elemento en la posición pos
         * de la lista con valor val, dejando primero un hueco
         * para introducirlo (desplazando los elementos
         * a la derecha con memmove) En el caso de que al insertar
         * se alcance la máxima capacidad del vector deberá
         * incrementarse esta en la cantidad incremento usando realloc */
		void insertar(int posicion, int nuevoValor);

        /**
         * @brief Elimina el elemento que se encuentra en la posición pos
         * y por tanto deberá desplazar a la izquierda todos los elementos
         * que se encuentren a su derecha mediante memmove
         *
         * Si al eliminar este elemento el número de elementos del vector
         * es menor o igual que [capacidad − 2 × incremento],
         * se deberá reducir la capacidad en incremento elementos
         * [capacidad − incremento] */
		void eliminar(int posicion);

        /**
         * @brief Concatena la lista indicada como parámetro
         * al final de nuestra lista (almacenada en vector) */
		void concatenar(ListaContigua *listaAConcatenar);

        /**
         * @brief Busca un elemento en la lista contigua
         * con valor igual a [num]
         * Retorna su posición o -1 si no se ha podido encontrar */
		int buscar(int elementoABuscar);

        // todo borrar
        void borrarEsteMetodo();
};