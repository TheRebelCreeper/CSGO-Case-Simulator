#include "Weapon.h"

Weapon::Weapon()
{

}

Weapon::Weapon(int quality, string name, string URLNormal)
{
    itemQuality = quality;
    weaponName = name;
    URL_Norm = URLNormal;
    normPrice = -1.00;
    statPrice = -1.00;
}

void Weapon::setName(string Name)
{
    weaponName = Name;
}
void Weapon::setItemQuality(int Quality)
{
    itemQuality = Quality;
}
void Weapon::setPrice()
{
    if (URL_Norm != "") //If there is a string, proceed, otherwise skip it
    {
        string URL_ST = "StatTrak%E2%84%A2%20" + URL_Norm;
        string strRegular = getHTML(URL_Norm);
        string strStatTrak = getHTML(URL_ST);
        normPrice = toDouble(strRegular);
        statPrice = toDouble(strStatTrak);
    }
    else
    {
        normPrice = 0;
        statPrice = 0;
    }
}
void Weapon::setKnifeSkin(bool ChromaCase)
{
    int knifeSkin;
    if (ChromaCase == true)
    {
        string knifeTypeB[6] = {"Damascus Steel", "Doppler", "Marble Fade", //Skins for the chroma case
                                "Tiger Tooth", "Rust Coat", "Ultraviolet"};
        knifeSkin = rand() % 6;
        weaponName = weaponName + " | " + knifeTypeB[knifeSkin];
    }
    else
    {
        //Skins for normal cases
        string knifeTypeA[13] = {"Default", "Blue Steel", "Boreal Forest", "Case Hardened", "Crimson Web", "Fade",
                                "Forest DDPAT", "Night", "Safari Mesh", "Scorched", "Slaughter", "Stained", "Urban Masked"};
        knifeSkin = rand() % 13;
        weaponName = weaponName + " | " + knifeTypeA[knifeSkin];
    }
}

string Weapon::getHTML(string Name)
{
    string URL = BASE_URL + Name;
    HINTERNET ConnectInternet = InternetOpen("MyBrowser",INTERNET_OPEN_TYPE_PRECONFIG,NULL, NULL, 0);
    HINTERNET OpenAddress = InternetOpenUrl(ConnectInternet, URL.c_str(), NULL, 0, INTERNET_FLAG_NO_CACHE_WRITE|INTERNET_FLAG_KEEP_CONNECTION, 0);

    if ( !OpenAddress )
    {
        return "0.00";
    }

    char DataReceived[2048];            //Contains the downloaded information
    DWORD NumberOfBytesRead = 0;        //Tracks how much data has been read
    string srcCode = "";                //String holding the source code of the website
    while(InternetReadFile(OpenAddress, DataReceived, 2048, &NumberOfBytesRead) && NumberOfBytesRead)
    {
        srcCode = srcCode + DataReceived;
    }
    InternetCloseHandle(OpenAddress);
    InternetCloseHandle(ConnectInternet);

    if (srcCode.find("$") != string::npos) //If there is a ';' in the code continue
    {
        int pos1 = srcCode.find("$") + 1;       //Store the position of the ';'
        int pos2 = srcCode.find("\"", pos1);    //Store the position of the first " after the ';'
        int length = pos2 - pos1;               //Find out how long that is
        return (srcCode.substr(pos1, length)).c_str();    //Returns the value between the ; and "
    }
    else
    {
        return "0.00";
    }
}
double Weapon::toDouble(string myString)
{
    double Result;
    stringstream myDouble(myString);
    myDouble >> Result;
    return Result;
}
