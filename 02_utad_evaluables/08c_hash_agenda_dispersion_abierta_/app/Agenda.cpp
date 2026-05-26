// Blackboard + Terminar Steve

#include "Agenda.h"
#include "ListaEnlazada.h"
#include "assertdomjudge.h"
#include <iostream>
#include "impresionListasEnlazadas.h" // Para el m�todo imprimir de la tabla hash

using namespace std;

// _____________________ Constructores
Agenda::Agenda(int capacidad)
{
    (void) capacidad;
}

Agenda::~Agenda()
{

}

// _____________________ Getter

string Agenda::getContacto(long telefono)
{

}

// _____________________ Métodos públicos

int Agenda::obtenerPosicion (long telefono)
{
	return 0;
}
bool Agenda::existeContacto(long telefono)
{

}
void Agenda::eliminarContacto(long telefono)
{

}
void Agenda::introducirContacto(long telefono, string contacto)
{

}

// todo depende de ListaEnlazanda.cpp
// void Agenda::imprimir() {
// 	for (int i=0; i < capacidad; i++) {
// 		cout << "Posicion " << i << ": ";
// 		imprimirListaEnlazada(&tabla[i]);
// 	}
// } 
	