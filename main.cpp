#include <iostream>
#include "Stack.h"

void agregarNodos(int, Stack*&, int);

int main(){
    int dato = 0, nNodes;
    std::cout<<"Ingrese la cantidad de nodos que desea en su Stack: "; std::cin >> nNodes;
    Stack* S1 = new Stack();
    agregarNodos(nNodes, S1, dato);
    while(S1->n1 != nullptr){
        S1->deleteNode(dato);
        if(S1->n1 != nullptr){
            std::cout<<" , ";
        }
        else{
            std::cout<<" . ";
        }
    }


    return 0;
}

void agregarNodos(int nNodes, Stack*& S1, int dato){
    for(int i = 0; i < nNodes; i++){
        std::cout<<"Ingrese el valor del nodo que desea agregar al Stack: "; std::cin >> dato;
        S1->addNode(dato);
    }
}