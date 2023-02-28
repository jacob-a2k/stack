#include <iostream>

using namespace std;

struct Stack{
    int max_elements;
    int top = -1;
    int *tab;
};
void menu();
void stack_options(Stack stack);
int int_validation();

void push_stack(Stack* stack);
void pop_stack(Stack* stack);
int peek_stack(Stack stack);
void display_stack(Stack stack);
