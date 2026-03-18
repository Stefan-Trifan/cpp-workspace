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
        cout << "\n" << endl;
        imprimirLaberinto(laberinto);
		cout << "ENCONTRADO " << sol_x << " " << sol_y << endl;
	}
	else
    {
        imprimirLaberinto(laberinto);
		cout << "INALCANZABLE" << endl;
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
bool buscarTesoro(char **laberinto, int *sol_x, int *sol_y, int x, int y)
{
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = { 0, 1, 0,-1};

    // Marcar la casilla actual como parte del camino provisional
    if (laberinto[x][y] == '.')
    {
        laberinto[x][y] = 'X';
    }

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // Poda
        if (nx >= 0 && nx < TAM &&
            ny >= 0 && ny < TAM &&
            laberinto[nx][ny] != '*' &&
            laberinto[nx][ny] != 'X')
        {
            // Si encontramos el tesoro, guardamos coordenadas y mantenemos el camino
            if (laberinto[nx][ny] == 'T')
            {
                *sol_x = nx;
                *sol_y = ny;
                return true;
            }

            // Si es una casilla libre, seguimos explorando
            if (laberinto[nx][ny] == '.')
            {
                if (buscarTesoro(laberinto, sol_x, sol_y, nx, ny))
                {
                    return true;
                }
            }
        }
    }

    // Si ninguna dirección funciona, esta casilla no forma parte del camino correcto
    laberinto[x][y] = '.';
    return false;
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
