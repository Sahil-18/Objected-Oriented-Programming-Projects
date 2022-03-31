/*
Name: Sahil Purohit
Enrollment number: BT19CSE088
Date: 3/2/2021
Assignment number: 1
Question number: 7

This question requires a class named bank in which we define data member which can secure the transaction by verification.
If this verification fails you have to again try it, if successful you can do othe operations*/

#ifndef BANK_H
#define BANK_H
#include<iostream>
using namespace std;

typedef struct credentials
{
    int id, password;
}cred;

class bank
{
    private:
        int balance;
        cred account_cred;
    
    public:
        bank();
        bank(int );
        void display() const;
        void withdraw(int );
        void deposite(int );
        bool Login(cred );
        void setid(int );
        void setpswd(int );
        void setbal(int );

        int getid() const;
        int getpswd() const;
        int getbal() const;
};

#endif