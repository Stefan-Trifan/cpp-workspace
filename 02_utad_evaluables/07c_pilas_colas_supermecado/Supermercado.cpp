#include "Supermercado.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// clang-format off
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}
// clang-format on

// =========================================================
// * Constructor
// =========================================================

/** @brief
 * Se encarga de reservar memoria para las n cajas del super
 * Incializa el atributo n_cajas.
 * */
Supermercado::Supermercado(int n)
{
    cajas = new Cola[n];
    n_cajas = n;
}

// =========================================================
// * Métodos Públicos
// =========================================================

/** @brief
 * Encola el usuario con el id indicado en la caja
 * que se encuentra en la posición pos del array de cajas.
 * */
void Supermercado::nuevoUsuario(int pos, int id)
{
    assertdomjudge(pos >= 0 && pos < n_cajas);

    cajas[pos].encolar(id);
}

/** @brief
 * Esta función simula
 * - El cierre de la caja pos
 * - El reparto de los usuarios en las cajas restantes.
 *
 * Para ello será necesario desencolar todos los usuarios
 * que se encuentran en la caja n en el orden de llegada,
 * e ir encolándolos en las cajas restantes
 * que no estén vacías.
 *
 * Debido a que los usuarios
 * se deberán repartir de forma equitativa
 * en las cajas restantes,
 * iremos recorriendo las cajas por orden de 0 a N-1
 * e introduciremos un único usuario por cada caja
 * que no esté vacía.
 *
 * Cuando hayamos introducido un usuario en cada una de las cajas
 * volveremos a empezar desde la caja 0
 * hasta que no queden más usuarios.
 * */
// todo
void Supermercado::cerrarCaja(int pos)
{
    // Repartimos clientes
    int i = 0;
    while(!cajas[pos].estaVacia())
    {
        if(i != pos)
        {
            nuevoUsuario(i, cajas[pos].desencolar());
        }
        i++;
        if(i == n_cajas)
        {
            i = 0;
        }
    }
}

/** @brief
 * Atiende al usuario que se encuentra en la caja pos
 * y por tanto lo desencola de la cola que representa dicha caja.
 * @return: id del usuario atendido.
 * */
int Supermercado::atenderUsuario(int pos)
{
    assertdomjudge(pos >= 0 && pos < n_cajas);

    return cajas[pos].desencolar();
}

/** @brief
 * Indica si la caja pos tiene o no tiene usuarios esperando.
 * */
bool Supermercado::cajaVacia(int pos)
{
    assertdomjudge(pos >= 0 && pos < n_cajas);

    return cajas[pos].estaVacia();
}

void Supermercado::toString()
{
    for(int i = 0; i < n_cajas; i++)
    {
        cout << "Caja " << i << '\n';
        cajas[i].toString();
        cout << '\n';
    }
}