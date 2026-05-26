#include <string>

class Agenda
{
	private:
		/**
         * * [capacidad]
		 * - Num max de contactos
         * que se pueden almacenar en la tabla hash.
         *
         * * [n]
         * - Num actual de elementos de la tabla.
         *
         * * [nombres]
         * - Puntero a un array de string que
         * permitirá almacenar los nombres de los contactos.
         * - Tendrá [capacidad] elementos.
         *
         * * [telefonos]
         * - Puntero a un array de long que
         * permitirá almacenar los [teléfonos] de los contactos.
         * - Este array tendrá [capacidad] elementos.
         *
         * * [vacias]
         * - Puntero a un array de booleanos que permite indicar
         * que posiciones de la tabla hash están vacías.
         * - Este array tendrá [capacidad] elementos.
         * - Si una posición esta vacia se considerará
         * que sus valores asociados son basura.
         *
         * * [borradas]
         * - Puntero a un array de booleanos que permite indicar
         * que posiciones de la tabla hash han sido borradas.
         * Este array tendrá [capacidad] elementos. */

        std::string* nombres;
        long* telefonos;
        bool* borradas;
        bool* vacias;
        int capacidad;
        int n;

	public:
		// _____________________ Constructores
		Agenda(int capacidad);
		~Agenda();

		// _____________________ Getter
		std::string getContacto(long telefono);

		// _____________________ Métodos públicos
		void introducirContacto(long telefono, std::string contacto);
		int obtenerPosicion(long telefono);
        int buscarContacto (long telefono);
        int buscarHueco (long telefono);
        bool isLlena();
		bool existeContacto(long telefono);
		void eliminarContacto(long telefono);
		void imprimir();
		void toString();
};