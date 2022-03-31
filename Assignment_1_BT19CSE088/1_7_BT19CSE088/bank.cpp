#include<iostream>
#include "bank.h"
using namespace std;
 
 // Constructor definition
bank::bank()
{
    setbal(0);
}
bank::bank(int amt)
{
    setbal(amt);
}

bool bank::Login(cred my_cred)
{   
    bool flag=false;
    
    if(getid()==my_cred.id && getpswd()==my_cred.password)
    {
        flag=true;
    }
    return flag;
}

void bank::display() const
{
    cout<<"Balance in Account: "<<getbal()<<endl;
}

void bank::deposite(int amt)
{
    int total;
    total=getbal()+amt;
    setbal(total);
    display();
}

void bank::withdraw(int amt)
{
    int total;
    total=getbal();
    if(amt<=total)
    {
        total =total-amt;
        cout<<"Amount withdrawn successfully";
        display();
    }
    else
    {           
        cout<<"Balance is insufficient";
    }
}

void bank::setid(int ID)
{
    account_cred.id=ID;
}
void bank::setpswd(int pswd)
{
    account_cred.password=pswd;
}
void bank::setbal(int bal)
{
    balance=bal;
}
int bank::getid() const
{
    return account_cred.id;
}
int bank::getpswd() const
{
    return account_cred.password;
}
int bank::getbal() const
{
    return balance;
}
