#ifndef Hotel_hpp
#define Hotel_hpp

#include <stdio.h>
#include <string>
#include "Room.hpp"
#include "Aminities.hpp"

using namespace std;

class Hotel
{
private:
    string name;
    string address;
    long phone;
    string email;
    string inDate;
    string outDate;
    Room rooms;
    double priceRange;
    double starRating;
    int ratersNum;
    Aminities aminities;
public:
    void setAddress ( string Add);
    string getAddress();
    void setEmail ( string email);
    string getEmail ();
    void setInDate( string InD);
    string getInDate();
    void setOutDate ( string OutD);
    string getOutDate();
    void setName ( string N);
    string getName ();
    void setPhone ( long ph);
    long getPhone ();
    void setRatersNum( int RN);
    int getRatersNum();
    void setPriceRange ( double PR);
    double getPriceRange ();
    void setStarRange ( double SR);
    double getStarRange();
    
};

#endif /* Hotel_hpp */
