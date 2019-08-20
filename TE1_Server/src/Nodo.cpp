#include "Nodo.h"

Nodo::Nodo(int num)
{
    dato = num;
    siguiente = izquierdo = derecho = padre = nullptr;
}

void Nodo::setDato(int num)
{
    dato = num;
}

int Nodo::getDato()
{
    return dato;
}

void Nodo::setSiguiente(Nodo* sig)
{
    siguiente = sig;
}

Nodo* Nodo::getSiguiente()
{
    return siguiente;
}
