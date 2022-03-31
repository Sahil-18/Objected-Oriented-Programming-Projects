#include<iostream>
#include<cstring>
#include "Lib.h"
using namespace std;

int main()
{
    Lib x;
    std::string a;
    cout<<"Enter a string 1: ";
    getline(cin ,a);
    x.set(a,0);
    cout<<"Enter a string 2: ";
    getline(cin ,a);
    x.set(a,1);
    cout<<"Enter a string 3: ";
    getline(cin ,a);
    x.set(a,2);
    cout<<"String 1: "<<x.get(0)<<"\t2: "<<x.get(1)<<"\t3: "<<x.get(2)<<endl;
}