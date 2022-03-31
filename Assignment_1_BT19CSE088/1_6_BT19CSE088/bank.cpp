#include<iostream>
#include<cstring>
#include "bank.h"

// Default constructor
bank::bank()
{
    string Name="\0";
    int Account_no=-1;
    float Balance=0;
    string Acc_type="\0";
    count++;
}

void bank::assign(string name, int acc_no, float bal, string type)
{
    setname(name);
    setAcc_no(acc_no);
    setbalance(bal);
    settype(type);
}

void bank::deposit(float amount)
{
    float total;
    total=getbalance()+amount;
    setbalance(total);
}

void bank::withdraw(float amount)
{
    float total,bal;
    bal=getbalance();
    if(amount<bal)
    {
        total=bal-amount;
        setbalance(total);
        cout<<" Successfully withdrawn money";
    }
    else
    {
         cout<<"Not enough balance to withdraw money";  
    }
}
    
void bank::display() const
{
    cout<<"Name: "<<Name<<"\tTotal balance: "<<Balance<<endl;
}

// Setter Methods
void bank::setAcc_no(int acc_no)
{
    Account_no=acc_no;
}
void bank::setbalance(float bal)
{
    Balance=bal;
}
void bank::setname(string name)
{
    Name=name;
}
void bank::settype(string tp)
{
    Acc_type=tp;
}

// Getter Methods
int bank::getAcc_no() const
{
    return Account_no;
}
float bank::getbalance() const
{
    return Balance;
}
std::string bank::getname() const
{
    return Name;
}
std::string bank::gettype() const
{
    return Acc_type;
}