#include <iostream>
#include <limits>
#include "stack.h"

void stack_options(Stack stack){
    for(;;){
        menu();
        int option = int_validation();
        switch(option){
        case 1:
            push_stack(&stack);;
            break;
        case 2:
            pop_stack(&stack);
            break;
        case 3:{
            int value = peek_stack(stack);
            if(value != NULL){
                cout << "Wartosc znajdujaca sie na szczycie stosu wynosi: " << value << "." << endl;
            }
        }
            break;
        case 4:
            cout << endl;
            display_stack(stack);
            break;
        case 5:
            exit(0);
        default:
            cout << "Sprawdz ponownie dostepne opcje i tym razem podaj poprawny numer!" << endl;

        }
    }
}
void push_stack(Stack* stack){
    if(stack->top == stack->max_elements-1){
        cout << "Stos jest pelny!" << endl;
        return;
    }
    cout << "Podaj nowy element: ";
    int element = int_validation();
    stack->top++;
    stack->tab[stack->top] = element;
}
void pop_stack(Stack* stack){
    if(stack->top == -1){
        cout << "Stos jest pusty!" << endl;
        return;
    }
    stack->top--;
}
int peek_stack(Stack stack){
    if(stack.top == -1){
        cout << "Stos nie posiada wierzcholka, poniewaz jest pusty!" << endl;
        return 0;
    }
    return stack.tab[stack.top];
}
void display_stack(Stack stack){
    if(stack.top == -1){
        cout << "Stos nie posiada elementow do wyswietlenia! " << endl;
        return;
    }
    else{
        while(stack.top != -1){
            cout << stack.tab[stack.top];
            stack.top--;
            cout << endl;
        }
    }
}
void menu(){
    cout << "\nWybierz jedna z dostepnych opcji" << endl;
    cout << "----------------------------------" << endl;
    cout << " 1.Wstaw do stosu" << endl;
    cout << " 2.Zdejmij ze stosu" << endl;
    cout << " 3.Podejrzyj ostatni element stosu" << endl;
    cout << " 4.Wyswietl zawartosc stosu" << endl;
    cout << " 5.Exit!" << endl;
    cout << "----------------------------------" << endl;
}
int int_validation(){
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
