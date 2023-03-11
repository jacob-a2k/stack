#ifndef STACK_H
#define STACK_H

class Stack{
    int capacity;
    int size;
    int *tab;
public:
    Stack(int capacity);
    void Push(int);
    void Pop();
    int Peek();
    int Display(int);
    bool IsEmpty();
    bool IsFull();
    int GetSize();

};
#endif // STACK_H