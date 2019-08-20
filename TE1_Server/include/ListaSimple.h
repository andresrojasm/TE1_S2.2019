#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include <iostream>
#include "Nodo.h"

class ListaSimple
{
private:

    Nodo* head;
    int tamanno;

public:

    ListaSimple();
    void insertarInicio(int num);
    void eliminarInicio();
    void editar(int num, int pos);
    int obtener(int pos);


};

#endif // LISTASIMPLE_H
