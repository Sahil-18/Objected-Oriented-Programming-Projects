#ifndef CLASSB_H
#define CLASSB_H
#include<iostream>
using namespace std;

class A;

class B
{
    private:
        int a;
        A* ptr;
    public:
        B();
        void seta(int );
        void setptr(A* );
        int geta() const;
        A* getptr() const;    
};

#endif
