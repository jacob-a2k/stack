#ifndef STACK_H
#define STACK_H

struct Stack{
    int max_elements;
    int top = -1;
    int *tab;
};
void push_stack(Stack*);
void pop_stack(Stack*);
int peek_stack(Stack);
int display_stack(Stack);

#endif // STACK_H
