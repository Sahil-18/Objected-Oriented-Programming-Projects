/*
Name: Sahil Purohit
Enrollment number: BT19CSE088
Date: 3/2/2021
Assignment number: 1
Question number: 2D

This question requires a class Lib in which private string array of size 3 is the data member.
*/

#ifndef LIB_H
#define LIB_H
#include<iostream>
#include<cstring>
using namespace std;

class Lib
{
    private:
        std::string s[3];
    public:
        Lib();
        void set(std::string ,int);
        std::string get(int) const;
};
#endif