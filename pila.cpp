#include "Pila.h"

Pila::Pila() {
    cima = NULL;
}

bool Pila::estaVacia() {
    return cima == NULL;
}


void Pila::push(string dato) {
    Nodo* nuevo = new Nodo(dato);
    nuevo->siguiente = cima;
    cima = nuevo;
}

void Pila::pop() {
    if (estaVacia()) {
        cout << "Pila vacía\n";
    }
    else {
        Nodo* aux = cima;
        cout << "Eliminando: " << aux->dato << endl;
        cima = cima->siguiente;
        delete aux;
    }
}

void Pila::mostrar() {
    Nodo* aux = cima;
    while (aux != NULL) {
        cout << aux->dato << endl;
        aux = aux->siguiente;
    }
}
