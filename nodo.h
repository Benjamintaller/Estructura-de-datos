#ifndef NODO_H
#define NODO_H

#include <iostream>
using namespace std;

class Nodo {
public:
    string dato;
    Nodo* siguiente;

    Nodo(string d) {
        dato = d;
        siguiente = NULL;
    }
};

#endif
