#include "Flight.h"
#include "Trip.h"

void Flight::setClass(string C)
{
	Class = C;
}
string Flight::getClass()
{
	return C;
}
void Flight::setType(string t)
{
	type = t;
}
string Flight::getType()
{
	return type;
}
void Flight::setDairport(string d)
{
	dAirport = d;
}
string Flight::getDairport()
{
	return dAirport;
}
void Flight::setRairport(string r)
{
	rAirport = r;
}
string Flight::getRairport()
{
	return rAirport;
}
void Flight::setDuration(double d)
{
	duration = d;
}
double Flight::getDuration()
{
	return duration;
}