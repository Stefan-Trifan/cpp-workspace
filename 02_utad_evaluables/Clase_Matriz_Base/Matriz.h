#ifndef MATRIZ_H
#define MATRIZ_H

using namespace std;

class Matriz
{
	private:
		// _______________________ Atributos
		double **matriz;
		int n_filas;
		int n_columnas;

	public:
		// _______________________ Constructores
		// _______________________ Destructor
		// _______________________ Operadores
		// _______________________ Métodos Públicos

		/**
		 * Realiza la asignación entre dos objetos de la clase Matriz.
		 * Crea una nueva matriz con el resultado.
		 *
		 * @param la matriz que se va a asignar
		 * @return una nueva matriz con la matriz pasada como parámetro.
		 * @pre Ninguno.
		 *
		 * @complexity
		 *  - Complejidad Temporal: O(n_filas*n_columnas)
		 *  - Complejidad Espacial: O(n_filas*n_columnas)
		 */
		Matriz &operator=(const Matriz &m);

		/**
		 * Permite rellenar todos los elementos de la matriz del objeto actual preguntando al usuario.
		 *
		 * @param Ninguno
		 * @return Ninguno
		 * @pre La matriz no debe estar vacía
		 *
		 * @complexity
		 *  - Complejidad Temporal: O(n_filas*n_columnas)
		 *  - Complejidad Espacial: O(1)
		 */
		void rellenarManual();

		/**
		 * Permite rellenar todos los elementos de la matriz del objeto actual de forma aleatoria.
		 *
		 * @param semilla: se utiliza para el generador aleatorio
		 * @return Ninguno
		 * @pre La matriz no debe estar vacía
		 *
		 * @complexity
		 *  - Complejidad Temporal: O(n_filas*n_columnas)
		 *  - Complejidad Espacial: O(1)
		 */
		void rellenarAleatorio(long seed);

		/**
		 * @brief Imprime por pantalla todos los elementos de la matriz del objeto actual
		 * 
		 * @pre La matriz no debe estar vacía.
		 * 
		 * @complexity
		 *  - Temporal: O(n_filas * n_columnas)
		 *  - Espacial: O(1)
		 */
		void mostrarMatriz();
};

#endif // MATRIZ_H
