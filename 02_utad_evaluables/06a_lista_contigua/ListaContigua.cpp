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
	this->capacidad  = incremento;
	// this->vector     = (int *)malloc(sizeof(int) * this->capacidad);
}

// todo
ListaContigua::~ListaContigua() {}

// ___________________________________________________
// ____________________________________________ Getter

int ListaContigua::getN() { return this->n; }

int ListaContigua::getValor(int pos)
{
	assertdomjudge(pos < capacidad);
	return this->vector[pos];
}

int ListaContigua::getCapacidad() { return this->capacidad; }

// ___________________________________________________
// ____________________________________________ Setter

// todo
void ListaContigua::setValor(int pos, int nuevoValor)
{
	(void)pos;
	(void)nuevoValor;
}

// ___________________________________________________
// __________________________________ Métodos Públicos

// * doing
void ListaContigua::insertar(int pos, int nuevoValor)
{
	assertdomjudge(pos >= 0 && pos <= n);

    // CASOS
	// Espacio Disponible / Ultimo elemento
	if (pos == n && n < capacidad)
	{
        vector[pos] = nuevoValor;
		n++;
	}
	// Espacio Disponible / Elemento intermedio
    if(pos < n && n < capacidad)
    {
        // Desplazamiento
    }

	// No espacio disponible / Ultimo elemento
	if (pos == n && n == capacidad)
	{
		// Realloc sin desplazamiento
	}
	// No espacio disponible / Elemento intermedio
	if(pos < n && n == capacidad)
    {
        // Realloc con desplazamiento
    }
}

// todo
void ListaContigua::eliminar(int pos) { (void)pos; }

// todo
void ListaContigua::concatenar(ListaContigua *listaAConcatenar) { (void)listaAConcatenar; }

// todo
int ListaContigua::buscar(int elementoABuscar)
{
	(void)elementoABuscar;
	return 0;
}

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