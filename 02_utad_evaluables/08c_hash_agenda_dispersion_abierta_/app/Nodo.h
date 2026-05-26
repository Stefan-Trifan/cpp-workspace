// Blackboard

#include "Contacto.h"

// Estructura que representa 
// un nodo de una lista enlazada
struct Nodo
{
	// El elemento que guarda el nodo
	Contacto elemento;   
	// Puntero al nodo anterior 
	// de la lista enlazada
	Nodo* anteriorNodo;  
	// Puntero al siguiente nodo 
	// de la lista enlazada
	Nodo* siguienteNodo; 
};
