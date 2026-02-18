// Representa una matriz de números en coma flotante
// y que además permite realizar operaciones sobre ellos.

#ifndef MATRIZ_H
#define MATRIZ_H

// using namespace std; 

class Matriz
{
	public:
		// ___________________________________________________
		// _________________________________________ Atributos

		/**
		 * Puntero a una matriz bidimensional
		 * Permitirá almacenar n_filas x n_columnas elementos de tipo double.
		 * Debe ser reservada de forma dinámica en sus constructores
		 * Debe ser liberada en su destructor.
		 */
		double **matriz;

		int n_filas;
		int n_columnas;

	public:
		// ___________________________________________________
		// _____________________________________ Constructores

		/**
		 * Creará una matriz que no tiene elementos
		 * El número de filas y columnas será 0
		 * El puntero matriz deberá apuntar a NULL.
		 */
		// Constructor por defecto.
		Matriz();

		/**
		 * Matriz(int n_filas, int n_columnas)
		 * Inicializará los atributos n_filas y n_columnas
		 * Deberá reservar de forma dinámica espacio para
		 * almacenar una matriz con las dimensiones solicitadas.
		 */
		// Constructor por parámetros.
		Matriz(int n_filas, int n_columnas);

		/**
		 * Recibirá como parámetro una matriz
		 * Inicializa la matriz con las mismas dimensiones que las del parámetro
		 * Además se deberán copiar sus elementos.
		 * 
		 * se utiliza asi: Matriz b(a) o Matriz b = a;
		 */
		// Constructor copia.
		Matriz(const Matriz &original);

		// ___________________________________________________
		// ________________________________________ Destructor

		/**
		 * Libera la memoria que fue reservada de forma dinámica
		 * para almacenar la matriz.
		 */
		// Destructor.
		~Matriz();

		// ___________________________________________________
		// ________________________________________ Operadores

		/**
		 * Se deberá implementar la sobrecarga del operador suma
		 * que permite sumar o restar dos matrices
		 * que tienen las mismas dimensiones.
		 * 
		 * Este método deberá crear una matriz nueva con las dimensiones 
		 * de las originales y que contiene la suma o resta de ellas elemento a elemento.
		 */
		// todo Operador suma y resta.
		Matriz operator+(const Matriz &m) const;
		Matriz operator-(const Matriz &m) const;

		/**
		 * Operador producto por escalar.
		 * Se deberá implementar la sobrecarga del operador producto para la multiplicación por un escalar. 
		 * Este método deberá crear una matriz nueva con las dimensiones de las originales y cuyos elementos son los de la matriz original multiplicados por el escalar.
		 */
		Matriz operator*(double escalar) const;

		/**
		 * Este método deberá permitir multiplicar dos matrices que deberán tener dimensiones compatibles según la operación de producto.
		 * El resultado de esta operación será una matriz con el producto de ambas matrices.
		 * NOTA: el producto de dos matrices produce como resultado una matriz con un número de filas igual que el primer operando y un número de columnas igual al segundo operando.
		 */
		// todo Operador producto por una matriz.
		Matriz operator*(const Matriz &m) const;

		/**
		 * Realiza la asignación entre dos objetos de la clase Matriz.
		 * Crea una nueva matriz con el resultado.
		 *
		 * @param m la matriz que se va a asignar
		 * @return una nueva matriz con la matriz pasada como parámetro.
		 * @pre -.
		 *
		 * @complexity
		 *  - Complejidad Temporal: O(n_filas*n_columnas)
		 *  - Complejidad Espacial: O(n_filas*n_columnas)
		 */
		Matriz &operator=(const Matriz &m);

		// ___________________________________________________
		// __________________________________ Métodos Públicos

		/**
		 * Se deberá crear una matriz para almacenar la matriz traspuesta de la original. 
		 * Una matriz traspuesta es aquella en la que cada elemento (i,j) de la matriz original se encuentra en la posición (j,i) de la matriz destino.
		 */
		Matriz calcularTraspuesta() const;

		/**
		 * Este método deberá indicar si la matriz es simétrico o no. 
		 * Se considera que una matriz cuadrada es simétrica si los elementos que guardan una posición simétrica respecto de la diagonal principal son iguales.
		 */
		// todo
		bool esSimetrica();

		/**
		 * Devuelve el elemento con el máximo valor de toda la matriz.
		 */
		// todo 
		double obtenerMaximo();

		/**
		 * Devuelve el elemento con el mínimo valor de toda la matriz.
		 */
		// todo 
		double obtenerMinimo();

		/**
		 * Permite rellenar todos los elementos de la matriz del objeto actual preguntando al usuario.
		 *
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
		 * @param seed se utiliza para el generador aleatorio
		 * @return -
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
		 * @param -
		 * @return -
		 * @pre La matriz no debe estar vacía.
		 *
		 * @complexity
		 *  - Temporal: O(n_filas * n_columnas)
		 *  - Espacial: O(1)
		 */
		void mostrarMatriz();

	private:
		// ___________________________________________________
		// __________________________________ Métodos Privados
};

#endif // MATRIZ_H
