#include<iostream>
#include "complex.h"
using namespace std;

int main()
{
    complex c1(6.39);
    complex c2(5.63,-2.36);
    complex c3;
    c3.sum(c1, c2);
    c3.show();
    return 0;
}