// Representa una matriz de números en coma flotante
// y que además permite realizar operaciones sobre ellos.

#ifndef MATRIZ_H
#define MATRIZ_H

// using namespace std;

class Matriz
{
	private:
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
		 * Constructor por defecto.
		 *
		 * @brief Creará una matriz que no tiene elementos
		 * El número de filas y columnas será 0
		 * El puntero matriz deberá apuntar a NULL.
		 *
		 * Descripción Funcionamiento:
		 * - Inicializa la matriz con sus atributos a 0
		 *
		 * Complejidad
		 * - Temporal: O(1)
		 * - Espacial: O(1)
		 */
		Matriz();

		/**
		 * Constructor por parámetros.
		 *
		 * @brief Inicializará los atributos n_filas y n_columnas
		 * Deberá reservar de forma dinámica espacio para
		 * almacenar una matriz con las dimensiones solicitadas.
		 *
		 * @param n_filas
		 * @param n_columnas
		 * @pre - Numero de filas y columnas mayor a 0
		 *
		 * Descripción Funcionamiento
		 * - Primero llama al constructor por defecto,
		 * despues reserva memoria con new y crea la matriz
		 *
		 * Complejidad
		 * - Temporal: O(n_filas)
		 * - Espacial: O(n_filas × n_columnas)
		 */
		Matriz(int, int);

		/**
		 * Constructor copia.
		 *
		 * @brief Recibirá como parámetro una matriz
		 * Inicializa la matriz con las mismas dimensiones que las del parámetro
		 * Además se deberán copiar sus elementos.
		 *
		 * se utiliza asi: Matriz b(a) o Matriz b = a;
		 *
		 * @param original
		 *
		 * Descripción Funcionamiento
		 * - Primero llama al constructor por defecto,
		 * despues utilizamos el operator= para crar la copia
		 *
		 * Complejidad
		 *  - Temporal: O(n_filas*n_columnas)
		 *  - Espacial: O(n_filas*n_columnas)
		 */
		Matriz(const Matriz &m);

        /**
		 * Destructor
		 *
		 * @brief Libera la memoria que fue reservada de forma dinámica
		 * para almacenar la matriz.
		 *
		 * Descripción Funcionamiento
		 * - Libera memoria de la Matriz con delete y elimina
		 * el objeto
		 *
		 * Complejidad
		 * - Temporal: O(n_filas)
		 * - Espacial: O(1)
		 */
		~Matriz();

		// ___________________________________________________
		// ________________________________________ Operadores

		/**
		 * Operador suma y resta.
		 *
		 * @brief Sobrecarga del operador suma
		 * que permite sumar o restar dos matrices
		 * que tienen las mismas dimensiones.
		 *
		 * Este método deberá crear una matriz nueva con las dimensiones
		 * de las originales y que contiene la suma o resta de ellas elemento a elemento.
		 *
		 * @param m
		 * @return Matriz
		 * @pre Deben coincidir numero de filas
		 * con numero de columnas de las 2 matrices
		 *
		 * Descripción Funcionamiento
		 * - Creamos una matriz resultado con mismo num de filas y de columnas
		 * - Recorremos filas y columnas y sumamos elementos correspondientes
		 * - Guardamos la suma en la matriz resultado
		 *
		 * Complejidad
		 * - Temporal: O(n_filas * n_columnas)
		 * - Espacial: O(n_filas * n_columnas)
		 */
		Matriz operator+(const Matriz &m);
		Matriz operator-(const Matriz &m);

		/**
		 * Operador producto por una matriz.
		 * @brief Este método deberá permitir multiplicar dos matrices que deberán tener dimensiones compatibles según la operación de producto.
		 * El resultado de esta operación será una matriz con el producto de ambas matrices.
		 * NOTA: el producto de dos matrices produce como resultado una matriz con un número de filas igual que el primer operando y un número de columnas igual al segundo operando.
		 *
		 * @param m
		 * @return temp
		 * @pre Num columnas de la primera matriz debe ser igual a num filas
		 * de la segunda matriz
		 *
		 * Descripción Funcionamiento
		 * - Crea una matriz temporal con num filas de la primera matriz y num columnas
		 * de la segunda matriz
		 * - Recorremos filas de la primera matriz con un for, y columnas de la
		 * segunda matriz con otro for.
		 * - Con un tercer for calculamos el sumatorio de las filas y columnas que le
		 * corresponde y guardamos el resultado en temp
		 *
		 * Complejidad
		 * - Temporal: O(n_filas * m.n_columnas * n_columnas)
		 * - Espacial: O(n_filas * m.n_columnas)
		 */
		Matriz operator*(const Matriz &m);

		/**
		 * Operador producto por escalar.
		 *
		 * @brief Se deberá implementar la sobrecarga del operador producto para la multiplicación por un escalar.
		 * Este método deberá crear una matriz nueva con las dimensiones de las originales y cuyos elementos son los de la matriz original multiplicados por el escalar.
		 *
		 * @param escalar
		 * @return temp
		 *
		 * Descripción Funcionamiento
		 * - Multiplica cada uno de los elementos de la matriz con 2 bucles for
		 *
		 * Complejidad
		 * - Temporal: O(n_filas * n_columnas)
		 * - Espacial: O(n_filas * n_columnas)
		 */
		Matriz operator*(double a);

