#include <iostream>
#include "stack.h"
//#define NDEBUG
#include <cassert>

using namespace std;

bool push_stack(Stack* const stack, int const element){
    assert(stack->top != stack->max_elements - 1);
       // return false;
    stack->top++;
    stack->tab[stack->top] = element;
    return true;
}
bool pop_stack(Stack* const stack){
    assert(stack->top != -1);
        stack->top--;
        return true;
    //return false;
}
int peek_stack(const Stack* const stack){
    assert(stack->top != -1);
        return stack->tab[stack->top];
    //return 0;
}
int display_stack(const Stack* const stack){
    if(stack->top != -1){
        return stack->tab[stack->top];
    }
    return 0;
}

