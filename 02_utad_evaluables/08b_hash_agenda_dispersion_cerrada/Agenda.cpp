#include "Agenda.h"
#include "assertdomjudge.h"
#include <iostream>

using namespace std;

// _________________________________________ Constructores
/** @brief
 * - inicializará el atributo [capacidad] y [n]
 * - reservará [capacidad] elementos para todos los arrays.
 * */
// todo
Agenda::Agenda(int capacidad)
{

}

/** @brief Destructor
 * - Se encargará de liberar la memoria
 * que fue reservada de forma dinámica
 * para almacenar todos los arrays.
 * */
// todo
Agenda::~Agenda()
{

}

// _________________________________________ Getter
/** @brief
 * - Devuelve el nombre del contacto
 * que tiene el teléfono indicado.
 * */
// todo
string Agenda::getContacto(long telefono)
{

}

// _________________________________________ Métodos públicos
/** @brief
 * - Introduce un contacto nuevo en la tabla hash
 * en su posición correspondiente.
 * */
// todo
void Agenda::introducirContacto(long telefono, string contacto)
{

}

/** @brief
 * - Este método implementa la función hash
 * que permite obtener la posición que correspondería
 * al número de teléfono indicado dentro de la tabla hash.
 * - La función hash estará basada
 * en el resto de la división entre la capacidad.
 * */
// todo
int Agenda::obtenerPosicion(long telefono)
{

}

/** @brief
 * - Método que obtiene la posicion real
 * de un contacto en la tabla hash.
 * - Debido a que en esta versión de la agenda
 * se permiten colisiones que se gestionan
 * mediante dispersión cerrada,
 * la posición proporcionada por obtenerPosicion
 * puede no ser la real y será necesario
 * hacer una búsqueda a partir de esta posición.
 *
 * Esta función devolverá:
 *      - la posición donde se encuentra
 *      - (-1) en caso de no encontrarse.
 * */
// todo
int buscarContacto (long telefono)
{

}

/** @brief
 * - Este método busca el hueco adecuado
 * para meter un contacto.
 * - Empieza por la posición proporcionada por obtenerPosicion
 * y sigue buscando secuencialmente (exploración lineal)
 * mientras haya colisión.
 * */
// todo
int buscarHueco (long telefono)
{

}

/** @brief
 * - Indica si la tabla hash ha alcanzado su máxima capacidad.
 * */
// todo
bool isLlena()
{

}

/** @brief
 * - Devuelve si el contacto con el teléfono indicado
 * está almacenado o no en la tabla hash.
 * */
// todo
bool Agenda::existeContacto(long telefono)
{

}

/** @brief
 * - Elimina el contacto con el teléfono indicado de la tabla hash.
 * */
// todo
void Agenda::eliminarContacto(long telefono)
{

}

/** @brief
 * - Esta función permite imprimir toda la tabla hash.
 * - Aunque este método viola el principio de separación
 * entre interfaz y modelo es necesario para el corrector.
 * - Esta función no deberá ser implementada por el alumno.
 * */
// todo
// clang-format off
void Agenda::imprimir()
{
	for (int i = 0; i < capacidad; i++)
	{
        // ! hemos puesto exclamacion en "!vacias[i]"
		cout << "Posicion " << i
          << " | Ocupada: " << !vacias[i]
          << " | Telefono: " << telefonos[i]
          << " | Nombre: " << nombres[i]
          << endl;
	}
}
// clang-format on