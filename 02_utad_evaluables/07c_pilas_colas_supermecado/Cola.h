#include "Nodo.h"

class Cola
{
	private:
        // Apunta al primer nodo introducido en la Cola.
		Nodo* principio;

        // Apunta al último nodo de la Cola.
        // No es obligatorio
        // pero nos evita recorrernos toda la cola
        // para encontrar el último elemento
		Nodo* final;

	public:
        // Constructor
		Cola();

        // Métodos Públicos
		void encolar(int num);
		int desencolar();
		bool estaVacia();
};
