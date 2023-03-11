#ifndef STACK_H
#define STACK_H

class Stack{
private:
    int capacity;
    int size;
    int *tab;
public:
    Stack(int capacity);
    ~Stack();
    void Push(int);
    void Pop();
    int Peek() const;
    int Display(int) const;
    bool IsEmpty() const;
    bool IsFull() const;
    int GetSize() const;

};
#endif // STACK_H