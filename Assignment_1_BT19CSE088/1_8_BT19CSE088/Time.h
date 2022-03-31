/*
Name: Sahil Purohit
Enrollment number: BT19CSE088
Date: 3/2/2021
Assignment number: 1
Question number: 8

This question requires a class named time whose data member represents time.
Main agenda of this class is to find the sum of two time and represent it in clock time standards.
Member methods also takes care for any violation of time constraints i.e. 69 minutes =1 hour 9 minutes*/

#ifndef TIME_H
#define TIME_H
#include<iostream>
using namespace std;

class time
{
    private:
        int hour;
        int minute;
        int seconds;
    
    public:
        time();
        time(int, int, int);
        void sum(time, time);
        void display() const;
        void settime(int, int, int);
        int gethour() const;
        int getminute() const;
        int getseconds() const;
};
#endif