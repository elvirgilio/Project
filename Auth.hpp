#ifndef AUTH_hpp
#define AUTH_hpp

#include "CustomerProfile.hpp"

Class Auth
{
private:
	CustomerProfile Customer;
public:
	void login(string username, string password);
	void signup(string username, string password);
	void forget_pass(string email);
	void logout();
};

#endif
