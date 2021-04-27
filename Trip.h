#ifndef TRIP_H
#define TRIP_H
#include <iostream>
#include <string> 
using namespace std;

class Trip
{
private:
	string dDate, rDate, dPlace, rPlace ;
	int noi, ratersNum;
	double price, starRating; 
public:
	double calc_dis();
	double calc_price();
	void   setDdate(string);
	string getDdate();
	void setRdate(string);
	string getRdate();
	void setDplace(string);
	string getDplace();
	void setRplace(string);
	string getRplace();
	void setPrice(double);
	double getPrice();
	void setStarRating(double);
	double getStarRating();
	void setNoi(int);
	int  getNoi();
	void setRatersNum(int);
	int getRatersNum();
};
#endif
