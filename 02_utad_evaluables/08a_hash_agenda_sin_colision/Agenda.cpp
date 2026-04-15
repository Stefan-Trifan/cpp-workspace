#include "Agenda.h"
#include "assertdomjudge.h"
#include "iostream"

using namespace std;

// Constructores
Agenda::Agenda(int capacidad)
{

}

// Getter
string Agenda::getContacto(long telefono)
{

}

// Métodos públicos
int Agenda::obtenerPosicion(long telefono)
{

}

bool Agenda::existeContacto(long telefono)
{

}


void Agenda::introducirContacto(long telefono, string contacto)
{

}

void Agenda::eliminarContacto(long telefono)
{

}

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