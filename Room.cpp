#include "Room.hpp"
#include <string>
using namespace std;

Room :: Room (int ad, int ch, bool ava, double p , string t, int n)
{
    adults = ad;
    children = ch;
    available = ava;
    price = p;
    type = t;
    number = n;
}

void Room::setType(string t) { type = t; }
string Room::getType() { return type;}
void Room::setNumber( int N) { number = N;}
int Room:: getNumber() { return number; }
void Room:: setAdults( int ad ) { adults = ad; }
int Room:: getAdults() { return adults; }
void Room:: setChildren( int ch) { children = ch; }
int Room:: getChildren() { return children;}
void Room::setPrice(double p) { price = p; }
double Room:: getPrice() { return price; }
void Room:: setAvailable( bool ava) { available = ava; }
bool Room:: getAvailable() { return available; }
