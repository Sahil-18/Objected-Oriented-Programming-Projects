#include<iostream>
#include<cstring>
#include "bank.h"
using namespace std;

int main()
{
    bank account;
    extern int count;
    account.assign("Sahil",1004987,1000000,"A");
    account.deposit(15000);
    account.withdraw(189000);
    account.display();
    return 0;
}