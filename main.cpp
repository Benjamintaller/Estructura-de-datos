#include "Pila.h"

int main() {
    Pila p;

    p.push("El Principito");
    p.push("1984");
    p.push("Clean Code");

    p.mostrar();

    p.pop();
    p.mostrar();

    return 0;
}
