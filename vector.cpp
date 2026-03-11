#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector(){}

Vector::~Vector(){}

void Vector::cargarVector(int vec[], int n){
    for(int i=0;i<n;i++){
        cout<<"Ingrese elemento ["<<i<<"]: ";
        cin>>vec[i];
    }
}

void Vector::mostrarVector(int vec[], int n){
    cout<<"Vector: ";
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

void Vector::ordenarVector(int vec[], int n){
    int aux;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(vec[j] > vec[j+1]){
                aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
            }
        }
    }

    cout<<"Vector ordenado correctamente"<<endl;
}

void Vector::eliminarDuplicados(int vec[], int &n){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if(vec[i]==vec[j]){

                for(int k=j;k<n-1;k++){
                    vec[k]=vec[k+1];
                }

                n--;
                j--;
            }
        }
    }

    cout<<"Duplicados eliminados"<<endl;
}
