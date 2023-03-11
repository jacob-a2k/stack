#ifndef STACK_H
#define STACK_H

class Stack{
    int capacity;
    int size;
    int *tab;
public:
    Stack(int stack_capacity);
    bool push_stack(int);
    bool pop_stack();
    int peek_stack();
    int display_stack(int);
    bool is_empty_stack();
    bool is_full_stack();
    int get_size();

};
#endif // STACK_H