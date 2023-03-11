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
void Stack::Push(int element) {
	bool full = this->IsFull();
	assert(!full);
	this->tab[this->size] = element;
	this->size++;
}
void Stack::Pop() {
	bool empty = this->IsEmpty();
	assert(!empty);
	this->size--;
}
int Stack::Peek() {
	bool empty = this->IsEmpty();
	return this->tab[this->size - 1];
}
int Stack::Display(int index) {
	if (!this->IsEmpty()) {
		return this->tab[index];
	}
	return 0;
}
bool Stack::IsEmpty() {
	return this->size == 0;
}
bool Stack::IsFull() {
	return this->size == capacity;
}
int Stack::GetSize() {
	return this->size;
}