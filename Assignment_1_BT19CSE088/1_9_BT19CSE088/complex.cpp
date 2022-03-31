#include<iostream>
#include "complex.h"
using namespace std;

// default constructor
complex::complex()
{
    real=0;
    imaginary=0;
}

// constructor with one parameter
complex::complex(float number)
{
    real=number;
    imaginary=number;
}

// constructor with two parameters
complex::complex(float num_r, float num_i)
{
    real=num_r;
    imaginary=num_i;
}

void complex::getdata(float num_r,float num_i)
{
    setreal(num_r);
    setimaginary(num_i);
}

void complex::show() const
{
    cout<<" "<<real<<" +  "<<imaginary<<endl;
}

void complex::sum(complex c1, complex c2)
{
    setreal(c1.getreal()+c2.getreal());
    setimaginary(c1.getimaginary()+c2.getimaginary());
}

// Getter and Setter methods
void complex::setimaginary(float num_i)
{
    imaginary=num_i;
}
void complex::setreal(float num_r)
{
    real=num_r;
}
float complex::getimaginary() const
{
    return imaginary;
}
float complex::getreal() const
{
    return real;
}