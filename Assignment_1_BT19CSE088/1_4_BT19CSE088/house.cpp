#include<iostream>
#include "house.h"
#include "wall.h"
#include "clock.h"
using namespace std;

// default constructor
house::house()
{
    plot_no=0;
}
house::house(int plt)
{
    setplot_no(plt);
}
// House Class Display function ehich implicitly call wall class display function
void house::display() const
{
    cout<<"House Class Display\nPlot No: "<<plot_no;
    w1.display();
}

void house::setplot_no(int plt)
{
    plot_no=plt;
}
int house::getplot_no() const
{
    return plot_no;
}
wall house::getwall() const
{
    return w1;
}
