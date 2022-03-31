#include<iostream>
#include<stdexcept>
#include "Complex.h"
using namespace std;

int main()
{
    ComplexInteger c1,c2,c3;
    cout<<"Enter two complex numbers in the form of integer real number and imaginary number";
    cout<<"Enter C1";
    cin>>c1;
    cout<<"Enter C2";
    cin>>c2;
    c3=(c1+c2);
    cout<<c3;
    c3=(c1-c2);
    cout<<c3;
    c3=(c1*c2);
    try
    {
        c3=(c1/c2);
        cout<<c3;
    }
    catch(const int& e)
    {
        cout<<"Division by zero, not compatable for division";
    }
    c1=~c1;
    cout<<c1;
    c2^c2;
    cout<<c2;  
    return 0;
}