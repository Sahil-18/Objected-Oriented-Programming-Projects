#include<iostream>
#include "classA.h"
#include "classB.h"
using namespace std;

A::A()
{
    seta(0);
    setptr(NULL);
}

void A::seta(int A)
{
    a=A;
}
void A::setptr(B* p)
{
    ptr=p;
}
int A::geta() const
{
    return a;
}
B* A::getptr() const
{
    return ptr;
}

C A::getclass()
{
    return C;
}