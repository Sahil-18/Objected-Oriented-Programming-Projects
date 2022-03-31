#include<iostream>
#include "classA.h"
#include "classB.h"
using namespace std;
int main()
{
    A A1;
    A* aptr;
    B B1;
    B* bptr;
    A1.seta(30);
    A1.setptr(&B1);
    // setting values of B1 class using class A1
    bptr=A1.getptr();
    bptr->seta(40);
    bptr->setptr(&A1);
    aptr=B1.getptr();
    cout<<"Value of a in B1 class is: "<<B1.geta()
    <<"\tValue of a in A1 class is: "<<aptr->geta()<<endl;           // Printing value of a in A1 class using B1 class
}