#include <iostream>
#include "stack.h"
//#define NDEBUG
#include <cassert>

using namespace std;

bool Stack::push_stack(int element) {
	bool full = is_full_stack();
	assert(!full);
	top++;
	tab[top] = element;
	return true;
}
bool Stack::pop_stack() {
	bool empty = is_empty_stack();
	assert(!empty);
	top--;
	return true;
}
int Stack::peek_stack() {
	bool empty = is_empty_stack();
	return tab[top];
}
int Stack::display_stack(int index) {
	if (!is_empty_stack()) {
		return tab[index];
	}
	return 0;
}
bool  Stack::is_empty_stack() {
	return (top == -1);
}
bool  Stack::is_full_stack() {
	return (top == max_elements - 1);
}
int Stack::actual_stack_size() {
	return top;
}