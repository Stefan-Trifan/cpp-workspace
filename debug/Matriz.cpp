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
	assertdomjudge(n_filas > 0 && n_columnas > 0);

	this->n_filas = n_filas;
	this->n_columnas = n_columnas;
	matriz = new double*[n_filas]; // n_filas
	for (int i = 0; i < n_filas; i++)
		matriz[i] = new double[n_columnas];
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

// Operador suma y resta.
Matriz Matriz::operator+(const Matriz &m)
{
	assertdomjudge(n_filas == m.n_filas && n_columnas == m.n_columnas);

	Matriz resultado(n_filas, n_columnas);

	for(int i = 0; i < this->n_filas; i++)
	{
		for(int j = 0; j < this->n_columnas; j++)
		{
			resultado.matriz[i][j] = this->matriz[i][j] + m.matriz[i][j];
		}
	}

	return resultado;
}

Matriz Matriz::operator-(const Matriz &m)
{
	assertdomjudge(n_filas == m.n_filas && n_columnas == m.n_columnas);

	Matriz resultado(n_filas, n_columnas);

	for(int i = 0; i < this->n_filas; i++)
	{
		for(int j = 0; j < this->n_columnas; j++)
		{
			resultado.matriz[i][j] = this->matriz[i][j] - m.matriz[i][j];
		}
	}

	return resultado;
}


// Operador producto por escalar.
Matriz Matriz::operator*(double escalar)
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

// Operador producto por una matriz.
Matriz Matriz::operator*(const Matriz &m)
{
	assertdomjudge(n_columnas == m.n_filas);

	Matriz temp(n_filas, m.n_columnas);

	for(int i = 0; i < n_filas; i++)
	{
		for(int j = 0; j < m.n_columnas; j++)
		{
			temp.matriz[i][j] = 0;
			for(int k = 0; k < n_columnas; k++)
			{
				temp.matriz[i][j] += matriz[i][k] * m.matriz[k][j];
			}
		}
	}

	return temp;
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

Matriz Matriz::calcularTraspuesta()
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

// Comprueba si es simétrica
bool Matriz::esSimetrica()
{
	assertdomjudge(n_filas == n_columnas);

	Matriz temp = this->calcularTraspuesta();

	for(int i = 0; i < n_filas; i++)
	{
		for(int j = 0; j < n_columnas; j++)
		{
			if(temp.matriz[i][j] != matriz[i][j])
			{
				return false;
			}
		}
	}

	return true;
}

// Devuelve el maximo
double Matriz::obtenerMaximo()
{
	assertdomjudge(n_filas > 0 && n_columnas > 0);

	double max = matriz[0][0];

	for(int i = 0; i < n_filas; i++)
	{
		for(int j = 0; j < n_columnas; j++)
		{
			if(matriz[i][j] >= max)
			{
				max = matriz[i][j];
			}
		}
	}
	return max;
}

// Devuelve el minimo
double Matriz::obtenerMinimo()
{
	assertdomjudge(n_filas > 0 && n_columnas > 0);

	double min = matriz[0][0];

	for(int i = 0; i < n_filas; i++)
	{
		for(int j = 0; j < n_columnas; j++)
		{
			if(matriz[i][j] <= min)
			{
				min = matriz[i][j];
			}
		}
	}
	return min;
}

// Devuelve determinante
double Matriz::calcularDeterminante()
{
    assertdomjudge(n_filas == n_columnas);

    Matriz temp(n_columnas - 1, n_filas - 1);

    int i = 0;
    int j = 0;
    double det = 0;

    // Caso base
    if(n_filas == 2)
    {
        return matriz[0][0] * matriz[1][1] - matriz[1][0] * matriz[0][1];
    }

    // Llamada recursiva + Reduccion del problema
    for(int j = 0; j < n_columnas; j++)
    {
        for(int row = 0; row < n_filas; row++)
        {
            for(int col = 0; col < n_filas; col++)
            {
                if(row != i && col != j)
                {
                    temp.matriz[row][col] = matriz[i][j];
                }
            }
        }
        if((i + j) % 2 == 0)
        {
            det += matriz[i][j] * temp.calcularDeterminante();
        }
        if((i + j) % 2 == 1)
        {
            det += - matriz[i][j] * temp.calcularDeterminante();
        }
    }

    return det;
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