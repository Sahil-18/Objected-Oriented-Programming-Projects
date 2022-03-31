#ifndef CLOCK_h
#define CLOCK_h
#include<iostream>
using namespace std;

class clock
{
    private:
        int hour;
        int minute;
    public:
        clock();
        clock(int,int);
        void display() const;
        void sethr(int);
        void setmin(int);
        int gethr() const;
        int getmin() const;
}; 

#endif