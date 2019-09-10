#ifndef PILAS_STACK_H
#define PILAS_STACK_H

struct Node{
    int value;
    Node* next;
};

class Stack{
private:
    int itemCounter = 0;
public:
    Node* n1;
    Stack();
    void addNode(int);
    void deleteNode(int&);
};


#endif //PILAS_STACK_H
