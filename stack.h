#ifndef STACK_H
#define STACK_H

class Stack{
    int max_elements;
    int top;
    int *tab;
public:
    Stack(int stack_size) {
        max_elements = stack_size;
        top = -1;
        tab = new int[max_elements];
    }
    bool push_stack(int const);
    bool pop_stack();
    int peek_stack();
    int display_stack(int const);
    bool is_empty_stack();
    bool is_full_stack();
    int actual_stack_size();
};
#endif // STACK_H