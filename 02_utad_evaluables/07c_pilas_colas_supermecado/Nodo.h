class Nodo
{
	public:
		int valor;
		Nodo* siguiente;

        // Constructor
		Nodo(int v, Nodo* sig = nullptr)
		{
			valor     = v;
			siguiente = sig;
		}
};
