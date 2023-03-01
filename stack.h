#ifndef STACK_H
#define STACK_H

struct Stack{
    int max_elements;
    int top = -1;
    int *tab;
};
bool push_stack(Stack* const ,int const);
bool pop_stack(Stack* const);
int peek_stack(const Stack* const);
int display_stack(const Stack* const);

#endif // STACK_H
