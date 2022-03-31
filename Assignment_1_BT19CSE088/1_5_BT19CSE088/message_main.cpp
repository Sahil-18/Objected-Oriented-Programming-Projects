#include<iostream>
#include<cstring>
#include "message.h"
using namespace std;

int main()
{
    message msg1;
    message msg2("Sahil_Purohit");
    std::string S;
    cout<<"Enter a string: ";
    getline(cin , S);
    msg1.print();
    msg1.print(S);
    msg2.print();
    msg2.print(S);
    return 0;
}