        /**
		 * @brief Realiza la asignación entre dos objetos de la clase Matriz.
		 * Crea una nueva matriz con el resultado.
		 *
		 * @param m la matriz que se va a asignar
		 * @return una nueva matriz con la matriz pasada como parámetro.
		 * @pre -.
		 *
		 * Complejidad
		 *  - Temporal: O(n_filas*n_columnas)
		 *  - Espacial: O(n_filas*n_columnas)
		 */
		Matriz &operator=(const Matriz &m);

		// ___________________________________________________
		// __________________________________ Métodos Públicos

		/**
		 * @brief Se deberá crear una matriz para almacenar la matriz traspuesta de la original.
		 * Una matriz traspuesta es aquella en la que cada elemento (i,j) de la matriz original se encuentra en la posición (j,i) de la matriz destino.
		 *
		 * @return temp
		 *
		 * Descripción Funcionamiento
		 * - Con dos bucles for invertimos la posicion del elemento [i][j] de la matriz
		 * con el elemento [j][i] de la amtriz de destino
		 *
		 * Complejidad
		 * - Temporal: O(n_filas * n_columnas)
		 * - Espacial: O(n_filas * n_columnas)
		 */
		Matriz calcularTraspuesta();

		/**
		 * @brief Este método deberá indicar si la matriz es simétrico o no.
		 * Se considera que una matriz cuadrada es simétrica si los elementos que guardan una posición simétrica respecto de la diagonal principal son iguales.
		 *
		 * @return bool
		 * @pre El numero de filas debe ser igual al numero de columnas
		 *
		 * Descripción Funcionamiento
		 * - Crea una matriz temporal y la igualamos a la traspuesta
		 * - Comparamos las 2 matrices con 2 bucles for
		 * y si algun elemento es distinto no son simetricas
		 *
		 * Complejidad
		 * - Temporal: O(n_filas * n_columnas)
		 * - Espacial: O(n_filas * n_columnas)
		 */
		bool esSimetrica();

		/**
		 * @brief Devuelve el elemento con el máximo valor de toda la matriz.
		 *
		 * @return max
		 * @pre La matriz debe tener al menos 1 fila y una columna
		 *
		 * Descripción Funcionamiento
		 * - Guardamos en la variable max el primer elemento de la matriz
		 * - Recorremos la matriz y comparamos uno por uno sus elementos
		 * - Si encontramos un numero mayor que max lo reemplazamos
		 *
		 * Complejidad
		 * - Temporal: O(n_filas * n_columnas)
		 * - Espacial: O(1)
		 */
		double obtenerMaximo();

		/**
		 * @brief Devuelve el elemento con el mínimo valor de toda la matriz.
		 *
		 * @return min
		 * @pre La matriz debe tener al menos 1 fila y una columna
		 *
		 * Descripción Funcionamiento
		 * - Guardamos en la variable min el primer elemento de la matriz
		 * - Recorremos la matriz y comparamos uno por uno sus elementos
		 * - Si encontramos un numero menor que min lo reemplazamos
		 *
		 * Complejidad
		 * - Temporal: O(n_filas * n_columnas)
		 * - Espacial: O(1)
		 */
		double obtenerMinimo();

        /**
         * @brief El caso base es cuando hay una matriz 2x2.
         *
         * Mientras no tengamos una matriz 2x2, ejecutamos un for por cada elemento de la primera fila, creamos un matriz de adjuntos y dependiendo si está en una columna par o impar, lo sumamos o lo restamos.
         *
         *
         * * Complejidad
         * - Analisis Temporal T(n) =
         * - Orden Temporal O()
         *
         * - Analisis Espacial M(n) =
         * - Orden Espacial O()
         *
         */
		double calcularDeterminante();

		/**
		 * @brief Permite rellenar todos los elementos de la matriz del objeto actual preguntando al usuario.
		 *
		 * La matriz no debe estar vacía
		 *
		 * Complejidad
		 *  - Temporal: O(n_filas*n_columnas)
		 *  - Espacial: O(1)
		 */
		void rellenarManual();

		/**
		 * Permite rellenar todos los elementos de la matriz del objeto actual de forma aleatoria.
		 *
		 * @param seed se utiliza para el generador aleatorio
		 * @return -
		 * @pre La matriz no debe estar vacía
		 *
		 * Complejidad
		 *  - Temporal: O(n_filas*n_columnas)
		 *  - Espacial: O(1)
		 */
		void rellenarAleatorio(long seed);

		/**
		 * @brief Imprime por pantalla todos los elementos de la matriz del objeto actual
		 *
		 * @param -
		 * @return -
		 * @pre La matriz no debe estar vacía.
		 *
		 * Complejidad
		 *  - Temporal: O(n_filas * n_columnas)
		 *  - Espacial: O(1)
		 */
		void mostrarMatriz();

};

#endif // MATRIZ_H
