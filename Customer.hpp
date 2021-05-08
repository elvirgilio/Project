#ifndef CUSTOMER_hpp
#define CUSTOMER_hpp

#include "CustomerProfile.hpp"
#include "Wallet.hpp"
#include "CreditCard.hpp"
#include "Reward.hpp"
#include "Reservation.hpp"

Class Customer
{
private:
	Wallet wallet;
	CreditCard creditCard;
	vector <Reservation> reservations;
	Reward reward;
	CustomerProfile Customer_Profile;
public:
	void add_res(Reservation r);
	Reservation *get_res(string id);
	void cancelRes(string id);
};
#endif

