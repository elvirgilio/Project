#ifndef CUSTOMERPROFILE_hpp
#define CUSTOMERPROFILE_hpp

#include <iostream>
#include <cstring>

Class CustomerProfile
{
private:
	string name, userName, email, phone, password, passport, country;
	int age;
public:
	void setName(string name);
	string getName();
	void setUserName(string userName);
	string getUserName();
	void setAge(int age);
	int getAge();
	void setEmail(string email);
	string getEmail();
	void setPhone(string phone);
	string getPhone();
	void view();
};

#endif
