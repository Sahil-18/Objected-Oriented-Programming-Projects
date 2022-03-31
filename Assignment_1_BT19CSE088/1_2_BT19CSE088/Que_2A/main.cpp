#include<iostream>
#include<cstring>
#include "struct.h"

int main()
{
    Lib x;
    cout<<"Input three strings: ";
    getline(cin, x.a);
    getline(cin, x.b);
    getline(cin, x.c);
    
    cout<<"x.a: "<<x.a<<"\tx.b: "<<x.b<<"\tx.c: "<<x.c<<endl;
}