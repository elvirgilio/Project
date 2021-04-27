#ifndef CRUISE_H
#define CRUISE_H
#include <iostream>
#include <string> 
#include "Trip.h"
#include "Aminities.hpp"
using namespace std;

class Cruise : public Trip
{
private:
	string Class, type, dPort, Aport;
	Aminities aminities;
	double duration;
public:
	void setClass(string);
	string getClass();
	void setType(string);
	string getType();
	void setDport(string);
	string getDport();
	void setRport(string);
	string getRport();
	void setDuration(double);
	double getDuration();

};
#endif
