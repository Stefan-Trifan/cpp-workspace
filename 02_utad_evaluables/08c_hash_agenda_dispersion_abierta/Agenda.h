class Agenda
{
	private:
		/**
		 * * [capacidad]
		 * - Indica la capacidad de la tabla hash.
		 *
		 * * [n]
		 * - Num actual de elementos de la tabla.
		 *
		 * * [tabla]
		 * - Es un vector de capacidad listas enlazadas.
         * - Cada lista enlazada podrá almacenar nodos de la clase [Nodo]
         * que contienen un elemento de tipo [Contacto]
         * que almacena el nombre y el teléfono.
         * - Las clases [ListaEnlazada], [Nodo] y [Contacto]
         * se pueden encontrar en los ficherosp roporcionados en BB
         * así como una función que permite imprimir listas enlazadas. */

		int capacidad;
		int n;
		ListaEnlazada* tabla;

	public:
		Agenda(int capacidad);
		~Agenda();
		int obtenerPosicion(long telefono);
		bool existeContacto(long telefono);
		string getContacto(long telefono);
		void introducirContacto(long telefono, string contacto);
		void eliminarContacto(long telefono);
		void imprimir();
}