
#include "Stack.h"
#include <iostream>


Stack::Stack() {
    n1 = nullptr;
}

void Stack::addNode(int valueNextNode) {
    Node* temp = new Node();
    temp->value = valueNextNode;
    temp->next = n1;
    n1 = temp;
    itemCounter ++;
    std::cout<<"Node " << itemCounter <<" which value is " << valueNextNode <<" has been added to the stack.\n";
}

void Stack::deleteNode(int &value) {
    Node* aux = n1;
    value = aux->value;
    n1 = aux->next;
    delete aux;
    std::cout <<"Eliminando el nodo cuyo valor es: " << value <<" del Stack.\n";
}

