#include <iostream>
#include "stack.h"
//#define NDEBUG
#include <cassert>

using namespace std;

bool push_stack(Stack* const stack, int const element){
    bool full = is_full_stack(stack);
    assert(!full);
    stack->top++;
    stack->tab[stack->top] = element;
    return true;
}
bool pop_stack(Stack* const stack){
    bool empty = is_empty_stack(stack);
    assert(!empty);
        stack->top--;
        return true;
}
int peek_stack(const Stack* const stack){
    bool empty = is_empty_stack(stack);
    assert(!empty);
        return stack->tab[stack->top];
}
int display_stack(const Stack* const stack){
    if(is_empty_stack(stack)){
        return stack->tab[stack->top];
    }
    return 0;
}
bool is_empty_stack(const Stack* const stack) {
    return (stack->top == -1);
}
bool is_full_stack(const Stack* const stack) {
    return (stack->top == stack->max_elements - 1);
}