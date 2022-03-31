#include<iostream>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
    setComplex(0,0);
}

Complex::Complex(int a, int b)
{
    setComplex(a,b);
}

void Complex::setComplex(int x, int y)
{
    real=x;
    imaginary=y;
}

void Complex::display() const
{
    cout<<real<<"+ i"<<imaginary<<endl;
}

int Complex::getImg() const
{
    return imaginary;
}

int Complex::getReal() const
{
    return real;
}

Complex Complex::operator+(Complex Num)
{
    Complex temp;
    int R,I;
    R=getReal()+Num.getReal();
    I=getImg()+Num.getImg();
    temp.setComplex(R,I);
    return temp;
}

Complex Complex::operator-(Complex Num)
{
    Complex temp;
    int R,I;
    R=getReal()-Num.getReal();
    I=getImg()-Num.getImg();
    temp.setComplex(R,I);
    return temp;
}

Complex Complex::operator*(Complex Num)
{
    Complex temp;
    int R,I;
    R=getReal()*Num.getReal()-getImg()*Num.getImg();
    I=getReal()*Num.getImg()+getImg()*Num.getReal();
    temp.setComplex(R,I);
    return temp;
}

Complex Complex::operator/(Complex Num)
{
    Complex temp;
    int R,I,Value;
    if(Num.getReal()==Num.getImg())
    {
        throw 0;
    }
    else
    {
        Value=(Num.getReal()*Num.getReal())-(Num.getImg()*Num.getImg());
        R=(getReal()*Num.getReal()-getImg()*(-Num.getImg()))/Value;
        I=(getReal()*(-Num.getImg())+getImg()*Num.getReal())/Value;
        temp.setComplex(R,I);
        return temp;
    }
}

Complex& Complex::operator=(Complex Num)
{
    if(this!=&Num)
    {
        setComplex(Num.getReal(),Num.getImg());
    }
    return *this;
}

ostream& operator<<(ostream& out, const Complex& Num)
{
    out<<Num.getReal()<<"+ i"<<Num.getImg()<<endl;
    return out;
}

istream& operator>>(istream& in,Complex& Num)
{
    int R,I;
    in>>R>>I;
    Num.setComplex(R,I);
    return in;
}