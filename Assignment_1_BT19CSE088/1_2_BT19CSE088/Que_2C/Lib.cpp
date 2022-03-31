#include<iostream>
#include<cstring>
#include "Lib.h"
using namespace std;

Lib::Lib()
{
    seta("\0");
    setb("\0");
    setc("\0");
}
void Lib::seta(std::string A)
{
    a=A;
}
void Lib::setb(std::string B)
{
    b=B;
}
void Lib::setc(std::string C)
{
    c=C;
}
std::string Lib::geta() const
{
    return a;
}
std::string Lib::getb() const
{
    return b;
}
std::string Lib::getc() const
{
    return c;
}