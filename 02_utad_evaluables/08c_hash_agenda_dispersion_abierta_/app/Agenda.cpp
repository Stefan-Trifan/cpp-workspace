// Blackboard + Terminar Steve

#include "Agenda.h"
#include "ListaEnlazada.h"
#include "assertdomjudge.h"
#include <iostream>

// Para el método imprimir de la tabla hash:
#include "impresionListasEnlazadas.h"

using namespace std;

// _____________________ Constructores
// Inicializará el atributo capacidad y
// reservará capacidad listas para la tabla hash.
Agenda::Agenda(int capacidad)
{
    assertdomjudge(capacidad >= 0);

    this->capacidad = capacidad;
    this->n = 0;
    this->tabla = new ListaEnlazada[capacidad];
}

//
// Se encargará de liberar la memoria que fue
// reservada de forma dinámica para almacenar toda
// la tabla hash.
// todo
Agenda::~Agenda()
{

}

// _____________________ Getter
// Devuelve el nombre del contacto que tiene
// el teléfono indicado.
string Agenda::getContacto(long telefono)
{
    // Precondicion 1
    assertdomjudge(telefono >= 0 );

    // Calculamos la pos de telefono
    int posTabla = obtenerPosicion(telefono);

    // Creamos contacto tempoal para poder buscar
    Contacto aux;
    aux.telefono = telefono;

    // Calculamos posicion en la lista enlazada
    int posFila = tabla[posTabla].buscar(aux);

    // Precondicion 2: El contacto con ese telefono existe
    assertdomjudge((posFila != -1));

    // Buscamos en la tabla el contacto asociado
    Contacto encontrado = tabla[posTabla].getValor(posFila);

    // Devolvemos el contacto
    return encontrado.nombre;
}

// _____________________ Métodos
// Devuelve si el contacto con el teléfono indicado
// está almacenado o no en la tabla hash.
bool Agenda::existeContacto(long telefono)
{
    // Precondiciones
    assertdomjudge(telefono >= 0);

    // Obtenemos el hash
    int pos = obtenerPosicion(telefono);

    // Generamos un contacto
    Contacto c;
    c.telefono = telefono;

    // Comprobamos si existe
    return tabla[pos].buscar(c) != -1;
}

// Introduce un contacto nuevo en la tabla hash en
// la lista que se encuentra en la posición correspondiente.
void Agenda::introducirContacto(long telefono, string nombre)
{
    assertdomjudge(telefono >= 0);

    // Obtenemos el hash
    int pos = obtenerPosicion(telefono);

    // Creamos el contacto
    Contacto c;
    c.nombre = nombre;
    c.telefono = telefono;

    // Insertamos
    tabla[pos].insertar(tabla[pos].getN(), c);

    n++;
}

// Elimina el contacto con el teléfono indicado
// de la tabla hash.
void Agenda::eliminarContacto(long telefono)
{
    // Considero que el hecho de que el contacto exista o no no es
    // una precondicion. Si el contacto no existe, la funcion no
    // hace nada
    assertdomjudge(telefono >= 0);

    int pos = obtenerPosicion(telefono);

    // Creamos contacto auxiliar, ya que lista enlazada
    // espera un contacto para buscar y eliminar
    Contacto c;
    c.telefono = telefono;

    // Lo eliminamos, solo si existe
    int posFila = tabla[pos].buscar(c);

    if(posFila != -1)
    {
        tabla[pos].eliminar(posFila);
        n--;
    }
}

// Esta función permite imprimir toda la tablahash.
// Aunque este método viola el principio de separación
// entre interfaz y modelo es necesario para el
// corrector automático. Esta función no deberá
// ser implementada por el alumno.
void Agenda::imprimir()
{
	for (int i=0; i < capacidad; i++)
	{
		cout << "Posicion " << i << ": ";
		imprimirListaEnlazada(&tabla[i]);
	}
}

// Este método implementa la función hash que permite
// obtener en que posición delvector de listas enlazadas
// que corresponde al número de teléfono indicado dentro
// de la tabla hash. La función hash estará
// basada en el resto de la división entre la capacidad.
int Agenda::obtenerPosicion (long telefono)
{
    assertdomjudge(telefono >= 0);

	return telefono % capacidad;
}
