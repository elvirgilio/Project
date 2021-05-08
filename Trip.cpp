#include "Trip.h"

double Trip::calc_dis()                    // needed
{

}
double Trip::calc_price()                  //needed
{

}
void  Trip::setDdate(string d)
{
	dDate = d;
}
string Trip::getDdate()
{
	return dDate;
}
void Trip::setRdate(string r)
{
	rDate = r;
}
string Trip::getRdate()
{
	return rDate;
}
void Trip::setDplace(string d)
{
	dPlace = d;
}
string Trip::getDplace()
{
	return dPlace;
}
void Trip::setRplace(string r)
{
	rPlace = r;
}
string Trip::getRplace()
{
	return rPlace;
}
void Trip::setPrice(double P)
{
	price=P
}
double Trip::getPrice()
{
	return price;
}
void Trip::setStarRating(double star)
{
	starRating = star;
}
double Trip::getStarRating()
{
	return starRating;
}
void Trip::setNoi(int N)
{
	noi = N;
}
int  Trip::getNoi()
{
	return noi;
}
void Trip::setRatersNum(int raters)
{
	ratersNum = raters;
}
int Trip::getRatersNum()
{
	return ratersNum;
}