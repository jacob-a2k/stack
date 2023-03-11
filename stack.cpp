#include <iostream>
#include "stack.h"
//#define NDEBUG
#include <cassert>

using namespace std;

Stack::Stack(int stack_size) {
	max_elements = stack_size;
	actual_stack_size = -1;
	tab = new int[max_elements];
}
bool Stack::push_stack(int element) {
	bool full = is_full_stack();
	assert(!full);
	actual_stack_size++;
	tab[actual_stack_size] = element;
	return true;
}
bool Stack::pop_stack() {
	bool empty = is_empty_stack();
	assert(!empty);
	actual_stack_size--;
	return true;
}
int Stack::peek_stack() {
	bool empty = is_empty_stack();
	return tab[actual_stack_size];
}
int Stack::display_stack(int index) {
	if (!is_empty_stack()) {
		return tab[index];
	}
	return 0;
}
bool Stack::is_empty_stack() {
	return (actual_stack_size == -1);
}
bool Stack::is_full_stack() {
	return (actual_stack_size == max_elements - 1);
}
int Stack::get_actual_stack_size() {
	return actual_stack_size;
}