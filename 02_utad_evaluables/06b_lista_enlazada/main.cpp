/*
    Stefan Trifan

    #if 0
    #en
*/

/* _________________________________________
   Inicio cabecera */

#include "ListaEnlazada.h"
#include <iostream>
using namespace std;

/* _________________________________________
   Inicio main() */

int main()
{
	// Declaración de variables
	ListaEnlazada *lista;
	ListaEnlazada *numeros;
	int numero, posicion;
	char operacion;

	do
	{
		cout << "Elige operacion:" << endl;
		cin >> operacion;
		switch (operacion)
		{
			// N: crea un nueva lista indicando el incremento.
			case 'N':
				cout << "Creando nueva lista" << endl;
				lista = new ListaEnlazada();
				cout << endl;
				break;
			// I: inserta un valor en la lista en una posición.
			case 'I':
				cout << "Insertar en lista en la posicion ";
				cin >> posicion;
				cout << " el valor ";
				cin >> numero;
				lista->insertar(posicion, numero);
				cout << endl;
				break;
			// E: elimina un elemento de la lista.
			case 'E':
				cout << "Eliminar de la lista el elemento en posicion ";
				cin >> posicion;
				lista->eliminar(posicion);
				cout << endl;
				break;
			// V: ver el valor de un elemento de la lista.
			case 'V':
				cout << "Ver el elemento ";
				cin >> posicion;
				cout << " de la lista" << endl;
				cout << lista->getValor(posicion) << endl;
				cout << endl;
				break;
			// T: ver todos los valores de la lista.
			case 'T':
				cout << "Ver todos los " << lista->getN() << " elementos de la lista" << endl;
				for (int i = 0; i < lista->getN(); i++)
					cout << lista->getValor(i) << " ";
				cout << endl;
				break;
			// S: modifica un valor de la lista.
			case 'S':
				cout << "Modificar elemento en posicion  ";
				cin >> posicion;
				cout << "por el valor ";
				cin >> numero;
				lista->setValor(posicion, numero);
				cout << endl;
				break;
			// L: informa sobre la longitud actual de la lista.
			case 'L':
				cout << "La longitud de la lista es " << lista->getN() << endl;
				break;
			// C: concatena nuestra lista con otra con n elementos.
			case 'C':
				cout << "Cuantos numeros quieres concatenar ";
				cin >> numero;
				numeros = new ListaEnlazada();
				for (int i = 0; i < numero; i++)
					numeros->insertar(i, i + 1);
				cout << "Concatenando " << numero << " numeros a la lista " << endl;
				lista->concatenar(numeros);
				break;
			// B: busca un valor en la lista.
			case 'B':
				cout << "Indica el valor a buscar ";
				cin >> numero;
				posicion = lista->buscar(numero);
				if (posicion < 0)
					cout << "El valor no esta en la lista" << endl;
				else
					cout << "El valor esta en la lista en la posicion " << posicion << endl;
				break;
			// F: termina.
			case 'F':
				cout << "FIN" << endl;
				break;
		}

	} while (operacion != 'F');
	return 0;
}