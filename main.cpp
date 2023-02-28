#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    Stack stack;
    cout << "Witaj! Podaj rozmiar stosu: ";
    cin >> stack.max_elements;
    stack.tab = new int[stack.max_elements];
    stack_options(stack);

}
