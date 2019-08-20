#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include <iostream>
#include "Nodo.h"


class ArbolBinario
{
    public:
        ArbolBinario();
        void insertar(int num);
        void eliminar(int num);
        void mostrarArbol();

    private:
        Nodo* raiz;
        void insertarAux(Nodo* arbol,int num, Nodo* padre);
        void mostrarArbolAux(Nodo* arbol, int cont);
        void eliminarAux(Nodo* arbol, int num);
        void eliminarNodo(Nodo* nodo);
        Nodo* minimo(Nodo* arbol);
        void reemplazar(Nodo* nodo, Nodo* reemplazo);
};

#endif // ARBOLBINARIO_H
