
#include <iostream>
#include <limits>
#include "stack.h"

using namespace std;

void menu();
int int_validation();
void stack_options(Stack stack);

int main()
{
    Stack stack;
    cout << "Witaj! Podaj rozmiar stosu: ";
    cin >> stack.max_elements;
    stack.tab = new int[stack.max_elements];
    stack_options(stack);

}
void stack_options(Stack stack){
    for(;;){
        menu();
        int option = int_validation();
        switch(option){
        case 1:{
            cout << "Podaj nowa wartosc: " << endl;
            int element = int_validation();
            bool is_add = push_stack(&stack,element);
            if(!is_add){
                    cout << "Stos jest pelny! Nie udalo sie dodac elementu!" << endl;
            }
        }
            break;
        case 2:{
            int is_remove = pop_stack(&stack);
            if(!is_remove){
                cout << "Blad! Nie udalo sie zdajc elementu. Sprawdz czy stos nie jest pusty!" << endl;
            }
        }
            break;
        case 3:{
            try {
                if (stack.top == -1) {
                    throw stack;
                }
                int value = peek_stack(&stack);
                cout << value << endl;
            }
            catch (Stack stack) {
                cout << "Stos jest pusty!" << endl;
            }
        }
            break;
        case 4:{
            cout << endl;
            int index = stack.top;
            if(stack.top == -1){
                cout << "Stos jest pusty!" << endl;
            }
            while(index != -1){
                int value = display_stack(&stack);
                cout << stack.tab[index--] << endl;
            }
        }
            break;
        case 5:
            exit(0);
        default:
            cout << "Sprawdz ponownie dostepne opcje i tym razem podaj poprawny numer!" << endl;

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
