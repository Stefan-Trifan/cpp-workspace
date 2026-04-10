/*
    Stefan Trifan

    #if 0
    #end if
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

	printf("\n_________________________________________START\n\n");

	// Declaración de variables
    ListaEnlazada listaEnlazada1;
    ListaEnlazada listaEnlazada2;

    //                 ( pos, valor)
    listaEnlazada1.insertar(0, 9);
    listaEnlazada1.insertar(1, 8);
    listaEnlazada1.insertar(2, 7);

    listaEnlazada2.insertar(0, 6);
    listaEnlazada2.insertar(1, 5);
    listaEnlazada2.insertar(2, 4);

    listaEnlazada1.concatenar(&listaEnlazada2);
    listaEnlazada1.toString();

    /* // GetNodo
    Nodo nodo0;
    Nodo nodo1;
    Nodo nodo2;
    Nodo nodo3;
    Nodo nodo4;
    nodo0.elemento = 9;
    nodo1.elemento = 8;
    nodo2.elemento = 7;
    nodo3.elemento = 6;
    nodo4.elemento = 5;
    nodo0.siguienteNodo = &nodo1;
    nodo1.siguienteNodo = &nodo2;
    nodo2.siguienteNodo = &nodo3;
    nodo3.siguienteNodo = &nodo4;
    nodo4.siguienteNodo = nullptr;

    listaEnlazada.lista = &nodo0;
    listaEnlazada.n = 5;

    listaEnlazada.toString(); */


	printf("\n_________________________________________EXIT\n\n");

	return 0;
}


// ListaEnlazada();
// int getN();
// Nodo *getNodo(int pos);
// void toString();
// void insertar(int pos, int nuevoValor);
// int getValor(int pos);
// void setValor(int pos, int nuevoValor);
// int buscar(int elementoABuscar);
// void eliminar(int pos);
// void concatenar(ListaEnlazada *listaAConcatenar);

// ~ListaEnlazada();