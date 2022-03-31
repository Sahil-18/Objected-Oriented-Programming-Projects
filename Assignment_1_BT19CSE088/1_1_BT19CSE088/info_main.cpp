#include<iostream>
#include<string>
#include "info.h"

using namespace std;

int main()
{
	info my_info(12, 189, 14);
	int my_id, my_password, my_usercode;
	
	// Accessing member functions
	my_id = my_info.getID();                         // Error at this line. Error is ''int info::getID() const' is protected within this context'
	my_password = my_info.getpassword();             // Error at this line. Error is ''int info::getpassword() const' is private within this context'
	my_usercode = my_info.getuser_code();
	
	// Accessing data members
	cout << "ID = " << my_info.ID <<                // error: 'int info::ID' is protected within this context
     "\t password = " << my_info.password <<        // error: 'int info::password' is private within this context
      "\t user_code = " << my_info.user_code << endl; 
	return 0;
}