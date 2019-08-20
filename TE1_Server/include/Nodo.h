#ifndef NODO_H
#define NODO_H


class Nodo
{
private:
    int dato;
    Nodo* siguiente;

    Nodo* padre;
    Nodo* izquierdo;
    Nodo* derecho;

public:
    Nodo(int num);

    void setDato(int num);
    int getDato();

    void setSiguiente(Nodo* sig);
    Nodo* getSiguiente();

    void setIzquierdo(Nodo* izq);
    Nodo* getIzquierdo();

    void setDerecho(Nodo* der);
    Nodo* getDerecho();

    void setPadre(Nodo* pad);
    Nodo* getPadre();
};

#endif // NODO_H
