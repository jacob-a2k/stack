#ifndef STACK_H
#define STACK_H

class Stack{
    int capacity;
    int size;
    int *tab;
public:
    Stack(int stack_capacity);
    void push(int);
    bool pop();
    int peek();
    int display(int);
    bool is_empty();
    bool is_full();
    int get_size();

};
#endif // STACK_H