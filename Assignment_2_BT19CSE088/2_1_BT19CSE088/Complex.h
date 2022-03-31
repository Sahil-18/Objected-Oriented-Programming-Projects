/* 
Name: Sahil Purohit
Enrolment Number: BT19CSE88
Date: 25/03/2021
Assignment Number: 2
Question Number: 1 */
#include<iostream>
using namespace std;
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
    int real;
    int imaginary;
public:
    Complex();
    Complex(int, int);
    void setComplex(int, int);
    void display() const;
    int getReal() const;
    int getImg() const;
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    Complex operator/(Complex);
    Complex& operator=(Complex);
    friend ostream& operator<<(ostream& out, const Complex& Num);
    friend istream& operator>>(istream& in, Complex& Num);
};

#endif