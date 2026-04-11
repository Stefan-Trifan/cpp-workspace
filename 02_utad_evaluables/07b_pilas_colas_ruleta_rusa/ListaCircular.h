#include "Nodo.h"
#include <cstdlib>

class ListaCircular
{
    // todo borrar public despues
	public:
		// _____________________________
		// Atributos
		int n;
		Nodo* actual;

		// _____________________________
		// Método privado
		Nodo* getNodo(int pos);

	public:
		// _____________________________
		// Constructores
		ListaCircular();
		~ListaCircular();

		// _____________________________
		// Getter
		string getValor(int pos);
		int getN();

		// _____________________________
		// Setter
		void setValor(int pos, string nuevoValor);

		// _____________________________
		// Metodos Públicos
		void insertar(int pos, string nuevoValor);
		void eliminar(int pos);
		void girar(int pos);

        // debug
		void toString();
};
