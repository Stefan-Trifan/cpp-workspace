#include "Pila.h"
#include "assertdomjudge.h"
#include <iostream>
using namespace std;

void hanoi(int n, Pila *origen, Pila *temporal, Pila *destino);

int main()
{
	Pila *A = new Pila("A");
	Pila *B = new Pila("B");
	Pila *C = new Pila("C");

	int n;
	cin >> n;

    // Creamos pila A
	for (int i = n; i > 0; i--)
	{
		A->apilar(i);
	}

	hanoi(n, A, B, C);

	for (int i = 0; i < n; i++)
	{
		C->desapilar();
	}

	return 0;
}

void hanoi(int n, Pila *origen, Pila *temporal, Pila *destino)
{
    if(n > 0)
    {
        hanoi(n - 1, origen, destino, temporal);
        destino->apilar(origen->desapilar());
        hanoi(n - 1, temporal, origen, destino);
    }
}