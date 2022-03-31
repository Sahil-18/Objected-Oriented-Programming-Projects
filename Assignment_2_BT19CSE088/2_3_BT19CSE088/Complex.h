/* 
Name: Sahil Purohit
Enrolment Number: BT19CSE88
Date: 25/03/2021
Assignment Number: 2
Question Number: 3 */
#include<iostream>
using namespace std;
#ifndef COMPLEX_H
#define COMPLEX_H

class ComplexInteger
{
private:
    int real;
    int imaginary;
public:
    ComplexInteger();
    ComplexInteger(int, int);
    ComplexInteger(const ComplexInteger&);
    void setComplex(int, int);
    void display() const;
    int getReal() const;
    int getImg() const;
    ComplexInteger operator+(ComplexInteger);
    ComplexInteger operator-(ComplexInteger);
    ComplexInteger operator*(ComplexInteger);
    ComplexInteger operator/(ComplexInteger);
    ComplexInteger& operator=(ComplexInteger);
    ComplexInteger& operator~();
    friend ostream& operator<<(ostream& out, const ComplexInteger& Num);
    friend istream& operator>>(istream& in, ComplexInteger& Num);
};

#endif
