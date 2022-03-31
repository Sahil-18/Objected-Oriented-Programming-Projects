#include<iostream>
#include<cstring>
#include "Lib.h"
using namespace std;

Lib::Lib()
{
    set("\0",0);
    set("\0",1);
    set("\0",2);
}
void Lib::set(std::string A,int i)
{
    s[i]=A;
}
std::string Lib::get(int i) const
{
    return s[i];
}
