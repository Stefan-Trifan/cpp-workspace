/*
    Stefan Trifan

    #if 0
    #en
*/

/* _________________________________________
   Inicio cabecera */

#include <iostream>
// clang-format off
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}
// clang-format on
#define TAM 10
using namespace std;

// Funciones del programa
void imprimirLaberinto(char **laberinto)
{
	for (int i = 0; i < TAM; i++)
	{
		for (int j = 0; j < TAM; j++)
			cout << laberinto[i][j];
		cout << endl;
	}
}

bool buscarTesoro(); /*Completa con tus parametros*/

// Funciones auxiliares

/* _________________________________________
   Inicio main() */

int main()
{
	// Declaración de variables

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

/* _________________________________________
   Inicio definicion de funciones */

// Funciones del programa
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

// Funciones auxiliares
