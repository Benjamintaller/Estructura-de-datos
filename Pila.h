#ifndef PILA_H
#define PILA_H

#include "Nodo.h"

class Pila {
private:
    Nodo* cima;

public:
    Pila();

    bool estaVacia();
    void push(string dato);
    void pop();
    void mostrar();
