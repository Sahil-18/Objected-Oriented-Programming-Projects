#include<iostream>
#include "wall.h"
#include "clock.h"
using namespace std;

// default constructor
wall::wall()
{
    length = 15;
    height=10;
}
wall::wall(int len,int hgt)
{
    setlen(len);
    sethgt(hgt);
}

// Wall class Display function which implicitly call clock class display function
void wall::display() const
{
    cout<<"\nWall Class Display\nLength: "<<length<<"\tHeight"<<height<<endl;
    ck.display();
}

void wall::sethgt(int hgt)
{
    height=hgt;
}
void wall::setlen(int len)
{
    length=len;
}
int wall::gethgt() const
{
    return height;
}
int wall::getlen() const
{
    return length;
}
clock wall::getclock() const
{
    return ck;
}