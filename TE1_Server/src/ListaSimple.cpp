#include "ListaSimple.h"

ListaSimple::ListaSimple()
{
    head = nullptr;
    tamanno = 0;
}

void ListaSimple::insertarInicio(int num)
{
    if (tamanno > 0)
    {
        Nodo* tmp = new Nodo(num);
        tmp->setSiguiente(head);
        head = tmp;
        tamanno++;

    }else
    {
        head = new Nodo(num);
        tamanno++;
    }
}

void ListaSimple::eliminarInicio()
{
    if (tamanno > 0)
    {
        Nodo* tmp = head;
        head->setSiguiente(head->getSiguiente());
        delete tmp;
        tamanno--;
    }
}

void ListaSimple::editar(int num, int pos)
{
    if ((tamanno > 0) && (pos < tamanno) && (pos >= 0))
    {
        Nodo* current = head;
        int i = 0;

        while (i < pos)
        {
            current = current->getSiguiente();
            i++;
        }
        current->setDato(num);
    }
}

int ListaSimple::obtener(int pos)
{
    if ((tamanno > 0) && (pos < tamanno) && (pos >= 0))
    {
        Nodo* current= head;
        int i = 0;

        while (i < pos)
        {
            current = current->getSiguiente();
            i++;
        }

        return current->getDato();
    }
}
