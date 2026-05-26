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
// reservará capacidad listaspara la tabla hash.
// todo
Agenda::Agenda(int capacidad)
{
    (void) capacidad;
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
// Devuelve el nombre delcontacto que tiene 
// el teléfono indicado.
// todo
string Agenda::getContacto(long telefono)
{
	return " "; 
}

// _____________________ Métodos públicos
// Este método implementa la función hash que permite 
// obtener en que posición delvector de listas enlazadas 
// que corresponde al número de teléfono indicado dentro 
// de la tabla hash. La función hash estará
// basada en el resto de la división entre la capacidad.
// todo
int Agenda::obtenerPosicion (long telefono)
{
	return 0; 
}

// Devuelve si el contacto con el teléfono indicado 
// está almacenado o no en la tablahash.
// todo
bool Agenda::existeContacto(long telefono)
{
	return false; 
}

// Elimina el contactocon el teléfono indicado 
// de la tabla hash.
// todo
void Agenda::eliminarContacto(long telefono)
{

}

// Introduce un contacto nuevo en la tabla hash en 
// la lista que seencuentra en la posición correspondiente.
// todo
void Agenda::introducirContacto(long telefono, string contacto)
{

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
	