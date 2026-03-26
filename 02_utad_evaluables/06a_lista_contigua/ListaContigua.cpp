#include "ListaContigua.h"
#include "assertdomjudge.h"

using namespace std;

// ___________________________________________________
// _____________________________________ Constructores

ListaContigua::ListaContigua(int incremento)
{
    assertdomjudge(incremento >= 1);
    this->n = 0;
    this->capacidad = incremento;
    this->incremento = incremento;
    this->vector = new int[this->capacidad];
}

// todo
ListaContigua::~ListaContigua()
{

}

// ___________________________________________________
// ____________________________________________ Getter

// todo
int ListaContigua::getN()
{
    return this->n;
}

// todo
int ListaContigua::getValor(int posicion)
{
    return this->vector[posicion];
}


// todo
int ListaContigua::getCapacidad()
{
    return 0;
}

// ___________________________________________________
// ____________________________________________ Setter

// todo
void ListaContigua::setValor(int posicion, int nuevoValor)
{
    (void)posicion;
    (void)nuevoValor;
}


// ___________________________________________________
// __________________________________ Métodos Públicos

// todo
void ListaContigua::insertar(int posicion, int nuevoValor)
{
    assertdomjudge(posicion >= 0);
    vector[posicion] = nuevoValor;
}

// todo
void ListaContigua::eliminar(int posicion)
{
    (void)posicion;
}

// todo
void ListaContigua::concatenar(ListaContigua *listaAConcatenar)
{
    (void)listaAConcatenar;
}

// todo
int ListaContigua::buscar(int elementoABuscar)
{
    (void)elementoABuscar;
    return 0;
}

void ListaContigua::toString()
{
    for(int i = 0; i < capacidad; i++)
    {
        cout << '[' << vector[i] << ']';
    }
    cout << endl;
    for(int i = 0; i < capacidad; i++)
    {
        cout << ' ' << i << ' ';
    }
    cout << endl;
}