#include "ColaPrioridad.h"

// Inserta al final y sube hasta su posición correcta
void ColaPrioridad::encolar(int nuevoElemento)
{
	vector.insertarAlFinal(nuevoElemento);

	int pos = vector.getN() - 1;

	// Mientras no sea la raíz y sea menor que su padre intercambiamos
	while (pos > 0)
	{
		int padre = (pos - 1) / 2;
		if (vector.getValor(pos) < vector.getValor(padre))
		{
			// Intercambiar
			int temp = vector.getValor(pos);
			vector.setValor(pos, vector.getValor(padre));
			vector.setValor(padre, temp);
			pos = padre;
		}
		else
		{
			break;
		}
	}
}

// Devuelve la raíz, coloca el último en la raíz y reestructura
int ColaPrioridad::desencolar()
{
	int raiz = vector.getValor(0);

	int ultimo = vector.getValor(vector.getN() - 1);
	vector.setValor(0, ultimo);

	vector.eliminarAlFinal();

	if (!estaVacia())
	{
		reestructurar();
	}

	return raiz;
}

// Indica si la cola está vacía
bool ColaPrioridad::estaVacia()
{
	return vector.getN() == 0;
}

// Reestructura el montículo desde la raíz
void ColaPrioridad::reestructurar()
{
	int pos = 0;
	int n   = vector.getN();

	while (true)
	{
		int izq   = 2 * pos + 1;
		int der   = 2 * pos + 2;
		int menor = pos;

		// Buscamos el menor entre el nodo y sus hijos
		if (izq < n && vector.getValor(izq) < vector.getValor(menor))
		{
			menor = izq;
		}
		if (der < n && vector.getValor(der) < vector.getValor(menor))
		{
			menor = der;
		}

		if (menor != pos)
		{
			// Intercambiar con el hijo menor
			int temp = vector.getValor(pos);
			vector.setValor(pos, vector.getValor(menor));
			vector.setValor(menor, temp);
			pos = menor;
		}
		else
		{
			break; 
		}
	}
}
