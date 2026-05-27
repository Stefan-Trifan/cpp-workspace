#include <stdlib.h>
class Nodo
{
	public:
		int valor;
		Nodo *siguiente;

        // ______________ Constructor
		Nodo(int v, Nodo *sig = NULL)
		{
			valor     = v;
			siguiente = sig;
		}
};
