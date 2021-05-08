#include "Aminities.hpp"
#include <string>

using namespace std;

Aminities :: Aminities (bool p, bool g, bool BF, bool L, bool D, bool Pk, bool wifi, bool GV, bool PV, bool b, bool R, bool s)
{
    pool = p;
    gym = g;
    Breakfast = BF;
    Lunch = L;
    Dinner = D;
    Parking = Pk;
    WiFi = wifi;
    GardenView = GV;
    PoolView = PV;
    bar = b;
    Restaurant = R;
    SPA = s;
}

bool Aminities::getPool() { return pool; }
bool Aminities::getGym() { return gym; }
bool Aminities::getBreakfast() { return Breakfast; }
bool Aminities::getLunch() { return Lunch; }
bool Aminities::getDinner() { return Dinner; }
bool Aminities::getParking() { return Parking; }
bool Aminities::getWiFi() { return WiFi; }
bool Aminities::getGardenView() { return GardenView; }
bool Aminities::getPoolView() { return PoolView; }
bool Aminities::getBar() { return bar; }
bool Aminities::getRestaurant() { return Restaurant; }
bool Aminities::getSPA() { return SPA; }
