#include<iostream>
#include "Matrix.h"
#include "Complex.h"

using namespace std;

int main()
{
    ComplexInteger C1;
    int I1,No_row,No_col;
    bool exists;
    cout<<"Enter two Matrix"<<endl;
    cout<<"Enter size of First matrix"<<endl;
    cin>>No_row>>No_col;
    cout<<"Enter the complex elements of first matrix"<<endl;
    Matrix M1(No_row,No_col);
    cin>>M1;
    cout<<"Enter size of second matrix"<<endl;
    cin>>No_row>>No_col;
    cout<<"Enter the complex elements of second matrix"<<endl;
    Matrix M2(No_row,No_col);
    cout<<"Enter one Integer and one Complex number"<<endl;
    cin>>I1>>C1;
    exists=search(M1,C1);
    if(exists==true)
    {
        cout<<"Complex number exists in Matrix";
    }
    else{
        cout<<"Complex number does not exist in Matrix";
    }
    Matrix M3;
    M3=M1+I1;
    cout<<"Addition is "<<M3;
    M3=M2+C1;
    cout<<"Addition is "<<M3;
    try
    {
        M3=M1+M2;
        cout<<"Addition is "<<M3;
    }
    catch(const int& e)
    {
        cout<<"Size of two matrix is not same";
    }
    M3=M2-I1;
    cout<<"Subtraction is "<<M3;
    M3=M1-C1;
    cout<<"Subtraction is "<<M3;
    try
    {
        M3=M1-M2;
        cout<<"Subtraction is "<<M3;
    }
    catch(const int& e)
    {
        cout<<"Size of two matrix is not same";
    }
    M3=M2*I1;
    cout<<"Multiplication is "<<M3;
    try
    {
        M3=M1*C1;
    }
    catch(const int& e)
    {
        cout<<"Division by zero, not computable";
    }
    cout<<"Multiplication is "<<M3;
    try
    {
        M3=M1*M2;
        cout<<"Multiplication is "<<M3;
    }
    catch(const int& e)
    {
        cout<<"Size of two matrices is compatible of multiplication operation";
    }
    try
    {
        M3=M3^I1;
        cout<<"Matrix after replacement is "<<M3;
    }
    catch(const int& e)
    {
        cout<<"Size of matrix less to accomadate such number of elements";
    }
    return 0;
}