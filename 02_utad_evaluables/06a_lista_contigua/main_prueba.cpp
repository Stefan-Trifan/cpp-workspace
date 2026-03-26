/*
    Stefan Trifan

    #if 0
    #end if
*/

/* _________________________________________
   Inicio cabecera */

#include "ListaContigua.h"
#include <iostream>
using namespace std;

/* _________________________________________
   Inicio main() */

// [N] - Crear un nueva lista indicando el incremento
// [I] - Insertar un valor en la lista en una posición
// [E] - Eliminar un elemento de la lista
// [V] - Ver el valor de un elemento de la lista
// [T] - Ver todos los valores de la lista
// [S] - Modificar un valor de la lista
// [L] - Informa sobre la longitud actual de la lista
// [M] - Informa sobre la capacidad máxima de la lista
// [C] - Concatenar nuestra lista con otra con n elementos
// [B] - Buscar un valor en la lista
// [F] - Termina

int main()
{
	// Declaración de variables
	ListaContigua *lista;
	ListaContigua *numeros;
	int incremento, numero, posicion;

	(void)lista; // todo testing
	(void)numeros; // todo testing
	(void)incremento; // todo testing
	(void)numero; // todo testing
	(void)posicion; // todo testing

	// N 2
	cout << "Creando nueva lista" << endl;
	cout << "Introduzca incremento ";
	cin >> incremento;
	lista = new ListaContigua(incremento);
	cout << endl;

	// * Creando nueva lista
	// * Introduzca incremento
	
	// I 0 1
	cout << "Insertar en lista en la posicion ";
	cin >> posicion;
	cout << " el valor ";
	cin >> numero;
	lista->insertar(posicion, numero);
	cout << endl;

	// * Insertar en lista en la posicion  el valor

	// todo M
	// cout << "La capacidad maxima de la lista es "
	// << lista->getCapacidad() << endl;

	// * La capacidad maxima de la lista es 2

	// todo T
	// cout << "Ver todos los " << lista->getN() 
	// << " elementos de la lista" << endl;
	// for (int i = 0; i < lista->getN(); i++)
	// {
	// 	cout << lista->getValor(i) << " ";
	// }
	// cout << endl;

	// * Ver todos los 1 elementos de la lista
	// * 1

	// todo I 1 2
	// cout << "Insertar en lista en la posicion ";
	// cin >> posicion;
	// cout << " el valor ";
	// cin >> numero;
	// lista->insertar(posicion, numero);
	// cout << endl;

	// * Insertar en lista en la posicion  el valor

	// todo M
	// cout << "La capacidad maxima de la lista es "
	// << lista->getCapacidad() << endl;

	// * La capacidad maxima de la lista es 2

	// todo T
	// cout << "Ver todos los " << lista->getN() 
	// << " elementos de la lista" << endl;
	// for (int i = 0; i < lista->getN(); i++)
	// {
	// 	cout << lista->getValor(i) << " ";
	// }
	// cout << endl;

	// * Ver todos los 2 elementos de la lista
	// * 1 2

	// todo I 2 3
	// cout << "Insertar en lista en la posicion ";
	// cin >> posicion;
	// cout << " el valor ";
	// cin >> numero;
	// lista->insertar(posicion, numero);
	// cout << endl;

	// * Insertar en lista en la posicion  el valor

	// todo M
	// cout << "La capacidad maxima de la lista es "
	// << lista->getCapacidad() << endl;

	// * La capacidad maxima de la lista es 4

	// todo T
	// cout << "Ver todos los " << lista->getN() 
	// << " elementos de la lista" << endl;
	// for (int i = 0; i < lista->getN(); i++)
	// {
	// 	cout << lista->getValor(i) << " ";
	// }
	// cout << endl;

	// * Ver todos los 3 elementos de la lista
	// * 1 2 3

	// todo I 3 4
	// cout << "Insertar en lista en la posicion ";
	// cin >> posicion;
	// cout << " el valor ";
	// cin >> numero;
	// lista->insertar(posicion, numero);
	// cout << endl;

	// * Insertar en lista en la posicion  el valor

	// todo M
	// cout << "La capacidad maxima de la lista es "
	// << lista->getCapacidad() << endl;

	// * La capacidad maxima de la lista es 4

	// todo T
	// cout << "Ver todos los " << lista->getN() 
	// << " elementos de la lista" << endl;
	// for (int i = 0; i < lista->getN(); i++)
	// {
	// 	cout << lista->getValor(i) << " ";
	// }
	// cout << endl;

	// * Ver todos los 4 elementos de la lista
	// * 1 2 3 4

	// todo I 4 5
	// cout << "Insertar en lista en la posicion ";
	// cin >> posicion;
	// cout << " el valor ";
	// cin >> numero;
	// lista->insertar(posicion, numero);
	// cout << endl;

	// * Insertar en lista en la posicion  el valor

	// todo M
	// cout << "La capacidad maxima de la lista es "
	// << lista->getCapacidad() << endl;

	// * La capacidad maxima de la lista es 6

	// todo T
	// cout << "Ver todos los " << lista->getN() 
	// << " elementos de la lista" << endl;
	// for (int i = 0; i < lista->getN(); i++)
	// {
	// 	cout << lista->getValor(i) << " ";
	// }
	// cout << endl;

	// * Ver todos los 5 elementos de la lista
	// * 1 2 3 4 5

	// todo I 5 6
	// cout << "Insertar en lista en la posicion ";
	// cin >> posicion;
	// cout << " el valor ";
	// cin >> numero;
	// lista->insertar(posicion, numero);
	// cout << endl;

	// * Insertar en lista en la posicion  el valor

	// todo M
	// cout << "La capacidad maxima de la lista es "
	// << lista->getCapacidad() << endl;

	// * La capacidad maxima de la lista es 6

	// todo T
	// cout << "Ver todos los " << lista->getN() 
	// << " elementos de la lista" << endl;
	// for (int i = 0; i < lista->getN(); i++)
	// {
	// 	cout << lista->getValor(i) << " ";
	// }
	// cout << endl;

	// * Ver todos los 6 elementos de la lista
	// * 1 2 3 4 5 6

	// todo E 5
	// cout << "Eliminar de la lista el elemento en posicion ";
	// cin >> posicion;
	// lista->eliminar(posicion);
	// cout << endl;

	// * Eliminar de la lista el elemento en posicion

	// todo M
	// cout << "La capacidad maxima de la lista es "
	// << lista->getCapacidad() << endl;

	// * La capacidad maxima de la lista es 6

	// todo T
	// cout << "Ver todos los " << lista->getN() 
	// << " elementos de la lista" << endl;
	// for (int i = 0; i < lista->getN(); i++)
	// {
	// 	cout << lista->getValor(i) << " ";
	// }
	// cout << endl;

	// * Ver todos los 5 elementos de la lista
	// * 1 2 3 4 5

	// todo E 4
	// cout << "Eliminar de la lista el elemento en posicion ";
	// cin >> posicion;
	// lista->eliminar(posicion);
	// cout << endl;

	// * Eliminar de la lista el elemento en posicion

	// todo M
	// cout << "La capacidad maxima de la lista es "
	// << lista->getCapacidad() << endl;

	// * La capacidad maxima de la lista es 6

	// todo T
	// cout << "Ver todos los " << lista->getN() 
	// << " elementos de la lista" << endl;
	// for (int i = 0; i < lista->getN(); i++)
	// {
	// 	cout << lista->getValor(i) << " ";
	// }
	// cout << endl;

	// * Ver todos los 4 elementos de la lista
	// * 1 2 3 4

	// todo E 3
	// cout << "Eliminar de la lista el elemento en posicion ";
	// cin >> posicion;
	// lista->eliminar(posicion);
	// cout << endl;

	// * Eliminar de la lista el elemento en posicion


	// todo M
	// cout << "La capacidad maxima de la lista es "
	// << lista->getCapacidad() << endl;

	// * La capacidad maxima de la lista es 6

	// todo T
	// cout << "Ver todos los " << lista->getN() 
	// << " elementos de la lista" << endl;
	// for (int i = 0; i < lista->getN(); i++)
	// {
	// 	cout << lista->getValor(i) << " ";
	// }
	// cout << endl;

	// * Ver todos los 3 elementos de la lista
	// * 1 2 3

	// todo E 2
	// cout << "Eliminar de la lista el elemento en posicion ";
	// cin >> posicion;
	// lista->eliminar(posicion);
	// cout << endl;

	// * Eliminar de la lista el elemento en posicion


	// todo M
	// cout << "La capacidad maxima de la lista es "
	// << lista->getCapacidad() << endl;

	// * La capacidad maxima de la lista es 4

	// todo T
	// cout << "Ver todos los " << lista->getN() 
	// << " elementos de la lista" << endl;
	// for (int i = 0; i < lista->getN(); i++)
	// {
	// 	cout << lista->getValor(i) << " ";
	// }
	// cout << endl;

	// * Ver todos los 2 elementos de la lista
	// * 1 2

	// todo E 1
	// cout << "Eliminar de la lista el elemento en posicion ";
	// cin >> posicion;
	// lista->eliminar(posicion);
	// cout << endl;

	// * Eliminar de la lista el elemento en posicion


	// todo M
	// cout << "La capacidad maxima de la lista es "
	// << lista->getCapacidad() << endl;

	// * La capacidad maxima de la lista es 4

	// todo T
	// cout << "Ver todos los " << lista->getN() 
	// << " elementos de la lista" << endl;
	// for (int i = 0; i < lista->getN(); i++)
	// {
	// 	cout << lista->getValor(i) << " ";
	// }
	// cout << endl;

	// * Ver todos los 1 elementos de la lista
	// * 1

	// todo E 0
	// cout << "Eliminar de la lista el elemento en posicion ";
	// cin >> posicion;
	// lista->eliminar(posicion);
	// cout << endl;

	// * Eliminar de la lista el elemento en posicion

	// todo M
	// cout << "La capacidad maxima de la lista es "
	// << lista->getCapacidad() << endl;

	// * La capacidad maxima de la lista es 2

	// todo T
	// cout << "Ver todos los " << lista->getN() 
	// << " elementos de la lista" << endl;
	// for (int i = 0; i < lista->getN(); i++)
	// {
	// 	cout << lista->getValor(i) << " ";
	// }
	// cout << endl;

	// * Ver todos los 0 elementos de la lista

	// todo F 
	// cout << "FIN" << endl;

	// * FIN

#if 0

    // Declaración de variables
	ListaContigua *lista;
	ListaContigua *numeros;
	int incremento, numero, posicion;
	char operacion;

	do
	{
		cout << "Elige operacion:" << endl;
		cin >> operacion;
		switch (operacion)
		{
            // Crear un nueva lista indicando el incremento
			case 'N':
				cout << "Creando nueva lista" << endl;
				cout << "Introduzca incremento ";
				cin >> incremento;
				lista = new ListaContigua(incremento);
				cout << endl;
				break;

            // Insertar un valor en la lista en una posición
			case 'I':
				cout << "Insertar en lista en la posicion ";
				
				cin >> posicion;
				
				cout << " el valor ";
				
				cin >> numero;
				
				lista->insertar(posicion, numero);
				
				cout << endl;
				
				break;

            // Eliminar un elemento de la lista
			case 'E':
				cout << "Eliminar de la lista el elemento en posicion ";

				cin >> posicion;

				lista->eliminar(posicion);

				cout << endl;

				break;

            // Ver el valor de un elemento de la lista
			case 'V':
				cout << "Ver el elemento ";

				cin >> posicion;

				cout << " de la lista" << endl;

				cout << lista->getValor(posicion) << endl;

				cout << endl;

				break;

            // Ver todos los valores de la lista
			case 'T':
				cout << "Ver todos los " << lista->getN() 
				<< " elementos de la lista" << endl;

				for (int i = 0; i < lista->getN(); i++)
				{
					cout << lista->getValor(i) << " ";
				}

				cout << endl;

				break;

            // M
			odificar un valor de la lista
			case 'S':
				cout << "Modificar elemento en posicion  ";

				cin >> posicion;

				cout << "por el valor ";

				cin >> numero;

				lista->setValor(posicion, numero);

				cout << endl;

				break;

            // Informa sobre la longitud actual de la lista
			case 'L':
				cout << "La longitud de la lista es " << lista->getN() << endl;

				break;

            // Informa sobre la capacidad máxima de la lista
			case 'M':
				cout << "La capacidad maxima de la lista es "
				<< lista->getCapacidad() << endl;
// 
				break;

            // Concatenar nuestra lista con otra con n elementos
			case 'C':
				cout << "Cuantos numeros quieres concatenar ";

				cin >> numero;

				numeros = new ListaContigua(1);

				for (int i = 0; i < numero; i++)
				{
					numeros->insertar(i, i + 1);
				}

				cout << "Concatenando " << numero 
				<< " numeros a la lista " << endl;

				lista->concatenar(numeros);
				break;

            // Buscar un valor en la lista
			case 'B':
				cout << "Indica el valor a buscar ";

				cin >> numero;

				posicion = lista->buscar(numero);

				if (posicion < 0)
				{
					cout << "El valor no esta en la lista" << endl;
				}
				else
				{
					cout << "El valor esta en la lista en la posicion " 
					<< posicion << endl;
				}

				break;
				
            // Termina
			case 'F':
				cout << "FIN" << endl;

				break;
		}

	} while (operacion != 'F');

#endif
	
	return 0;
}

