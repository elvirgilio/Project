#ifndef RESERVATION_H
#define RESERVATION_H
#include <iostream>
#include <string> 
#include "Flight.h"
#include "Cruise.h"
#include "Room.hpp"
#include "CustomerProfile.hpp"
#include "Graph.hpp"
#include "Payment.hpp"
using namespace std;
class Reservation
{
private:
	string ID;
	string date;
	bool isTwo;
	Flight flight;
	Cruise cruise;
	Payment payment;
	Room room;
	Graph graph;
public:
	string getID();
	void search(int);
	void searchP(int, int);
	void searchS(double);
	void searchPR(double, double);
	void searchD(int, int);

};
#endif

