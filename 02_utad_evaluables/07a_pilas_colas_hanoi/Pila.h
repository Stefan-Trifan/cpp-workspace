#include "Nodo.h"
#include <iostream>
#include <string>
using namespace std;

class Pila
{
	private:
        // Puntero apuntando a la cima de la pila
		Nodo *cima;

        // Nombre de la pila para el nombre del poste
		string name;

	public:
        // ______________ Constructor
		Pila(string name);

        // ___________________ Getter
		string nombrePila();

        // _________ Metodos Públicos
		void apilar(int num);
		int desapilar();
		bool estaVacia();
};
