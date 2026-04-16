#include "Agenda.h"
#include "assertdomjudge.h"
#include <iostream>
#include <string>

using namespace std;

// _________________________________________ Constructores
/** @brief
 * - inicializará el atributo [capacidad] y [n]
 * - reservará [capacidad] elementos para todos los arrays.
 * */
Agenda::Agenda(int capacidad)
{
	assertdomjudge(capacidad > 0);

	this->capacidad = capacidad;
	this->n         = 0;
	this->nombres   = new string[capacidad];
	this->telefonos = new long[capacidad];
	this->vacias    = new bool[capacidad];
	this->borradas  = new bool[capacidad];

	for (int i = 0; i < capacidad; i++)
	{
		vacias[i]   = true;
		borradas[i] = false;
	}
}

/** @brief Destructor
 * - Se encargará de liberar la memoria
 * que fue reservada de forma dinámica
 * para almacenar todos los arrays.
 * */
Agenda::~Agenda()
{
	delete[] nombres;
	delete[] telefonos;
	delete[] vacias;
	delete[] borradas;
}

// _________________________________________ Getter
/** @brief
 * - Devuelve el nombre del contacto
 * que tiene el teléfono indicado.
 * */
// todo
string Agenda::getContacto(long telefono)
{
	assertdomjudge(telefono > 0);

    // ! buscarElemento

    // Devolver contacto

	return "";
}

// _________________________________________ Métodos públicos
/** @brief
 * - Introduce un contacto nuevo en la tabla hash
 * en su posición correspondiente.
 * */
// todo
void Agenda::introducirContacto(long telefono, string contacto)
{
	assertdomjudge(telefono > 0 && contacto != "");
    // ! assert(!existeContacto)

	// ! buscarHueco(telefono)

    // Introducimos en el hueco

	n++;
}

/** @brief
 * - Este método implementa la función hash
 * que permite obtener la posición que correspondería
 * al número de teléfono indicado dentro de la tabla hash.
 * - La función hash estará basada
 * en el resto de la división entre la capacidad.
 * */
int Agenda::obtenerPosicion(long telefono)
{
	assertdomjudge(telefono > 0);

    // Devuelve el hash
	return telefono % capacidad;
}

/** @brief
 * - Método que obtiene la posicion real
 * de un contacto en la tabla hash.
 *
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
int Agenda::buscarContacto(long telefono)
{
	assertdomjudge(telefono > 0);

    int hash = obtenerPosicion(telefono);

    // Buscar elemento con la clave
        /**
         * Si la clave que buscamos no está ahí,
         * iremos avanzando al igual que para insertar…
         * pero en vez de parar en la primera casilla vacía, pararemos en la primera casilla vacía no borrada.
         * Es decir, las casillas borradas y vacías nos las saltaremos y seguiremos buscando
         */

	return 0;
}

/** @brief
 * - Este método busca el hueco adecuado
 * para meter un contacto.
 * - Empieza por la posición proporcionada por obtenerPosicion
 * y sigue buscando secuencialmente (exploración lineal)
 * mientras haya colisión.
 * */
// todo
int Agenda::buscarHueco(long telefono)
{
	assertdomjudge(telefono > 0);

    int hash = obtenerPosicion(telefono);

    if(vacias[hash] != true)
    {
        int posInicial = hash;
        do
        {
            hash++;

            if(hash == capacidad)
            {
                hash = 0;
            }

            // No hay hueco disponible
            assertdomjudge(hash == posInicial);
        }
        while (vacias[hash] == false);
    }
    // Si la pos hash no esta vacia
        // int pos = hash
        // Avanzamos hasta que encontremos vacia

	return hash;
}

/** @brief
 * - Indica si la tabla hash ha alcanzado su máxima capacidad.
 * */
// todo
bool Agenda::isLlena()
{
    for(int i = 0; i < capacidad; i++)
    {
        if(vacias[i])
        {
            return false;
        }
    }

	return true;
}

/** @brief
 * - Devuelve si el contacto con el teléfono indicado
 * está almacenado o no en la tabla hash.
 * */
// todo
bool Agenda::existeContacto(long telefono)
{
	assertdomjudge(telefono > 0);

    // ! buscarContacto(telefono)
        // return 1 si lo encuentra
        // return -1 si no lo encuentra

	return false;
}

/** @brief
 * - Elimina el contacto con el teléfono indicado de la tabla hash.
 * */
// todo
void Agenda::eliminarContacto(long telefono)
{
	assertdomjudge(telefono > 0);
    // ! assert(existe)

    // ! buscarElemento

    // Eliminar el Elemento
    // Marcar casilla borrada
    // Marcar casilla vacía
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
        // todo hemos puesto exclamacion en "!vacias[i]"
		cout << "Posicion " << i
          << " | Ocupada: " << !vacias[i]
          << " | Telefono: " << telefonos[i]
          << " | Nombre: " << nombres[i]
          << endl;
	}
}
// clang-format on

// clang-format off
void Agenda::toString()
{
	for (int i = 0; i < capacidad; i++)
	{
		cout << "Posicion " << i
          << " | Ocupada: " << !vacias[i]
          << " | Telefono: " << telefonos[i]
          << " | Nombre: " << nombres[i]
          << endl;
	}
}
// clang-format on