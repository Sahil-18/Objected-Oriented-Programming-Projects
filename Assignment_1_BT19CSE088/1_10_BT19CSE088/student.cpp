#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

// default constructor
student::student()
{
    name='\0';
    roll_no=0;
    mark1=0;
    mark2=0;
    mark3=0;
    total=0;
    average=0;
}

void student::displaydata() const
{
    cout<<"\nName: "<<name<<"\tRoll No: "<<roll_no<<"\tmarks: "<<mark1<<" "<<mark2<<" "<<mark3<<"\tTotal: "<<total<<"\tAverage: "<<average<<endl;
}

void student::getdata(std::string Name, int Roll_no, int mark_1, int mark_2, int mark_3)
{
    setname(name);
    setrollno(Roll_no);
    setmark1(mark_1);
    setmark2(mark_2);
    setmark3(mark_3);
    settotal();
    setavg();
}

// setter methods
void student::setname(std::string n)
{
    name=n;
}
void student::setrollno(int r)
{
    roll_no = r;
}
void student::setmark1(int m1)
{
    mark1 = m1;
}
void student::setmark2(int m2)
{
    mark2 = m2;
}
void student::setmark3(int m3)
{
    mark3 = m3;
}
void student::settotal()
{
    total=getmark1()+getmark2()+getmark3();
}
void student::setavg()
{
    average=gettotal()/3;
}

// getter methods
int student::getrollno() const
{
    return roll_no;
}
int student::getmark1() const
{
    return mark1;
}
int student::getmark2() const
{
    return mark2;
}
int student::getmark3() const
{
    return mark3;
}
int student::gettotal() const
{
    return total;
}
int student::getavg() const
{
    return average;
}
std::string student::getname() const
{
    return name;
}

