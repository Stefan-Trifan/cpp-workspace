#include "Supermercado.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// clang-format off
#define assertdomjudge(x) if(!(x)){std::cout<<"ERROR"<<std::endl;exit(0);}
// clang-format on

// __________________________________________________
// ______________________________________ Constructor

/** @brief
 * Se encarga de reservar memoria para las n cajas del super
 * Incializa el atributo n_cajas.
 * */
Supermercado::Supermercado(int n)
{

}

// __________________________________________________
// _________________________________ Métodos Públicos

/** @brief
 * Encola el usuario con el id indicado en la caja
 * que se encuentra en la posición n del array de cajas.
 * */
void Supermercado::nuevoUsuario(int n, int id)
{

}

/** @brief
 * Esta función simula
 * - el cierre de la caja n
 * - el reparto de los usuarios en las cajas restantes.
 *
 * Para ello será necesario desencolar todos los usuarios
 * que se encuentran en la caja n en el orden de llegada,
 * e ir encolándolos en las cajas restantes que no estén vacías.
 *
 * Debido a que los usuarios
 * se deberán repartir de forma equitativa
 * en las cajas restantes,
 * iremos recorriendo las cajas por orden de 0 a N-1
 * e introduciremos un único usuario por cada caja que no esté vacía.
 *
 * Cuando hayamos introducido un usuario en cada una de las cajas
 * volveremos a empezar desde la caja 0 hasta que no queden más usuarios.
 * */
void Supermercado::cerrarCaja(int n)
{

}

/** @brief
 * Atiende al usuario que se encuentra en la caja n
 * y por tanto lo desencola de la cola que representa dicha caja.
 * @return: id del usuario atendido.
 * */
int Supermercado::atenderUsuario(int n)
{
    return 0;
}

/** @brief
 * Indica si la caja n tiene o no tiene usuarios esperando.
 * */
bool Supermercado::cajaVacia(int n)
{
    return false;
}
