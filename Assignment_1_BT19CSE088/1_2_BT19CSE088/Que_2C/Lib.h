/*
Name: Sahil Purohit
Enrollment number: BT19CSE088
Date: 3/2/2021
Assignment number: 1
Question number: 2c

This question requires a class Lib with 3 different string data member */

 #ifndef LIB_H
#define LIB_H
#include<iostream>
#include<cstring>
using namespace std;

class Lib
{
    private:
        std::string a,b,c;
    public:
        Lib();
        void seta(std::string );
        void setb(std::string );
        void setc(std::string );
        std::string geta() const;
        std::string getb() const;
        std::string getc() const;
};
#endif