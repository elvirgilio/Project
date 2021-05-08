#ifndef Hotel_hpp
#define Hotel_hpp

#include <stdio.h>
#include <string>
#include "Room.hpp"
#include "Aminities.hpp"
#include <vector>
using namespace std;

class Hotel
{
private:
    string name;
    string address;
    long phone;
    string Email;
    string inDate;
    string outDate;
    vector <Room> rooms;
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
    void setStarRating ( double SR);
    double getStarRating();
    void setRooms(int ad, int ch, bool ava, double p , string t, int n);
    Room* getRooms (int num);
    void setAminities ( bool p, bool g, bool BF, bool L, bool D, bool Pk, bool wifi, bool GV, bool PV, bool b, bool R, bool s);
    Aminities getAminities();
    };

#endif /* Hotel_hpp */
