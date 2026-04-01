#include "ListaContigua.h"
#include "assertdomjudge.h"

using namespace std;

// ___________________________________________________
// _____________________________________ Constructores

ListaContigua::ListaContigua(int incremento)
{
	assertdomjudge(incremento >= 1);
	this->n          = 0;
	this->incremento = incremento;
	this->capacidad  = 0;
}

// todo
ListaContigua::~ListaContigua()
{
}

// ___________________________________________________
// ____________________________________________ Getter

int ListaContigua::getN()
{
	return this->n;
}

int ListaContigua::getValor(int pos)
{
	assertdomjudge(pos < capacidad);
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
		this->vector = (int *)realloc(this->vector, (capacidad + incremento) * sizeof(int));

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
		for (int i = n - 1; i >= pos; i--)
		{
			vector[i + 1] = vector[i];
		}
		vector[pos] = nuevoValor;
		n++;
	}
}

// todo
void ListaContigua::eliminar(int pos)
{
	(void)pos;
}

// todo
void ListaContigua::concatenar(ListaContigua *listaAConcatenar)
{
	(void)listaAConcatenar;
}

// todo
int ListaContigua::buscar(int elementoABuscar)
{
	(void)elementoABuscar;
	return 0;
}

// debug/testing
void ListaContigua::toString()
{
	cout << " incremento = +" << incremento << endl;
	cout << " capacidad  = " << capacidad << endl;
	cout << " n          = " << n << '\n' << endl;
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
	cout << "      ";
	for (int i = 0; i < capacidad; i++)
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