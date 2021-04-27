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
    void updateAminities();
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
