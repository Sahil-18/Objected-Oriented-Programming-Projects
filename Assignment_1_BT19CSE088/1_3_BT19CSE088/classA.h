/*
Name: Sahil Purohit
Enrollment number: BT19CSE088
Date: 3/2/2021
Assignment number: 1
Question number: 3

This question requires two class A and B, in which there exist a data member which is pointer to other class.
We are trying to use that pointer to use methods of that class*/

#ifndef CLASSA_H
#define CLASSA_H
#include<iostream>
using namespace std;
class B;

class A
{
    private:
        int a;
        B* ptr;
        class C 
        {
            public:
                C();
                void print()
                {
                    cout<<"Hello World";
                }
        };
    public:
        A();
        C getclass();
        void seta(int );
        void setptr(B* );
        int geta() const;
        B* getptr() const;    
};

#endif
