#include<iostream>
#include "Time.h"
using namespace std;

int main()
{
    time t1(15,29,34);
    time t2;
    time t3;
    t2.settime(10,74,69);
    t3.sum(t1, t2);
    t3.display();
    return 0;
}