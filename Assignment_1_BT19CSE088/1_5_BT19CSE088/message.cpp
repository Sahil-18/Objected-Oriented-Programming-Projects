#include<iostream>
#include<cstring>
#include "message.h"
using namespace std;

message::message()
{
    setstring("Purohit_Sahil");
}

message::message(std::string string1)
{
    setstring(string1);
}

void message::print() const
{
    cout<<"Print only default message:  "<<getstring()<<endl;
}

void message::print(std::string string2) const
{
    cout<<"Print default message and new message: "<<getstring()<<"\t "<<string2<<endl;
}

void message::setstring(std::string A)
{
    stringA=A;
}

std::string message::getstring() const
{
    return stringA;
}