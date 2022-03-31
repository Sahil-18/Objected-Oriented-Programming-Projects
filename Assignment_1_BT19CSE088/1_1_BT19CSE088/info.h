/*
Name: Sahil Purohit
Enrollment number: BT19CSE088
Date: 3/2/2021
Assignment number: 1
Question number: 1

This question requires a class on which we can show errors when we access different data member and member function with different access control*/

#ifndef INFO_H
#define INFO_H

class info {
private:
	int password;
	int getpassword() const;

protected:
	int ID;
	int getID() const;

public:
	int user_code;
	info(int = 0, int = 0, int = 0);			// default constructor
	// Set functions
	void setID(int);
	void setpassword(int);
	void setuser_code(int);
	// Get functiond
	int getuser_code() const;
};

#endif