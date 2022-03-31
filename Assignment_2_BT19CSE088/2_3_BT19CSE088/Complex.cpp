#include<iostream>
#include "Complex.h"

using namespace std;

ComplexInteger::ComplexInteger()
{
    setComplex(0,0);
}

ComplexInteger::ComplexInteger(int a, int b)
{
    setComplex(a,b);
}

ComplexInteger::ComplexInteger(const ComplexInteger& C)
{
    setComplex(C.getReal(),C.getImg());
}

void ComplexInteger::setComplex(int x, int y)
{
    real=x;
    imaginary=y;
}

void ComplexInteger::display() const
{
    cout<<real<<"+ i"<<imaginary<<endl;
}

int ComplexInteger::getImg() const
{
    return imaginary;
}

int ComplexInteger::getReal() const
{
    return real;
}

ComplexInteger ComplexInteger::operator+(ComplexInteger Num)
{
    ComplexInteger temp;
    int R,I;
    R=getReal()+Num.getReal();
    I=getImg()+Num.getImg();
    temp.setComplex(R,I);
    return temp;
}

ComplexInteger ComplexInteger::operator-(ComplexInteger Num)
{
    ComplexInteger temp;
    int R,I;
    R=getReal()-Num.getReal();
    I=getImg()-Num.getImg();
    temp.setComplex(R,I);
    return temp;
}

ComplexInteger ComplexInteger::operator*(ComplexInteger Num)
{
    ComplexInteger temp;
    int R,I;
    R=getReal()*Num.getReal()-getImg()*Num.getImg();
    I=getReal()*Num.getImg()+getImg()*Num.getReal();
    temp.setComplex(R,I);
    return temp;
}

ComplexInteger ComplexInteger::operator/(ComplexInteger Num)
{
    ComplexInteger temp;
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

ComplexInteger& ComplexInteger::operator=(ComplexInteger Num)
{
    if(this!=&Num)
    {
        setComplex(Num.getReal(),Num.getImg());
    }
    return *this;
}

ComplexInteger& ComplexInteger::operator~()
{
    int R,I;
    R=getReal();
    I=getImg();
    setComplex(I,R);
    return *this;
}

ostream& operator<<(ostream& out, const ComplexInteger& Num)
{
    out<<Num.getReal()<<"+ i"<<Num.getImg()<<endl;
    return out;
}

istream& operator>>(istream& in,ComplexInteger& Num)
{
    int R,I;
    in>>R>>I;
    Num.setComplex(R,I);
    return in;
}