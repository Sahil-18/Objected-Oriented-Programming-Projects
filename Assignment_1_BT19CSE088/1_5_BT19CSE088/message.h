/*
Name: Sahil Purohit
Enrollment number: BT19CSE088
Date: 3/2/2021
Assignment number: 1
Question number: 5

This question requires a class named message. 
In this question we try to print either a default message or default message with other message if provided at initialization*/

#ifndef MESSAGE_H
#define MESSAGE_H
#include<iostream>
#include<cstring>
using namespace std;

class message
{
    private:
        std::string stringA;
    public:
        message();
        message(std::string);
        void print() const;
        void print(std::string ) const;
        void setstring(std::string );
        std::string getstring() const;
};

#endif