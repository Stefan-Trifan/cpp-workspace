#include "Nodo.h"
#include <iostream>
#include <string>
using namespace std;

class Pila
{
	private:
        // Nombre de la pila.
        string name;

        // Apunta a la cima de la pila
		Nodo *cima;

	public:
        // ______________ Constructor
		Pila(string name);

        // ___________________ Getter
		string nombrePila();

        // _________ Metodos Públicos
		void apilar(int num);
		int desapilar();
		bool estaVacia();
        void toString();
};
