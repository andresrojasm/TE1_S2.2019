#include "ArbolBinario.h"

ArbolBinario::ArbolBinario()
{
    raiz = nullptr;
}

void ArbolBinario::insertar(int num)
{
    if(raiz != nullptr)
    {
        int valor = raiz->getDato();

        if (num < valor) insertarAux(raiz->getIzquierdo(), num, raiz);
        else  insertarAux(raiz->getDerecho(), num, raiz);

    }else
    {
        raiz = new Nodo(num);
    }
}

void ArbolBinario::insertarAux(Nodo* arbol, int num, Nodo* padre)
{
    if (arbol == nullptr)
    {
        arbol = new Nodo(num);
        arbol->setPadre(padre);
    }else
    {
        int valor = arbol->getDato();

        if (num < valor) insertarAux(arbol->getIzquierdo(), num, arbol);
        else  insertarAux(arbol->getDerecho(), num, arbol);
    }
}

void ArbolBinario::eliminar(int num)
{
    if (raiz == nullptr)
    {
        return;

    }else if (num < raiz->getDato())
    {
        eliminarAux(raiz->getIzquierdo(), num);

    }else if (num > raiz->getDato())
    {
        eliminarAux(raiz->getDerecho(), num);

    }else
    {

    }
}

void ArbolBinario::eliminarAux(Nodo* arbol, int num)
{
    if (arbol == nullptr)
    {
        return;

    }else if (num < arbol->getDato())
    {
        eliminarAux(arbol->getIzquierdo(), num);

    }else if (num > arbol->getDato())
    {
        eliminarAux(arbol->getDerecho(), num);

    }else
    {

    }
}

void ArbolBinario::eliminarNodo(Nodo* nodo)
{
    if (nodo->getIzquierdo() && nodo->getDerecho())
    {
        Nodo* menor = minimo(nodo->getDerecho());
        nodo->setDato(menor->getDato());
        eliminarNodo(menor);

    }else if(nodo->getIzquierdo())
    {
        reemplazar(nodo, nodo->getIzquierdo());
        delete nodo;
    }else if(nodo->getDerecho())
    {
        reemplazar(nodo, nodo->getDerecho());
        delete nodo;
    }else
    {
        reemplazar(nodo, nullptr);
        delete nodo;
    }
}

Nodo* ArbolBinario::minimo(Nodo* arbol)
{
    if (arbol == nullptr) return nullptr;
    else if (arbol->getIzquierdo())
    {
        return minimo(arbol->getIzquierdo());

    }else
    {
        return arbol;
    }
}

void ArbolBinario::reemplazar(Nodo* nodo, Nodo* reemplazo)
{
    if (nodo->getPadre())
    {
        if (nodo->getDato() == nodo->getPadre()->getIzquierdo()->getDato())
        {
            nodo->getPadre()->setIzquierdo(reemplazo);

        }else
        {
            nodo->getPadre()->setDerecho(reemplazo);
        }
    }
    if (reemplazo)
    {
        reemplazo->setPadre(nodo->getPadre());
    }
}


void ArbolBinario::mostrarArbol()
{
    if (raiz == nullptr) return;
    else mostrarArbolAux(raiz, 0);
}

void ArbolBinario::mostrarArbolAux(Nodo* arbol, int cont)
{
    if (arbol == nullptr)
    {
        return;
    }else
    {
        mostrarArbolAux(arbol->getDerecho(), cont +1);
        for(int i = 0; i < cont; i++)
        {
            std::cout<<"    ";
        }
        std::cout<< arbol->getDato()<< std::endl;
        mostrarArbolAux(arbol->getIzquierdo(), cont +1);
    }
}
