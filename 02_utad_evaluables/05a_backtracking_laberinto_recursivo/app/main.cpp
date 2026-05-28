/*
    Stefan Trifan

    #if 0
    #en
*/

/* _________________________________________
   Inicio cabecera */

#include <iostream>

#define TAM 60
#define START_X 0
#define START_Y 0

using namespace std;

// Funciones del programa

// Completar parámetros
bool buscarTesoro(char **laberinto, int *sol_x, int *sol_y, int x, int y);

// Funciones auxiliares
void imprimirLaberinto(char **laberinto);

/* _________________________________________
   Inicio main() */

int main()
{
	// Declaración de variables
	int sol_x = 0, sol_y = 0;
	char **laberinto;
	laberinto = new char *[TAM];

    // Pide laberinto por consola, reserva memoria
	for (int i = 0; i < TAM; i++)
	{
		laberinto[i] = new char[TAM];
		for (int j = 0; j < TAM; j++)
        {
			cin >> laberinto[i][j];
        }
	}

	if (buscarTesoro(laberinto, &sol_x, &sol_y, START_X, START_Y)) // Completar parámetros
	{
        imprimirLaberinto(laberinto);
        cout << "ENCONTRADO " << sol_x << " " << sol_y << endl;
	}
	else
    {
		cout << "INALCANZABLE" << '\n';
    }

	return 0;
}

/* _________________________________________
   Inicio definicion de funciones */

// Funciones del programa
/*
    Elementos necesarios
        - Coordenadas actuales 'x', 'y'
        - Caminos Posibles: 'dx' y 'dy'

                        ( x  y)

            - Arriba    (-1, 0)
            - Derecha   ( 0, 1)
            - Abajo     ( 1, 0)
            - Izquierda ( 0,-1)

    Condiciones de estado
        - Poda:
            - Fuera
            - Pared '*'
            - Visitado 'X'
        - Válido '.'
        - Objetivo 'T'
        - Backtrack
*/
bool buscarTesoro(char **laberinto, int *sol_x, int *sol_y, int x, int y) // Completar parámetros
{
    // cout << "\n" << endl;

    bool encontrado = false;

    //            ☝️  👉  👇  👈
    int dx[4] = { -1,  0,  1,  0};
    int dy[4] = {  0,  1,  0, -1};
    int nx;
    int ny;

    if (laberinto[x][y] == '.')
    {
        laberinto[x][y] = 'X';
    }
    // imprimirLaberinto(laberinto); // todo test

    // Procesamiento + Llamada recursiva
    for(int i = 0; i < 4; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];

        // Poda
            // Comprobamos x e y Dentro del tablero
            // Comprobamos que no es pared y no es visitado
        if(
            (nx >= 0 && nx < TAM) && (ny >= 0 && ny < TAM) &&
            (laberinto[nx][ny] != '*' && laberinto[nx][ny] != 'X'))
        {
            // Caso Valido y caso objetivo
            switch (laberinto[nx][ny])
            {
                case '.':
                    if (buscarTesoro(laberinto, sol_x, sol_y, nx, ny))
                    {
                        return encontrado = true;
                    }
                    break;
                case 'T':
                    *sol_x = nx;
                    *sol_y = ny;
                    return encontrado = true;
                    break;
            }
        }
        if(encontrado)
        {
            break;
        };
    }

    laberinto[x][y] = '.';
    return encontrado;
}

// Funciones auxiliares
void imprimirLaberinto(char **laberinto)
{
	for (int i = 0; i < TAM; i++)
	{
		for (int j = 0; j < TAM; j++)
        {
			cout << laberinto[i][j];
        }
		cout << endl;
	}
}
