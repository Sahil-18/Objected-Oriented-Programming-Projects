/*
Name: Sahil Purohit
Enrollment number: BT19CSE088
Date: 3/2/2021
Assignment number: 1
Question number: 10

This question requires a class named student. This class has data members which stores students personal dat, marks etc. 
Methods used in this class gives us the total marks scored and average of them */

#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<cstring>
using namespace std;

class student
{
    private:
        std::string name;
        int roll_no;
        int mark1;
        int mark2;
        int mark3;
        int total;
        int average;
    public:
        student();
        void getdata(std::string , int, int, int, int);
        void displaydata() const;
        void setname(std::string);
        void setrollno(int);
        void setmark1(int);
        void setmark2(int);
        void setmark3(int);
        void settotal();
        void setavg();
        
        int getrollno() const;
        int getmark1() const;
        int getmark2() const;
        int getmark3() const;
        int gettotal() const;
        int getavg() const;
        std::string getname() const;
};

#endif