#include "Hotel.hpp"
#include <string>
#include <vector>
using namespace std;

void Hotel:: setAddress(string Add) {address = Add;}
string Hotel::getAddress() { return address;}
void Hotel:: setEmail(string email) { Email = email; }
string Hotel:: getEmail() { return Email; }
void Hotel::setInDate(string InD) { inDate = InD; }
string Hotel:: getInDate() { return inDate;}
void Hotel::setOutDate(string OutD) { outDate = OutD; }
string Hotel:: getOutDate() { return outDate; }
void Hotel:: setName(string N) { name = N; }
string Hotel:: getName() { return name;}
void Hotel:: setPhone( long ph) { phone = ph;}
long Hotel:: getPhone() { return phone;}
void Hotel:: setRatersNum( int RN) { ratersNum = RN; }
int Hotel :: getRatersNum() { return ratersNum; }
void Hotel:: setPriceRange(double PR) { priceRange = PR; }
double Hotel:: getPriceRange() { return priceRange; }
void Hotel:: setStarRating (double SR) { starRating = SR; }
double Hotel:: getStarRating() { return starRating; }
void Hotel:: setRooms( int ad, int ch, bool ava, double p , string t, int n)
{
    rooms.push_back( Room (ad, ch, ava,p , t , n));
}
Room* Hotel :: getRooms( int num )
{
    Room* r;
    for ( int i = 0; i < rooms.size(); i++)
    {
        if ( num == rooms[i].getNumber())
        {
            *r = rooms[i];
            return r;
        }
    }
    return NULL;
}

void Hotel:: setAminities(bool p, bool g, bool BF, bool L, bool D, bool PK, bool wifi, bool GV, bool PV, bool P, bool R, bool s)
{
    aminities = Aminities ( p, g,BF, L ,D , PK , wifi, GV, PV, P , R ,s);
}

Aminities Hotel :: getAminities()
{
    return aminities;
}
