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
void Stack::push(int element) {
	bool full = is_full();
	assert(!full);
	tab[size] = element;
	size++;
}
void Stack::pop() {
	bool empty = is_empty();
	assert(!empty);
	size--;
}
int Stack::peek() {
	bool empty = is_empty();
	return tab[size - 1];
}
int Stack::display(int index) {
	if (!is_empty()) {
		return tab[index];
	}
	return 0;
}
bool Stack::is_empty() {
	return (size == 0);
}
bool Stack::is_full() {
	return (size == capacity);
}
int Stack::get_size() {
	return size;
}