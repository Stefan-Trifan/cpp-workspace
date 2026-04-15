#include <string>

using namespace std;

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

        int capacidad;
        int n;
        string* nombres;
        long* telefonos;
        bool* vacias;
        bool* borradas;

	public:
		// _____________________ Constructores
		Agenda(int capacidad);
		~Agenda();

		// _____________________ Getter
		string getContacto(long telefono);

		// _____________________ Métodos públicos
		void introducirContacto(long telefono, string contacto);
		int obtenerPosicion(long telefono);
        int buscarContacto (long telefono);
        int buscarHueco (long telefono);
        bool isLlena();
		bool existeContacto(long telefono);
		void eliminarContacto(long telefono);
		void imprimir();
};