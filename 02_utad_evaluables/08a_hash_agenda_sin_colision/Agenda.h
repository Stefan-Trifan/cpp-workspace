#include <string>

using namespace std;

class Agenda
{
	private:
		/** capacidad
		 * Num max de contactos que se pueden almacenar
		 * en la tabla hash.
        * */
        /** nombres
         * Puntero a un array de string
         * que permitirá almacenar los nombres de los contactos.
         * Este array tendrá capacidad elementos.
         * */
        /** telefonos
         * Puntero a un array de long
         * que permitirá almacenar los teléfonos de los contactos.
         * Este array tendrá capacidad elementos.
         * */
        /** ocupados
         * Puntero a un array de booleanos
         * que permite indicar que posiciones
         * de la tabla hash están ocupadas.
         * Este array tendrá capacidad elementos.
         * Si una posición esta vacia se considerará
         * que sus valores asociados son basura.
         *  */

        int capacidad;
        string* nombres;
        long* telefonos;
        bool* ocupados;

	public:
		// _____________________ Constructores
		Agenda(int capacidad);
		~Agenda();

		// _____________________ Getter
		string getContacto(long telefono);

		// _____________________ Métodos públicos
		int obtenerPosicion(long telefono);
		bool existeContacto(long telefono);
		void introducirContacto(long telefono, string contacto);
		void eliminarContacto(long telefono);
		void imprimir();
};