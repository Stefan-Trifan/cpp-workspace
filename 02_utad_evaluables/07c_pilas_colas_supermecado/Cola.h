#include "Nodo.h"

class Cola
{
	private:
		/** principio / final
		 * principio:
		 * - Apunta al primer nodo introducido en la Cola.
		 *
		 * final:
		 * - Apunta al último nodo de la Cola.
		 * - No es obligatorio pero nos evita recorrernos
         * toda la cola para encontrar el último elemento */

		Nodo* principio;
		Nodo* final;

	public:
		// Constructor
		Cola();

		// Métodos Públicos
		void encolar(int num);
		int desencolar();
		bool estaVacia();

        // Debug
        void toString();
};
