#include "ListaContigua.h"
#include "assertdomjudge.h"
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

// ___________________________________________________
// _____________________________________ Constructores

ListaContigua::ListaContigua(int incremento)
{
	assertdomjudge(incremento >= 1);
	this->n          = 0;
	this->capacidad  = 0;
	this->incremento = incremento;
	this->vector     = nullptr;
}

ListaContigua::~ListaContigua()
{
	free(vector);
}

// ___________________________________________________
// ____________________________________________ Getter

int ListaContigua::getN()
{
	return this->n;
}

int ListaContigua::getValor(int pos)
{
	assertdomjudge(pos >= 0 && pos < n);
	return this->vector[pos];
}

int ListaContigua::getCapacidad()
{
	return this->capacidad;
}

// ___________________________________________________
// ____________________________________________ Setter

void ListaContigua::setValor(int pos, int nuevoValor)
{
	assertdomjudge(pos >= 0 && pos < n);
	vector[pos] = nuevoValor;
}

// ___________________________________________________
// __________________________________ Métodos Públicos

void ListaContigua::insertar(int pos, int nuevoValor)
{
	assertdomjudge(pos >= 0 && pos <= n);

	// Comprobamos capacidad disponible
	// Incrementamos si es necesario
	if (n == capacidad)
	{
		this->vector = (int*)realloc(this->vector, (capacidad + incremento) * sizeof(int));

		this->capacidad += this->incremento;
	}

	// CASOS
	if (pos == n) // Ultimo elemento
	{
		vector[pos] = nuevoValor;
		n++;
	}
	else if (pos < n) // Elemento intermedio
	{
		// Desplazamiento

		/* Solucion sin memmove
		for (int i = n - 1; i >= pos; i--)
		{
		    vector[i + 1] = vector[i];
		} */

		// memmove(destino, origen, numero_bytes);
		memmove(&vector[pos + 1], &vector[pos], sizeof(int) * (n - pos));

		vector[pos] = nuevoValor;
		n++;
	}
}

void ListaContigua::eliminar(int pos)
{
	assertdomjudge(pos >= 0 && pos < n);

	// Ultimo elemento
	if (pos == n - 1)
	{
		n--;
	}
	else if (pos < n - 1)
	{
		/* Solucion sin memmove
		for (int i = pos; i < n - 1; i++)
		{
		    vector[i] = vector[i + 1];
		} */

		// memmove(destino, origen, numero_bytes);
		// memmove(&vector[pos], &vector[pos + 1], sizeof(int) * (n - pos));
		memmove(&vector[pos], &vector[pos + 1], sizeof(int) * (n - pos - 1));
		n--;
	}

	// Liberamos memoria
	if (capacidad > incremento && n <= (capacidad - 2 * incremento))
	{
		this->vector = (int*)realloc(this->vector, (capacidad - incremento) * sizeof(int));

		this->capacidad -= this->incremento;
	}
}

void ListaContigua::concatenar(ListaContigua* listaAConcatenar)
{
	int elementosAConcatenar = listaAConcatenar->getN();
	int n_original           = this->n;

	// Aumentamos capacidad en bloques de incremento
	while (this->n + elementosAConcatenar > this->capacidad)
	{
		this->vector = (int*)realloc(this->vector, (this->capacidad + this->incremento) * sizeof(int));

		this->capacidad += this->incremento;
	}

	// Concatenamos
	for (int i = 0; i < elementosAConcatenar; i++)
	{
		this->vector[n_original + i] = listaAConcatenar->getValor(i);
	}

	this->n += elementosAConcatenar;
}

int ListaContigua::buscar(int elementoABuscar)
{
	for (int i = 0; i < n; i++)
	{
		if (vector[i] == elementoABuscar)
		{
			return i;
		}
	}
	return -1;
}

// debug/testing
void ListaContigua::toString()
{
	cout << " incremento = +" << incremento << endl;
	cout << " capacidad  = " << capacidad << endl;
	cout << " n          = " << n << '\n' << endl;

	// N
	cout << " n    ";
	for (int i = 1; i < 10; i++)
	{
		if (i != capacidad)
		{
			cout << ' ' << i << ' ';
		}
		else
		{
			cout << ' ' << i << '|';
		}
	}
	cout << endl;

	// Capacidad
	cout << "      ";
	for (int i = 0; i < capacidad; i++)
	{
		cout << ' ' << '-' << ' ';
	}
	cout << endl;

	// Elementos del array
	cout << "      ";
	for (int i = 0; i < n; i++)
	{
		if (vector[i] > 0)
		{
			cout << '|' << vector[i] << '|';
		}
		else if (vector[i] == 0)
		{
			cout << '|' << '_' << '|';
		}
	}
	cout << endl;

	// Capacidad
	cout << "      ";
	for (int i = 0; i < capacidad; i++)
	{
		cout << ' ' << '-' << ' ';
	}
	cout << endl;

	// Posicion
	cout << " pos  ";
	for (int i = 0; i < 9; i++)
	{
		if (i != capacidad - 1)
		{
			cout << ' ' << i << ' ';
		}
		else
		{
			cout << ' ' << i << '|';
		}
	}
	cout << '\n' << '\n';

	cout << "└─────────────────────────────" << endl;
}