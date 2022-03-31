#include<iostream>
#include "clock.h"
using namespace std;

// default constructor
clock::clock()
{
    hour=0;
    minute=0;
}
clock::clock(int hr,int min)
{
    sethr(hr);
    setmin(min);
}

// display function of clock class
void clock::display() const
{
    cout<<"\nClock class Display\nHour: "<<hour<<"\tMinutes"<<minute<<endl;
}

void clock::sethr(int hr)
{
    hour=hr;
}
void clock::setmin(int min)
{
    minute=min;
}
int clock::gethr() const
{
    return hour;
}
int clock::getmin() const
{
    return minute;
}