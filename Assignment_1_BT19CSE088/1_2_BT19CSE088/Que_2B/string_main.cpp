#include<iostream>
#include<cstring>
#include "stringf.h"
using namespace std;

int main()
{
    std::string s[3],a;
    cout<<"Enter string 1: ";
    getline(cin, a);
    setstring(s,a,0);
    cout<<"Enter string 2: ";
    getline(cin, a);
    setstring(s,a,1);
    cout<<"Enter string 3: ";
    getline(cin, a);
    setstring(s,a,2);
    cout<<"Strings 1: "<<getstring(s,0)<<"\t2: "<<getstring(s,1)<<"\t3: "<<getstring(s,2)<<endl;
}