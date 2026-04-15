#include "Agenda.h"
#include "assertdomjudge.h"
#include <iostream>

using namespace std;

// _________________________________________ Constructores
/** @brief
 * - inicializará el atributo capacidad
 * - reservará capacidad elementos para todos los arrays
 * */
Agenda::Agenda(int capacidad)
{
	this->capacidad = capacidad;
	this->nombres   = new string[capacidad];
	this->telefonos = new long[capacidad];
	this->ocupados  = new bool[capacidad];

	for (int i = 0; i < capacidad; i++)
	{
		ocupados[i] = false;
	}
}

/** @brief Destructor
 * Se encargará de liberar la memoria
 * que fue reservada de forma dinámica
 * para almacenar todos los arrays.
 * */
Agenda::~Agenda()
{
	delete[] nombres;
	delete[] telefonos;
	delete[] ocupados;
}

// _________________________________________ Getter
/** @brief
 * Devuelve el nombre del contacto
 * que tiene el teléfono indicado.
 * */
string Agenda::getContacto(long telefono)
{
	int hash = obtenerPosicion(telefono);

	assertdomjudge(ocupados[hash] == true && telefonos[hash] == telefono);

	return nombres[hash];
}

// _________________________________________ Métodos públicos
/** @brief
 * Introduce un contacto nuevo en la tabla hash
 * en su posición correspondiente.
 * */
void Agenda::introducirContacto(long telefono, string contacto)
{
    int hash = obtenerPosicion(telefono);

    assertdomjudge(ocupados[hash] == false);

	telefonos[hash] = telefono;
	nombres[hash]   = contacto;
	ocupados[hash]  = true;
}

/** @brief
 * Este método implementa la función hash
 * que permite obtener la posición que corresponde
 * al número de teléfono indicado dentro de la tabla hash.
 * La función hash estará basada en el resto
 * de la división entre la capacidad.
 * */
int Agenda::obtenerPosicion(long telefono)
{
	int hash = telefono % capacidad;
	return hash;
}

/** @brief
 * Devuelve si el contacto con el teléfono indicado
 * está almacenado o no en la tabla hash.
 * */
bool Agenda::existeContacto(long telefono)
{
	int hash = obtenerPosicion(telefono);

    return ocupados[hash] && telefonos[hash] == telefono;
}

/** @brief
 * Elimina el contacto con el teléfono indicado de la tabla hash.
 * */
void Agenda::eliminarContacto(long telefono)
{
	int hash = obtenerPosicion(telefono);

    assertdomjudge(ocupados[hash] == true && telefonos[hash] == telefono);

	ocupados[hash] = false;
}

/** @brief
 * Esta función permite imprimir toda la tabla hash.
 * Aunque este método viola el principio de separación
 * entre interfaz y modelo es necesario para el corrector.
 * Esta función no deberá ser implementada por el alumno.
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