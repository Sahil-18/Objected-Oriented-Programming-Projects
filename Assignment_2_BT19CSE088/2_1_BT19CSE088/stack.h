#include "Complex.h"
#ifndef STACK_H
#define STACK_H

class Stack
{
private:
    Complex* stck;
    int size;
    int top;
public:
    Stack();
    Stack(int );
    ~Stack();
    void push(Complex Num);
    void pop(Complex* Num);
};

#endif