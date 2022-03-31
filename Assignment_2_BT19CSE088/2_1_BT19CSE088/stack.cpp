#include<iostream>
#include "stack.h"
#include "Complex.h"

Stack::Stack()
{
    size=10;
    top=-1;
    stck=new Complex [size];
}

Stack::Stack(int a)
{
    size=a;
    top=-1;
    stck=new Complex [size];
}

Stack::~Stack()
{
    delete [] stck;
}

void Stack::push(Complex Num)
{
    if(top==size-1)
    {
        throw 0;
    }
    else
    {
        top=top+1;
        stck[top]=Num;
    }
}

void Stack::pop(Complex* Num)
{
    if(top==-1)
    {
        throw 0;
    }
    else
    {
        Num->setComplex(stck[top].getReal(),stck[top].getImg());
        top=top-1;
    }
}