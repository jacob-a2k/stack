
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
            if(stack.top != stack.max_elements-1){
                push_stack(&stack);
            }
            else{
                cout << "Stos jest pelny!" << endl;
            }
        }
            break;
        case 2:
            if(stack.top != -1){
                pop_stack(&stack);
            }
            else{
                cout << "Stos jest pusty!" << endl;
            }
            break;
        case 3:{
            if(stack.top != -1){
                int value = peek_stack(stack);
                    cout << value << endl;
            }
            else{
                cout << "Stos jest pusty!" << endl;
            }
        }
            break;
        case 4:{
            cout << endl;
            int index = stack.top;
            while(index != -1){
                int value = display_stack(stack);
                cout << stack.tab[index--] << endl; // tu jest blad, podczas wyswietlania zeruje sobie ilosc elementow w tablicy!!!!!
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
