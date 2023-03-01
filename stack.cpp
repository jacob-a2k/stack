#include <iostream>
#include <limits>
#include "stack.h"

using namespace std;

int put_number();

void push_stack(Stack* stack){
    if(stack->top == stack->max_elements-1){
        return;
    }
    int element = put_number();
    stack->top++;
    stack->tab[stack->top] = element;
}
void pop_stack(Stack* stack){
    stack->top--;
}
int peek_stack(Stack stack){
    return stack.tab[stack.top];
}
int display_stack(Stack stack){
    return stack.tab[stack.top];
}
int put_number(){
    int number;
    cin >> number;
    while(!cin.good()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Nalezy podac numer!" << endl;
        cin >> number;
    }
    return number;
}
