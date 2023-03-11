#include <iostream>
#include "stack.h"
//#define NDEBUG
#include <cassert>

using namespace std;

Stack::Stack(int stack_capacity) {
	capacity = stack_capacity;
	size = 0;
	tab = new int[capacity];
}
bool Stack::push_stack(int element) {
	bool full = is_full_stack();
	assert(!full);
	tab[size] = element;
	size++;
	return true;
}
bool Stack::pop_stack() {
	bool empty = is_empty_stack();
	assert(!empty);
	size--;
	return true;
}
int Stack::peek_stack() {
	bool empty = is_empty_stack();
	return tab[size - 1];
}
int Stack::display_stack(int index) {
	if (!is_empty_stack()) {
		return tab[index];
	}
	return 0;
}
bool Stack::is_empty_stack() {
	return (size == 0);
}
bool Stack::is_full_stack() {
	return (size == capacity);
}
int Stack::get_size() {
	return size;
}