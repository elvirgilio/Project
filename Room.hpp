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
    int number;
public:
    Room ( int ad, int ch, bool ava, double p , string t, int n );
    string getType();
    void setType( string t );
    int getNumber();
    void setNumber( int N);
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
