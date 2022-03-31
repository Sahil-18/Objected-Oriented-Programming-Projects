#include "Complex.h"
#include<iostream>
#ifndef MATRIX_H
#define MATRIX_h

using namespace std;

class Matrix
{
private:
    ComplexInteger** ptr;
    int row_size;
    int col_size;
public:
    Matrix();
    Matrix(int, int);
    Matrix(const Matrix& );
    ~Matrix();
    int getrow() const;
    int getcol() const;
    void setsize(int ,int );
    friend void display_matrix(Matrix );
    friend bool search(Matrix , const ComplexInteger);
    Matrix operator+(int );
    Matrix operator+(ComplexInteger );
    Matrix operator+(Matrix );
    Matrix operator-(int );
    Matrix operator-(ComplexInteger );
    Matrix operator-(Matrix );
    Matrix operator*(int );
    Matrix operator*(ComplexInteger );
    Matrix operator*(Matrix );
    Matrix& operator=(Matrix );
    Matrix& operator^(int );
    friend ostream& operator<<(ostream& out, Matrix& M);
    friend istream& operator>>(istream& in, Matrix& M);
};

#endif