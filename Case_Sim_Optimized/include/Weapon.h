#ifndef WEAPON_H
#define WEAPON_H
#include <windows.h>
#include <wininet.h>
#include <time.h>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

class Weapon
{
    public:
        Weapon();
        Weapon(int, string, string);
        void setName(string Name);
        void setItemQuality(int Quality);
        void setPrice();
        void setPrice(string);
        void setKnifeSkin(bool ChromaCase);
        string getHTML(string Name);
        double toDouble(string myString);

        string URL_Norm = "";
        string weaponName;
        int itemQuality;
        double normPrice, statPrice;
        string BASE_URL = "http://steamcommunity.com/market/priceoverview/?country=US&currency=1&appid=730&market_hash_name=";

    protected:
    private:

};

#endif // WEAPON_H
