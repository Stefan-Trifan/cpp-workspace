#include "Matriz.h"
#include <iostream>

using namespace std; 

// #if 0
// #endif

int main()
{
	Matriz *temp  = NULL;
	Matriz *copia = NULL;
	Matriz a, b, c;
	int n_filas;
	int n_columnas;
	double scalar;
	long semilla;
	char operacion;

	do
	{
		cout << "Elige operacion:" << endl;
		cin >> operacion;
		switch (operacion)
		{
			// crear matriz manual
			case 'N':
				cout << "Creando nueva matriz" << endl;
				cout << "Introduzca numero filas y columnas ";
				cin >> n_filas;
				cin >> n_columnas;
				temp = new Matriz(n_filas, n_columnas);
				temp->rellenarManual();
				break;
			// crear matriz aleatoria
			case 'R':
				cout << "Creando nueva matriz aleatoria" << endl;
				cout << "Introduzca numero filas y columnas ";
				cin >> n_filas;
				cin >> n_columnas;
				temp = new Matriz(n_filas, n_columnas);
				cout << "Semilla aleatoria: ";
				cin >> semilla;
				temp->rellenarAleatorio(semilla);
				break;
			// asignar
			case 'A':
				a = *temp;
				cout << "Asignando A" << endl;
				break;
			// asignar
			case 'B':
				b = *temp;
				cout << "Asignando B" << endl;
				break;
			// asignar
			case 'C':
				c = *temp;
				cout << "Asignando C" << endl;
				break;
			case 'D':
				copia = new Matriz(*temp);
				c     = *copia;
				cout << "Duplicando" << endl;
				break;
			case '+':
				c = a + b;
				cout << "C=A+B" << endl;
				break;
			case '-':
				c = a - b;
				cout << "C=A-B" << endl;
				break;
			case '*':
				cin >> scalar;
				c = a * scalar;
				cout << "C=A*val" << endl;
				break;
			case 'X':
				c = a * b;
				cout << "C=AxB" << endl;
				break;
			// imprimir
			case 'I':
				cout << "Imprimir C" << endl;
				c.mostrarMatriz();
				break;
			case '>':
				cout << "Maximo de A: ";
				cout << a.obtenerMaximo();
				cout << endl;
				break;
			case '<':
				cout << "Minimo de A: ";
				cout << a.obtenerMinimo();
				cout << endl;
				break;
			case 'S':
				cout << "A es simetrica ";
				cout << a.esSimetrica();
				cout << endl;
				break;
			case 'T':
				cout << "C=At" << endl;
				c = a.calcularTraspuesta();
				break;
			// salir
			case 'F':
				cout << "FIN" << endl;
				break;
		}
	} while (operacion != 'F');

	return 0;
}


/**
 *  Orden 
 * FASE 1 — Ciclo de vida del objeto (FUNDACIÓN)
 * 1.	Constructor por defecto
 * 2.	Constructor por parámetros
 * 3.	Destructor
 * 4.	Constructor copia
 
 * FASE 2 — Verificar que el objeto funciona
 * 5.	Probar creación + impresión
 
 * FASE 3 — Operaciones básicas estructurales
 * 6.	Traspuesta
 
 * FASE 4 — Operadores simples
 * 7.	Producto escalar
 * * * 
 * 8.	Suma / resta
 * 9.	Producto matrices
  
 * FASE 6 — Métodos de análisis
  
 * 10.	Máximo / mínimo
 * 11.	Simétrica
 */