#ifndef STACK_H
#define STACK_H

class Stack{
    int max_elements;
    int actual_stack_size;
    int *tab;
public:
    Stack(int stack_size);
    bool push_stack(int);
    bool pop_stack();
    int peek_stack();
    int display_stack(int);
    bool is_empty_stack();
    bool is_full_stack();
    int get_actual_stack_size();

};
#endif // STACK_H