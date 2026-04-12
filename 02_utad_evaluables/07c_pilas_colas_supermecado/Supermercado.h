#include "Cola.h"

class Supermercado
{
	private:
        // Array de punteros a objetos de tipo Cola
        // que representan cada una de las cajas..
		Cola* cajas;

        // Num de cajas que hay en el supermercado
		int n_cajas;

	public:
        // Constructor
		Supermercado(int n);

        // Métodos Públicos
		void nuevoUsuario(int n, int id);
		void cerrarCaja(int n);
		int atenderUsuario(int n);
		bool cajaVacia(int n);
        void toString();
};
