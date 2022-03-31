/*
Name: Sahil Purohit
Enrollment number: BT19CSE088
Date: 3/2/2021
Assignment number: 1
Question number: 6

This question requires a class named bank in which we define data members the details of a bank account.
This member methods are used to perform regular bank transactions*/

#ifndef BANK_H
#define BANK_H
#include<iostream>
#include<cstring>
using namespace std;
static int count=0;
class bank
{   
    private:
        std::string Name;
        int Account_no;
        float Balance;
        std::string Acc_type;
    
    public:
        bank();         // Default constructor                   
        void assign(string, int ,float ,string);
        void deposit(float );
        void withdraw(float );
        void display() const;

        // Setter Methods
        void setname(string);
        void setAcc_no(int );
        void setbalance(float );
        void settype(string);

        // Getter Methods
        int getAcc_no() const;
        float getbalance() const;
        string getname() const;
        string gettype() const;
};

#endif