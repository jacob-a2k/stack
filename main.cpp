
#include <iostream>
#include <limits>
#include "stack.h"

using namespace std;

void menu();
int int_validation();
void stack_options(Stack* stack);

int main()
{
    int stack_size;
    cout << "Witaj! Podaj rozmiar stosu: ";
    cin >> stack_size;
    Stack stack(stack_size);
    stack_options(&stack);

}
void stack_options(Stack* stack){
    int option = 0;
    while(option != 5){
        menu();
        option = int_validation();
        switch(option){
        case 1:{
            bool full = stack->IsFull();
            if (!full) {
                cout << "Podaj nowa wartosc: " << endl;
                int element = int_validation();
                stack->Push(element);
            }
            else {
                cout << "Stos jest pelny!" << endl;
            }
        }
            break;
        case 2:{
            bool empty = stack->IsEmpty();
            if (!empty) {
                stack->Pop();
            }
            else {
                cout << "Stos jest pusty!" << endl;
            }
        }
            break;
        case 3:{
            bool empty = stack->IsEmpty();
            if(!empty) {
                int value = stack->Peek();
                cout << value << endl;
            }
            else{
                cout << "Stos jest pusty!" << endl;
            }
        }
            break;
        case 4:{
            cout << endl;
            int index = stack->GetSize() - 1;
            bool empty = stack->IsEmpty();
            if(empty){
                cout << "Stos jest pusty!" << endl;
            }
            while(index >= 0){
                int value = stack->Display(index);
                cout << value << endl;
                index--;
            }
        }
            break;
        case 5: 
            break;
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
