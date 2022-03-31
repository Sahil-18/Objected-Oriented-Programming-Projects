#include<iostream>
#include "house.h"
#include "wall.h"
#include "clock.h"
using namespace std;

int main()
{
    house h1(52);
    wall w2(12,15);
    clock c1(12,54);
    cout<<"Display of house class";
    // Calling house class display function
    h1.display();
    // Calling wall class display function
    (h1.getwall()).display();
    // Calling clock class display function
    ((h1.getwall()).getclock()).display();

    cout<<"Display of wall class";
    // Calling wall class display function
    w2.display();
    // Calling clock class display function
    (w2.getclock()).display();

    cout<<"Display of clock class";
    // Calling clock class display function
    c1.display();

}