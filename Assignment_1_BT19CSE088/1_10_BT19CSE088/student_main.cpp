#include<iostream>
#include<cstring>
#include "student.h"
using namespace std;

int main()
{
    int num_stud,i;
    // number of records
    cout<<"Enter number of student records: ";
    cin>>num_stud;
    int Rollno,marks_1,marks_2,marks_3;
    std::string name;

    student stud_rec[num_stud];

    // Entering student records data
    for(i=0;i<num_stud;i++)
    {
        cout<<"Name of student: ";
        cin>>name;
        cout<<"Roll number: ";
        cin>>Rollno;
        cout<<"Marks in first paper: ";
        cin>>marks_1;
        cout<<"Marks in second paper: ";
        cin>>marks_2;
        cout<<"Marks in third paper: ";
        cin>>marks_3;
        
        // Storing this data in the stud_rec class at i^th index
        stud_rec[i].getdata(name,Rollno,marks_1,marks_2,marks_3);
    }

    //Displaying the student record data
    for(i=0;i<num_stud;i++)
    {
        stud_rec[i].displaydata();
    }
    return 0;
}
