
#include <iostream>
#include <limits>
#include "stack.h"

using namespace std;

void menu();
int int_validation();
void stack_options(Stack stack);

int main()
{
    int stack_size;
    cout << "Witaj! Podaj rozmiar stosu: ";
    cin >> stack_size;
    Stack stack(stack_size);
    stack_options(stack);

}
void stack_options(Stack stack){
    for(;;){
        menu();
        int option = int_validation();
        switch(option){
        case 1:{
            bool full = stack.is_full_stack();
            if (!full) {
                cout << "Podaj nowa wartosc: " << endl;
                int element = int_validation();
                bool is_add = stack.push_stack(element);
                if (!is_add) {
                    cout <<"Blad! Nie udalo sie dodac elementu. Sprawdz czy stos nie jest pelny!" << endl;
                }
            }
            else {
                cout << "Stos jest pelny!" << endl;
            }
        }
            break;
        case 2:{
            bool empty = stack.is_empty_stack();
            if (!empty) {
                int is_remove = stack.pop_stack();
                if (!is_remove) {
                    cout << "Blad! Nie udalo sie zdajc elementu. Sprawdz czy stos nie jest pusty!" << endl;
                }
            }
            else {
                cout << "Stos jest pusty!" << endl;
            }
        }
            break;
        case 3:{
            bool empty = stack.is_empty_stack();
            if(!empty) {
                int value = stack.peek_stack();
                cout << value << endl;
            }
            else{
                cout << "Stos jest pusty!" << endl;
            }
        }
            break;
        case 4:{
            cout << endl;
            int index = stack.actual_stack_size();
            bool empty = stack.is_empty_stack();
            if(empty){
                cout << "Stos jest pusty!" << endl;
            }
            while(index != -1){
                int value = stack.display_stack(index);
                cout << value << endl;
                index--;
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
