#include<iostream>
#include "Complex.h"
#include "Matrix.h"

using namespace std;

Matrix::Matrix()
{
    col_size=3;
    row_size=3;
    ptr = new ComplexInteger*[row_size];
    for(int i=0; i< row_size;i++)
    {
        ptr[i]=new ComplexInteger[col_size];
    }
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<col_size;j++)
        {
            ptr[i][j].setComplex(0,0);
        }
    }
}

Matrix::Matrix(int a, int b)
{
    col_size=b;
    row_size=a;
    ptr = new ComplexInteger*[row_size];
    for(int i=0; i< row_size;i++)
    {
        ptr[i]=new ComplexInteger[col_size];
    }
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<col_size;j++)
        {
            ptr[i][j].setComplex(0,0);
        }
    }
}

Matrix::Matrix(const Matrix& M1)
{
    for(int i=0;i<row_size;i++)
    {
        delete [] ptr[i];
    }
    delete [] ptr;
    col_size=M1.col_size;
    row_size=M1.row_size;
    ptr = new ComplexInteger*[row_size];
    for(int i=0; i< row_size;i++)
    {
        ptr[i]=new ComplexInteger[col_size];
    }
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<col_size;j++)
        {
            ptr[i][j]=M1.ptr[i][j];
        }
    }
}

Matrix::~Matrix()
{
    for(int i=0;i<row_size;i++)
    {
        delete [] ptr[i];
    }
    delete [] ptr;
}

int Matrix::getrow() const{
    return row_size;
}

int Matrix::getcol() const{
    return col_size;
}

void Matrix::setsize(int a,int b)
{
    row_size=a;
    col_size=b;
}

void display_matrix(Matrix M)
{
    for(int i=0;i< M.row_size;i++)
    {
        for(int j=0;j< M.col_size;j++)
        {
            cout<<M.ptr[i][j];
        }
        cout<<endl;
    }
}

bool search(Matrix M, const ComplexInteger C1)
{
    bool flag=false;
    for(int i=0;i<M.row_size || !flag;i++)
    {
        for(int j=0;j<M.col_size || !flag;j++)
        {
            if((M.ptr[i][j].getReal()==C1.getReal()) && (M.ptr[i][j].getImg()==C1.getImg()))
            {
                flag=true;
            }
        }
    }
}

Matrix Matrix::operator+(int A)
{
    Matrix temp;
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<col_size;j++)
        {
            temp.ptr[i][j].setComplex(ptr[i][j].getReal()+A,ptr[i][j].getImg());
        }
    }
    return temp;
}

Matrix Matrix::operator+(ComplexInteger C)
{
    Matrix temp;
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<col_size;j++)
        {
            temp.ptr[i][j]=(ptr[i][j]+C);
        }
    }
    return temp;
}

Matrix Matrix::operator+(Matrix M)
{
    Matrix temp;
    if(row_size!=M.getrow() || col_size!=M.getcol())
    {
        throw 0;
    }
    else
    {
        for(int i=0;i<row_size;i++)
        {
            for(int j=0;j<col_size;j++)
            {
                temp.ptr[i][j]=(ptr[i][j]+M.ptr[i][j]);
            }
        }
    }
    return temp;
}

Matrix Matrix::operator-(int A)
{
    Matrix temp;
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<col_size;j++)
        {
            temp.ptr[i][j].setComplex(ptr[i][j].getReal()-A,ptr[i][j].getImg());
        }
    }
    return temp;
}

Matrix Matrix::operator-(ComplexInteger C)
{
    Matrix temp;
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<col_size;j++)
        {
            temp.ptr[i][j]=(ptr[i][j]-C);
        }
    }
    return temp;
}

Matrix Matrix::operator-(Matrix M)
{
    Matrix temp;
    if(row_size!=M.getrow() || col_size!=M.getcol())
    {
        throw 0;
    }
    else
    {
        for(int i=0;i<row_size;i++)
        {
            for(int j=0;j<col_size;j++)
            {
                temp.ptr[i][j]=(ptr[i][j]+M.ptr[i][j]);
            }
        }
    }
    return temp;
}

Matrix Matrix::operator*(int A)
{
    Matrix temp;
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<col_size;j++)
        {
            temp.ptr[i][j].setComplex(ptr[i][j].getReal()*A,ptr[i][j].getImg()*A);
        }
    }
    return temp;
}

Matrix Matrix::operator*(ComplexInteger C)
{
    Matrix temp;
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<col_size;j++)
        {
            temp.ptr[i][j]=(ptr[i][j]*C);
        }
    }
    return temp;
}

Matrix Matrix::operator*(Matrix M)
{
    Matrix temp;
    if(getcol()!=M.getrow())
    {
        throw 0;
    }
    else
    {
        for(int i=0;i<row_size;i++)
        {
            for(int j=0;i<M.col_size;j++)
            {
                for(int k=0;k<col_size;k++)
                {
                    temp.ptr[i][j]=(temp.ptr[i][j]+(ptr[i][k]*M.ptr[k][j]));
                }
            }
        }
    }
    return temp;
}

Matrix& Matrix::operator=(Matrix M)
{
    if(this!=&M)
    {
        for(int i=0;i<this->row_size;i++)
        {
            delete [] this->ptr[i];
        }
        delete [] this->ptr;
        this->col_size=M.col_size;
        this->row_size=M.row_size;
        this->ptr = new ComplexInteger*[M.row_size];
        for(int i=0; i< M.row_size;i++)
        {
            this->ptr[i]=new ComplexInteger[M.col_size];
        }
        for(int i=0;i<M.row_size;i++)
        {
            for(int j=0;j<M.col_size;j++)
            {
                this->ptr[i][j]=M.ptr[i][j];
            }
        }
    }
    return *this;
}

Matrix& Matrix::operator^(int k)
{
    int count=0,i,j;
    if(getrow()*getcol()<k)
    {
        throw 0;
    }
    else
    {
        for(i=0;i<row_size || count<k ;i++)
        {
            for(j=0;j<col_size || count<k ;j++)
            {
                count++;
            }
        }
        ptr[i][j].setComplex(0,0);
    }
}

ostream& operator<<(ostream& out, Matrix& M)
{
    for(int i=0;i<M.getrow();i++)
    {
        for(int j=0;j<M.getcol();j++)
        {
            cout<<M.ptr[i][j];
        }
        cout<<endl;
    }
}

istream& operator>>(istream& in, Matrix& M)
{
    for(int i=0;i<M.getrow();i++)
    {
        for(int j=0;j<M.getcol();j++)
        {
            cin>>M.ptr[i][j];
        }
    }
}