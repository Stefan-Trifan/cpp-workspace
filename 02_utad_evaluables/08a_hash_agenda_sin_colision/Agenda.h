#include <string>

class Agenda
{
	private:
		/**
         * Num max de contactos que se pueden almacenar
         * en la tabla hash. */
		int capacidad;

		/**
         * Puntero a un array de string
         * que permitirá almacenar los nombres de los contactos.
         * Este array tendrá capacidad elementos. */
		string* nombres;

		/**
         * Puntero a un array de long
         * que permitirá almacenar los teléfonos de los contactos.
         * Este array tendrá capacidad elementos. */
        long* telefonos;

		/**
         * Puntero a un array de booleanos
         * que permite indicar que posiciones
         * de la tabla hash están ocupadas.
         * Este array tendrá capacidad elementos.
         * Si una posición esta vacia se considerará que sus valores asociados son basura. */
        bool* ocupados;

	public:
		Agenda(int capacidad);
        ~Agenda();
		string getContacto(long telefono);
		int obtenerPosicion(long telefono);
		bool existeContacto(long telefono);
		void introducirContacto(long telefono, string contacto);
		void eliminarContacto(long telefono);
		void imprimir();
};