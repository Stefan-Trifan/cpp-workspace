#include "ListaContigua.h"
#include "assertdomjudge.h"

using namespace std; 

// ___________________________________________________
// _____________________________________ Constructores

ListaContigua::ListaContigua(int incremento)
{
    (void)incremento;
}

ListaContigua::~ListaContigua()
{

}

// ___________________________________________________
// __________________________________ Métodos Públicos

int ListaContigua::getValor(int posicion)
{
    (void)posicion;
    return 0;
}

void ListaContigua::setValor(int posicion, int nuevoValor)
{
    (void)posicion;
    (void)nuevoValor;
}

int ListaContigua::getN()
{
    return 0;
}

int ListaContigua::getCapacidad()
{
    return 0;
}

void ListaContigua::insertar(int posicion, int nuevoValor)
{
    (void)posicion;
    (void)nuevoValor;
}

void ListaContigua::eliminar(int posicion)
{
    (void)posicion;
}

void ListaContigua::concatenar(ListaContigua *listaAConcatenar)
{
    (void)listaAConcatenar;
}

int ListaContigua::buscar(int elementoABuscar)
{
    (void)elementoABuscar;
    return 0;
}

// todo borrar
void ListaContigua::borrarEsteMetodo()
{
    incremento = 0;
    vector = nullptr;
    n = 0;
    capacidad = 0;
}
