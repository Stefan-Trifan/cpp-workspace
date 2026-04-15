#include "Agenda.h"
#include "assertdomjudge.h"
#include <iostream>

using namespace std;

// _________________________________________ Constructores
/** @brief
 * Inicializará el atributo capacidad y reservará capacidad elementos para todos los arrays
 * */
Agenda::Agenda(int capacidad)
{

}

/** @brief
 * Destructor. Se encargará de liberar la memoria que fue reservada de forma dinámica para almacenar todos los arrays.
 * */
Agenda::~Agenda()
{

}

// _________________________________________ Getter
/** @brief
 * Devuelve el nombre del contacto que tiene el teléfono indicado.
 * */
string Agenda::getContacto(long telefono)
{

}

// _________________________________________ Métodos públicos
/** @brief
 * Este método implementa la función hash que permite obtener la posición que corresponde al número de teléfono indicado dentro de la tabla hash. La función hash estará basada en el resto de la división entre la capacidad.
 * */
int Agenda::obtenerPosicion(long telefono)
{

}

/** @brief
 * Devuelve si el contacto con el teléfono indicado está almacenado o no en la tabla hash.
 * */
bool Agenda::existeContacto(long telefono)
{

}

/** @brief
 * Introduce un contacto nuevo en la tabla hash en su posición correspondiente.
 * */
void Agenda::introducirContacto(long telefono, string contacto)
{

}

/** @brief
 * Elimina el contacto con el teléfono indicado de la tabla hash.
 * */
void Agenda::eliminarContacto(long telefono)
{

}

/** @brief
 * Esta función permite imprimir toda la tabla hash. Aunque este método viola el principio de separación entre interfaz y modelo es necesario para el corrector automático. Esta función no deberá ser implementada por el alumno.
 * */
// clang-format off
void Agenda::imprimir()
{
	for (int i = 0; i < capacidad; i++)
	{
		cout << "Posicion " << i
          << " | Ocupada: " << ocupados[i]
          << " | Telefono: " << telefonos[i]
          << " | Nombre: " << nombres[i]
          << endl;
	}
}
// clang-format on