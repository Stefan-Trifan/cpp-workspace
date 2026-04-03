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

void ListaContigua::eliminar(int pos)
{
	assertdomjudge(pos <= n - 1);

	// Ultimo elemento
	if (pos == n - 1)
	{
		n--;
	}
	else if (pos < n - 1)
	{
		for (int i = pos; i <= n - 1; i++)
		{
			vector[i] = vector[i + 1];
		}
		n--;
	}

	// Liberamos memoria
	if (n <= (capacidad - 2 * incremento))
	{
		this->vector = (int *)realloc(this->vector, (capacidad - incremento) * sizeof(int));

		this->capacidad -= this->incremento;
		cout << "borrado" << endl;
	}
}

void ListaContigua::concatenar(ListaContigua *listaAConcatenar)
{
	int num_total_elementos = this->n + listaAConcatenar->getN();
    int n_original = this->n;

	// Reservamos memoria vector += listaAConcatenar
	this->vector = (int *)realloc(this->vector, num_total_elementos * sizeof(int));
    capacidad = num_total_elementos;

	// Concatenamos
	int j = 0;
	for (int i = n_original; i < n_original + listaAConcatenar->getN(); i++)
	{
		vector[i] = listaAConcatenar->getValor(j);
		j++;
	}
    this->n += listaAConcatenar->getN();
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