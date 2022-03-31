#include<iostream>
#include "Time.h"
using namespace std;

// default constructor
time::time()
{
    settime(0,0,0);
}

// parameterised constructor
time::time(int hr, int min, int sec)
{
    settime(hr, min, sec);
}

void time::display() const
{
    cout<<"Hour: "<<hour<<"\tMinutes: "<<minute<<"\tSeconds: "<<seconds<<endl;
}

// Time Setting function with time checking and if time constriants are not followed, changed it to proper format
void time::settime(int hr, int min, int sec)
{
    seconds=sec%60;                     // If seconds are greater than 59, then it will convert it to range of 0-59
    minute=(min+sec/60)%60;             // If seconds are greater than 59, then its equivalent minutes are added and this value is also checked like above
    hour=(hr+(min+sec/60)/60)%24;       // Similar procedure like minutes calculation is followed
}

int time::gethour() const
{
    return hour;
}
int time::getminute() const
{
    return minute;
}
int time::getseconds() const
{
    return seconds;
}

void time::sum(time t1, time t2)
{
    int hr,min,sec,total_hr,total_sec,total_min;
    total_sec=t1.getseconds()+t2.getseconds();
    total_min=t1.getminute()+t2.getminute();
    total_hr=t1.gethour()+t2.gethour();

    // Here we don't have to check if whether hr,min,sec are within the constraints or not because this is taken in care in settime dunction.
    sec=total_sec%60;
    min=total_min%60;
    hr=total_hr%24;  
    settime(hr,min,sec);  
}