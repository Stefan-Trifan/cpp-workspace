#include <iostream>
#define TAM 10

using namespace std;

void imprimirLaberinto(char **laberinto)
{
	for (int i = 0; i < TAM; i++)
	{
		for (int j = 0; j < TAM; j++)
			cout << laberinto[i][j];
		cout << endl;
	}
}

bool buscarTesoro(/*Completa con tus parametros*/) {}

int main()
{
	int i, j;
	int sol_x = 0, sol_y = 0;
	char **laberinto;

	laberinto = new char *[TAM];

	for (i = 0; i < TAM; i++)
	{
		laberinto[i] = new char[TAM];
		for (j = 0; j < TAM; j++)
			cin >> laberinto[i][j];
	}

	if (buscarTesoro(/*Completa con tus parametrso*/))
	{
		imprimirLaberinto(laberinto);
		cout << "ENCONTRADO " << sol_x << " " << sol_y << endl;
	}
	else
		cout << "INALCANZABLE" << endl;

	return 0;
}
