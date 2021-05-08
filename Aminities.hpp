#ifndef Aminities_hpp
#define Aminities_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Aminities
{
private:
    bool pool;
    bool gym;
    bool Breakfast;
    bool Lunch;
    bool Dinner;
    bool Parking;
    bool WiFi;
    bool GardenView;
    bool PoolView;
    bool bar;
    bool Restaurant;
    bool SPA;
public:
    Aminities( bool p, bool g, bool BF, bool L, bool D, bool Pk, bool wifi, bool GV, bool PV, bool b, bool R, bool s);
    bool getPool();
    bool getGym();
    bool getBreakfast();
    bool getLunch();
    bool getDinner();
    bool getParking();
    bool getWiFi();
    bool getGardenView();
    bool getPoolView();
    bool getBar();
    bool getRestaurant();
    bool getSPA();
};
#endif /* Aminities_hpp */
