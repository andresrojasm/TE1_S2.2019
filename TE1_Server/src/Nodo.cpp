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

void Nodo::setIzquierdo(Nodo* izq)
{
    izquierdo = izq;
}

Nodo* Nodo::getIzquierdo()
{
    return izquierdo;
}

void Nodo::setDerecho(Nodo* der)
{
    derecho = der;
}

Nodo* Nodo::getDerecho()
{
    return derecho;
}

void Nodo::setPadre(Nodo* pad)
{
    padre = pad;
}

Nodo* Nodo::getPadre()
{
    return padre;
}
