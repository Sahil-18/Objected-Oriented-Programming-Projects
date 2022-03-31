#include<iostream>
#include "info.h"

using namespace std;

info::info(int id, int pw, int code)
{
	setID(id);
	setpassword(pw);
	setuser_code(code);
}

void info::setID(int i)
{
	ID = i;
}

void info::setpassword(int p)
{
	password = p;
}

void info::setuser_code(int u_c)
{
	user_code = u_c;
}

int info::getID() const
{
	return ID;
}

int info::getpassword() const
{
	return password;
}

int info::getuser_code() const
{
	return user_code;
}
