#include <iostream>
#include "stack.h"
//#define NDEBUG
#include <cassert>

using namespace std;

Stack::Stack(int capacity) {
	this->capacity = capacity;
	this->size = 0;
	this->tab = new int[this->capacity];
}
void Stack::push(int element) {
	bool full = this->is_full();
	assert(!full);
	this->tab[this->size] = element;
	this->size++;
}
void Stack::pop() {
	bool empty = this->is_empty();
	assert(!empty);
	this->size--;
}
int Stack::peek() {
	bool empty = this->is_empty();
	return this->tab[this->size - 1];
}
int Stack::display(int index) {
	if (!this->is_empty()) {
		return this->tab[index];
	}
	return 0;
}
bool Stack::is_empty() {
	return this->size == 0;
}
bool Stack::is_full() {
	return this->size == capacity;
}
int Stack::get_size() {
	return this->size;
}