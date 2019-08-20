#ifndef NODO_H
#define NODO_H


class Nodo
{
private:
    int dato;
    Nodo* siguiente;

public:
    Nodo(int num);

    void setDato(int num);
    int getDato();

    void setSiguiente(Nodo* sig);
    Nodo* getSiguiente();
};

#endif // NODO_H
