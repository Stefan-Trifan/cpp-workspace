// Steve

#include <string>
#include "ListaEnlazada.h"

class Agenda
{
	private:
        /**
         * * capacidad
         * Indica la capacidad de la tabla hash
         *
         * * n
         * Número actual de elementos de la tabla
         *
         * * tabla
         * Es un vector de capacidad listas enlazadas.
         * Cada lista enlazada podrá almacenar nodos
         * de la clase Nodo que contienen un elemento
         * de tipo Contacto que almacena el nombre
         * y el teléfono. Las clases ListaEnlazada,
         * Nodo y Contacto se pueden encontrar en los
         * ficheros proporcionados en Blackboard así
         * como una función que permite imprimir listas
         * enlazadas.
         * */
        int capacidad;
        int n;
        ListaEnlazada* tabla;

	public:
		// _____________________ Constructores
        Agenda(int capacidad);
        ~Agenda();

		// _____________________ Getter
        string getContacto(long telefono);

		// _____________________ Métodos
        bool existeContacto(long telefono);
        void introducirContacto(long telefono, string nombre);
        void eliminarContacto(long telefono);
        void imprimir();

    private:
        int obtenerPosicion (long telefono);
};