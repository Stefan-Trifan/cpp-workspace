#include "Supermercado.h"

// Constructor: reserva memoria para las n cajas
Supermercado::Supermercado(int n)
{
	n_cajas = n;
	cajas   = new ColaPrioridad[n];
}

// Encola el usuario con id 'id' en la caja n
void Supermercado::nuevoUsuario(int n, int id)
{
	cajas[n].encolar(id);
}

// Cierra la caja n y reparte sus usuarios entre las demás cajas no vacías
void Supermercado::cerrarCaja(int n)
{
	// Primero recogemos todos los usuarios de la caja n en orden de llegada
	// Los guardamos en un array temporal simple
	int usuarios[1000]; // suficiente para el ejercicio
	int total = 0;

	while (!cajas[n].estaVacia())
	{
		usuarios[total] = cajas[n].desencolar();
		total++;
	}

	// Repartimos de forma equitativa entre las cajas restantes que no estén vacías
	// Recorremos de 0 a n_cajas-1, saltando la caja n y las vacías
	int repartidos = 0;
	while (repartidos < total)
	{
		for (int i = 0; i < n_cajas && repartidos < total; i++)
		{
			if (i == n)
				continue; // saltamos la caja cerrada
			if (cajas[i].estaVacia())
				continue; // saltamos las vacías
			cajas[i].encolar(usuarios[repartidos]);
			repartidos++;
		}
	}
}

// Atiende al primer usuario de la caja n (lo desencola) y devuelve su id
int Supermercado::atenderUsuario(int n)
{
	return cajas[n].desencolar();
}

// Indica si la caja n está vacía
bool Supermercado::cajaVacia(int n)
{
	return cajas[n].estaVacia();
}
