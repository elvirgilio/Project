#include "Cruise.h"
#include "Trip.h"

void Cruise::setClass(string C)
{
	Class = C;
}
string Cruise::getClass()
{
	return Class;
}
void Cruise::setType(string t)
{
	type = t;
}
string Cruise::getType()
{
	return type;
}
void Cruise::setDport(string d)
{
	dPort = d;
}
string Cruise::getDport()
{
	return dPort;
}
void Cruise::setRport(string A)
{
	Aport = A;
}
string Cruise::getRport()
{
	return Aport;
}
void Cruise::setDuration(double d)
{
	duration = d;
}
double Cruise::getDuration()
{
	return duration;
}