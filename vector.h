#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
    Vector();
    ~Vector();

    void cargarVector(int vec[], int n);
    void mostrarVector(int vec[], int n);
    void ordenarVector(int vec[], int n);
    void eliminarDuplicados(int vec[], int &n); // nuevo metodo
};

#endif
