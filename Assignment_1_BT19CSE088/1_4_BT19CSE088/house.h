/*
Name: Sahil Purohit
Enrollment number: BT19CSE088
Date: 3/2/2021
Assignment number: 1
Question number: 4

This question requires 3 different class which are nested. we have to use member methods to access them.*/

#ifndef HOUSE_H
#define HOUSE_H
#include<iostream>
#include "wall.h"
#include "clock.h"
using namespace std;

class house
{
    private:
        int plot_no;
        wall w1;

    public:
        house();
        house(int);
        void display() const;
        void setplot_no(int);
        int getplot_no() const;
        wall getwall() const;
};

#endif