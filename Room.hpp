#ifndef Room_hpp
#define Room_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Room
{
private:
    int adults;
    int children;
    bool available;
    double price;
    string type;
    string number;
public:
    string getType();
    void setType( string t );
    string getNumber();
    void setNumber( string t);
    int getAdults();
    void setAdults( int ad);
    int getChildren();
    void setChildren( int ch);
    double getPrice ();
    void setPrice( double p);
    bool getAvailable();
    void setAvailable( bool ava);
};

#endif /* Room_hpp */
