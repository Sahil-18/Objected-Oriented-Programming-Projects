#include<iostream>
#include "bank.h"
using namespace std;

int main()
{
    int i,num_rec,ID,pswd,bal,amt,type;
    cred my_cred;
    bool flag=false;
    cout<<"Enter number of records";
    cin>>num_rec;
    bank bank_rec[num_rec];

    // Initializing array of bak record
    for(i=0;i<num_rec;i++)
    {
        cout<<"enter id: ";
        cin>>ID;
        cout<<"enter password: ";
        cin>>pswd;
        cout<<"enter balance: ";
        cin>>bal;
        bank_rec[i].setid(ID);
        bank_rec[i].setpswd(pswd);
        bank_rec[i].setbal(bal);
    }

    // Entering the id and password for specific account to perform some operations
    cout<<"Enter Id: ";
    cin>>my_cred.id;
    cout<<"\nEnter Password: ";
    cin>>my_cred.password;

    // Checking if login is successful or not
    for(i=0;i<num_rec && !flag; i++)
    {
        flag=bank_rec[i].Login(my_cred);
    }
    

    if(flag)
    {   
        i--;
        cout<<"Login Successful";
        // using switch case to decide the operations we have to perform
        cout<<"Type 1 to deposite\ttype 2 to withdraw: ";
        cin>>type;
        switch(type)
        {
            case 1:
                cout<<"Enter the amount: ";
                cin>>amt;
                bank_rec[i].deposite(amt);
                break;
            case 2:
                cout<<"Enter the amount: ";
                cin>>amt;
                bank_rec[i].withdraw(amt);
                break;
            default:
                bank_rec[i].display();
        }
    }
    else
    {
        cout<<"Wrong ID or Password. Please try again";
    }
}