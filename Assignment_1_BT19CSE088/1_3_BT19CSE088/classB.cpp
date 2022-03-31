#include<iostream>
#include "classA.h"
#include "classB.h"
using namespace std;

B::B()
{
    seta(0);
    setptr(NULL);
}

void B::seta(int A)
{
    a=A;
}
void B::setptr(A* p)
{
    ptr=p;
}
int B::geta() const
{
    return a;
}
A* B::getptr() const
{
    return ptr;
}