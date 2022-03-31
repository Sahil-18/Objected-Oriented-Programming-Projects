/*
Name: Sahil Purohit
Enrollment number: BT19CSE088
Date: 3/2/2021
Assignment number: 1
Question number: 9

This question requires a class named complex which represents a complex number using 2 different data members. 
Primary function of this class is to find the sum of two complex numbers and to store it in other complex number*/

#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
using namespace std;

class complex
{
    private:
        int real,imaginary;
    
    public:
        complex();                  // default constructor
        complex(float);            // constructor with one parameter
        complex(float, float);      // constructor with two parameters
        void getdata(float,float);
        void show() const;
        void sum(complex, complex);

        // Getter and setter methods
        void setreal(float);
        void setimaginary(float);
        float getreal() const;
        float getimaginary() const;
};

#endif
