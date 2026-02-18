#include "Matriz.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std; 

// clang-format off
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}
// clang-format on

// ___________________________________________________
// _____________________________________ Constructores

// Constructor por defecto. 
Matriz::Matriz()
{
	n_filas = 0;
	n_columnas = 0;
	matriz = NULL;
}

// Constructor por parámetros. 
Matriz::Matriz(int n_filas, int n_columnas) : Matriz()   
{
    if (n_filas > 0 && n_columnas > 0)
    {
        this->n_filas = n_filas;
        this->n_columnas = n_columnas;
        matriz = new double*[n_filas];
        for (int i = 0; i < n_filas; i++)
            matriz[i] = new double[n_columnas];
    }
}

// Constructor copia. 
Matriz::Matriz(const Matriz &original) : Matriz()
{
	*this = original;
}

// ___________________________________________________
// ________________________________________ Destructor

// Destructor. 
Matriz::~Matriz()
{
	for (int i = 0; i < n_filas; i++)
		delete[] matriz[i];

	delete[] matriz;
}

// ___________________________________________________
// ________________________________________ Operadores

// todo Operador suma y resta. 
Matriz Matriz::operator+(const Matriz &m) const
{
	(void)m;
	return Matriz();
}

Matriz Matriz::operator-(const Matriz &m) const
{
	(void)m;
	return Matriz();
}


// Operador producto por escalar. 
Matriz Matriz::operator*(double escalar) const
{
	Matriz temp(n_filas, n_columnas);

	for(int i = 0; i < n_filas; i++)
	{
		for(int j = 0; j < n_columnas; j++)
		{
			temp.matriz[i][j] = this->matriz[i][j] * escalar;
		}
	}
	return temp;
}

// todo Operador producto por una matriz. 
Matriz Matriz::operator*(const Matriz &m) const
{
	(void)m;
	return Matriz();
}

// Asignacion de matrices
Matriz &Matriz::operator=(const Matriz &m)
{
	if (matriz != NULL)
	{
		for (int i = 0; i < n_filas; i++)
			delete[] matriz[i];

		delete[] matriz;
		matriz = NULL;
	}

	this->n_filas    = m.n_filas;
	this->n_columnas = m.n_columnas;
	this->matriz     = NULL;
	
	if (n_filas > 0 && n_columnas > 0)
	{
		matriz = new double *[n_filas];

		for (int i = 0; i < n_filas; i++)
		{
			matriz[i] = new double[n_columnas];
			for (int j = 0; j < n_columnas; j++)
				matriz[i][j] = m.matriz[i][j];
		}
	}

	return (*this);
}

// ___________________________________________________
// __________________________________ Métodos Públicos

Matriz Matriz::calcularTraspuesta() const
{
	Matriz temp(n_columnas, n_filas);

	for(int i = 0; i < n_filas; i++)
	{
		for(int j = 0; j < n_columnas; j++)
		{
			temp.matriz[j][i] = matriz[i][j];
		}
	}
	return temp;
}

// todo Comprueba si es simétrica
bool Matriz::esSimetrica()
{
	return true;
}

// todo Devuelve el maximo
double Matriz::obtenerMaximo()
{
	return 0.0;
}

// todo Devuelve el minimo
double Matriz::obtenerMinimo()
{
	return 0.0;
}

// Leer matriz
void Matriz::rellenarManual()
{
	double elemento;
	for (int i = 0; i < n_filas; i++)
	{
		cout << "Fila " << i << endl;
		for (int j = 0; j < n_columnas; j++)
		{
			cout << "Elemento " << j << endl;
			cin >> elemento;
			matriz[i][j] = elemento;
		}
		cout << endl;
	}
}

// Rellenar Matriz Aleatoria
void Matriz::rellenarAleatorio(long seed)
{
	srand(seed);
	for (int i = 0; i < n_filas; i++)
		for (int j = 0; j < n_columnas; j++)
			matriz[i][j] = rand();
}

// Imprimir Matriz
void Matriz::mostrarMatriz()
{
	for (int i = 0; i < n_filas; i++)
	{
		for (int j = 0; j < n_columnas; j++)
			cout << matriz[i][j] << " ";
		cout << endl;
	}
}

// ___________________________________________________
// __________________________________ Métodos Privados