#ifndef FLIGHT_H
#define FLIGHT_H
#include <iostream>
#include <string> 
#include "Trip.h"
class Flight : public Trip
{
private:
	string Class, type, dAirport, rAirport;
	double duration; 
public:
	void setClass(string);
	string getClass();
	void setType(string);
	string getType();
	void setDairport(string);
	string getDairport();
	void setRairport(string);
	string getRairport();
	void setDuration(double);
	double getDuration();
};
#endif
