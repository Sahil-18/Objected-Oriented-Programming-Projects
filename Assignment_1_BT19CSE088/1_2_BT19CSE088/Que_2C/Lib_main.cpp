#include<iostream>
#include<cstring>
#include "Lib.h"
using namespace std;

int main()
{
    Lib x;
    std::string a;
    cout<<"Enter a string a: ";
    getline(cin ,a);
    x.seta(a);
    cout<<"Enter a string b: ";
    getline(cin ,a);
    x.setb(a);
    cout<<"Enter a string c: ";
    getline(cin ,a);
    x.setc(a);
    cout<<"String a: "<<x.geta()<<"\tb: "<<x.getb()<<"\tc: "<<x.getc()<<endl;
}