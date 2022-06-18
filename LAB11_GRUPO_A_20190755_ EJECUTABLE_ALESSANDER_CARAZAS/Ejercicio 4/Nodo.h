#ifndef NODO_H
#define NODO_H

class Nodo{

  private:

    int dato;
    Nodo* siguiente;

  public:

    void setDato(int);
    int getDato();
    void setSiguiente(Nodo*);
    Nodo* getSiguiente();
};

#endif // NODO_H
