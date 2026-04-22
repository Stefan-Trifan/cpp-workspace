#include "Supermercado.h"

// Constructor
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
	int usuarios[1000];
	int total = 0;

	while (!cajas[n].estaVacia())
	{
		usuarios[total] = cajas[n].desencolar();
		total++;
	}

	// Repartimos entre las cajas restantes que no estén vacías
	int repartidos = 0;
	while (repartidos < total)
	{
		for (int i = 0; i < n_cajas && repartidos < total; i++)
		{
			if (i == n)
				continue;
			if (cajas[i].estaVacia())
				continue;
			cajas[i].encolar(usuarios[repartidos]);
			repartidos++;
		}
	}
}

// Atiende al primer usuario de la caja
int Supermercado::atenderUsuario(int n)
{
	return cajas[n].desencolar();
}

// Indica si la caja n está vacía
bool Supermercado::cajaVacia(int n)
{
	return cajas[n].estaVacia();
}
