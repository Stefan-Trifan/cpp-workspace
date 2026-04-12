class Nodo
{
	public:
		int valor;
		Nodo* siguiente;

		Nodo(int v, Nodo* sig = nullptr)
		{
			valor     = v;
			siguiente = sig;
		}
};
