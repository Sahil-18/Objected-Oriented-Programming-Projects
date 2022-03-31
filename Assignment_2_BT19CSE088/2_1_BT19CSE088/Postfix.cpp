#include<iostream>
#include "Complex.h"
#include "stack.h"

using namespace std;

int main()
{
    char s[250];
    Stack stck[25];
    Complex c1,c2,c3;
    int real,imaginary,i,flag;
    cin.getline(s,250);
    i=0;
    while(s[i]!='\0')
    {
        real=0;
        imaginary=0;
        if(s[i]=='(')
        {
            flag=0;
            while((s[i]!=',')&& (!flag)&&(s[i]!=')'))
            {
                if((s[i]==' ')&&(s[i]!=')'))
                {
                    i++;
                }
                else
                {
                    real=real*10+int(s[i]);
                    i++;
                }
            }
            if((s[i]==',')&&(s[i]!=')'))
            {
                flag=1;
                i++;
            }
            if((s[i]==' ')&&(s[i]!=')'))
            {
                i++;
            }
            while(s[i]!=')' && flag)
            {
                if((s[i]==' ')&&(s[i]!=')'))
                {
                    i++;
                }
                else
                {
                    imaginary=imaginary*10+int(s[i]);
                    i++;
                }
            }
            c1.setComplex(real,imaginary);
            try
            {
                stck->push(c1);
            }
            catch(const int& e)
            {
                cout<<"Stack is Full, Can't push";
            }
            i++;
        }
        else if(s[i]==' ')
        {
            i++;
        }
        else
        {
            try
            {
                stck->pop(&c2);
            }
            catch(const int& e)
            {
                cout<<"Stack is empty, can't pop";
            }
            try
            {
                stck->pop(&c1);
            }
            catch(const int& e)
            {
                cout<<"Stack is empty, can't pop";
            }
            if(s[i]=='+')
            {
                c3=c1+c2;
                try
                {
                    stck->push(c3);
                }
                catch(const int& e)
                {
                    cout<<"Stack is Full, Can't push";
                }
            }
            else if(s[i]=='-')
            {
                c3=c1-c2;
                try
                {
                    stck->push(c3);
                }
                catch(const int& e)
                {
                    cout<<"Stack is Full, Can't push";
                }
            }
            else if(s[i]=='*')
            {
                c3=c1*c2;
                try
                {
                    stck->push(c3);
                }
                catch(const int& e)
                {
                    cout<<"Stack is Full, Can't push";
                }
            }
            else if(s[i]=='/')
            {
                try
                {
                    try
                    {
                        c3=c1/c2;
                    }
                    catch(const int& e)
                    {
                        cout<<"Division by zero, not compatible for division";
                    }
                    stck->push(c3);
                }
                catch(const int& e)
                {
                    cout<<"Stack is Full, Can't push";
                } 
            }
            i++;
        }
    }
    try
    {
        stck->pop(&c3);
    }
    catch(const int& e)
    {
        cout<<"Stack is empty, can't pop";
    }
    cout<<c3;
}
