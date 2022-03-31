#ifndef WALL_H
#define WALL_H
#include<iostream>
#include "clock.h"
using namespace std;

class wall
{
    private:
        int length,height;
        clock ck;
    
    public:
        wall();
        wall(int,int);
        void display() const;
        void setlen(int);
        void sethgt(int);
        int getlen() const;
        int gethgt() const;
        clock getclock() const;
};

#endif