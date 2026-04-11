#include "ListaCircular.h"
#include <iostream>
using namespace std;

int main()
{
	// Declaracion variables
	ListaCircular pistola;
	string disparo;
	int n_recamaras;
	int giro;
	int pos_bala;

	cerr << "Numero de recamaras del tambor de la pistola: ";
	cin >> n_recamaras;
	cerr << "Donde se coloca inicialmente la bala: ";
	cin >> pos_bala;

	for (int i = 0; i < n_recamaras; i++)
	{
		if (i == pos_bala)
		{
			pistola.insertar(i, "BANG");
		}
		else
		{
			pistola.insertar(i, "CLACK");
		}
	}

	do
	{
		cerr << "Cuanto giramos el tambor?" << endl;
		cin >> giro;
		pistola.girar(giro);
		disparo = pistola.getValor(0);
		cout << disparo << endl;
	} while (disparo != "BANG");

	for (int i = 0; i < n_recamaras; i++)
	{
		pistola.eliminar(0);
	}

	return 0;
}
