#include "Agenda.h"
#include "assertdomjudge.h"
#include <string>
#include <iostream>

// todo #include "ListaEnlazada.h"

// Para el método imprimir de la tabla hash
// #include "impresionListasEnlazadas.h"

using namespace std;

/** @brief
 * - Inicializará el atributo [capacidad]
 * - Reservará [capacidad] listas para la tabla hash. 
 * 
 * Espacial:
 * Temporal:
 * */
Agenda::Agenda(int capacidad)
{
}

/** @brief
 * - Destructor.
 * - Se encargará de liberar la memoria
 * que fue reservada de forma dinámica
 * para almacenar toda la tabla hash. 
 * 
 * Espacial:
 * Temporal:
 * */
Agenda::~Agenda()
{
}

/** @brief
 * - Este método implementa la función hash que permite
 * obtener en que posición del vector de listas enlazadas
 * que corresponde al número de teléfono indicado
 * dentro de la tabla hash.
 * - La función hash estará basada en el resto de la división entre la capacidad. 
 * 
 * Espacial:
 * Temporal:
 * */
int Agenda::obtenerPosicion(long telefono)
{
	return 0;
}

/** @brief
 * - Devuelve si el contacto con el teléfono indicado
 * está almacenado o no en la tabla hash. 
 * 
 * Espacial:
 * Temporal:
 * */
bool Agenda::existeContacto(long telefono)
{
	return false;
}

/** @brief
 * - Devuelve el nombre del contacto
 * que tiene el teléfono indicado. 
 * 
 * Espacial:
 * Temporal:
 * */
string Agenda::getContacto(long telefono)
{
	return "";
}

/** @brief
 * - Introduce un contacto nuevo en la tabla hash en la
 * lista que se encuentra en la posición correspondiente. 
 * 
 * Espacial:
 * Temporal:
 * */
void Agenda::introducirContacto(long telefono, string contacto)
{
}

/** @brief
 * - Elimina el contacto con el teléfono
 * indicado de la tabla hash. 
 * 
 * Espacial:
 * Temporal:
 * */
void Agenda::eliminarContacto(long telefono)
{
}

/** @brief
 * - Esta función permite imprimir toda la tabla hash.
 * - Aunque este método viola el principio de separación
 * entre interfaz y modelo es necesario
 * para el corrector automático. Esta función no deberá
 * ser implementada por el alumno. 
 * 
 * Espacial:
 * Temporal:
 * */
void Agenda::imprimir()
{
	for (int i = 0; i < capacidad; i++)
	{
		cout << "Posicion " << i << ": ";
        // todo
		// imprimirListaEnlazada(&tabla[i]);
	}
}