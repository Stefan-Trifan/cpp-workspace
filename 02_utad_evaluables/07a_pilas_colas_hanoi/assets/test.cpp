#include "Pila.h"
#include "assertdomjudge.h"
#include <iostream>
using namespace std;

int main()
{
	printf("\n_______________________START\n\n");

	Pila miPila("Duracell");

    miPila.apilar(1);
    miPila.toString();
    miPila.apilar(2);
    miPila.toString();
    miPila.apilar(3);
    miPila.toString();
    miPila.apilar(4);
    miPila.toString();

    cout << "\n\n";

    miPila.desapilar();
    miPila.toString();
    miPila.desapilar();
    miPila.toString();
    miPila.desapilar();
    miPila.toString();
    miPila.desapilar();
    miPila.toString();

	printf("\n_______________________EXIT\n\n");
	return 0;
}