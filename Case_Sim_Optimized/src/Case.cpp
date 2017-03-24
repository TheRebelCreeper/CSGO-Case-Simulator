#include "Case.h"

Case::Case(Weapon *ItemsA[], int a, Weapon *ItemsB[], int b, Weapon *ItemsC[], int c, Weapon *ItemsD[], int d, Weapon *ItemsE[], int e, bool f)
{
    miliSpecCount = a;
    restrictedCount = b;
    classifiedCount = c;
    covertCount = d;
    knifeCount = e;
    chroma = f;

    for (int x=0; x < miliSpecCount; x++)
    {
        miliSpec[x] = ItemsA[x];
    }
    for (int x=0; x < restrictedCount; x++)
    {
        restricted[x] = ItemsB[x];
    }
    for (int x=0; x < classifiedCount; x++)
    {
        classified[x] = ItemsC[x];
    }
    for (int x=0; x < covertCount; x++)
    {
        covert[x] = ItemsD[x];
    }
    for (int x=0; x < knifeCount; x++)
    {
        knifeList[x] = ItemsE[x];
    }
}

void Case::getItemFromCase(Weapon &CaseDrop, int &color, double *money)
{
    int intChance;                          ///Determines the quality of the weapon to be selected
    int selectedItemFromQuality;            ///Determines which weapon of the chosen quality is picked.

    intChance = rand() % 1000 + 1;
    if(intChance >=0 && intChance <= 699)//Milispec
    {
        color = colorBlue;                                                  ///Set the text color to blue
        selectedItemFromQuality = rand() % miliSpecCount;                   ///Randomly chooses which skin to select
        CaseDrop.setItemQuality(1);                                         ///Sets the quality to milispec
        if (miliSpec[selectedItemFromQuality]->normPrice == -1.00)
        {
            miliSpec[selectedItemFromQuality]->setPrice();
        }
        *money += miliSpec[selectedItemFromQuality]->normPrice;              ///Adds the price of the weapon to the money made
        CaseDrop.setName(miliSpec[selectedItemFromQuality]->weaponName);     ///Sets the name of the skin
    }
    if(intChance >699 && intChance <= 781)//Milispec Stattrak
    {
        color = colorBlue;
        selectedItemFromQuality = rand() % miliSpecCount;
        CaseDrop.setItemQuality(1);
        if (miliSpec[selectedItemFromQuality]->normPrice == -1.00)
        {
            miliSpec[selectedItemFromQuality]->setPrice();
        }
        *money += miliSpec[selectedItemFromQuality]->statPrice;
        CaseDrop.setName(miliSpec[selectedItemFromQuality]->weaponName);
        CaseDrop.setName("Stat-Trak " + CaseDrop.weaponName);
    }
    else if(intChance > 781 && intChance <= 930)//Restricted
    {
        color = colorPurple;
        selectedItemFromQuality = rand() % restrictedCount;
        CaseDrop.setItemQuality(2);
        if (restricted[selectedItemFromQuality]->normPrice == -1.00)
        {
            restricted[selectedItemFromQuality]->setPrice();
        }
        *money += restricted[selectedItemFromQuality]->normPrice;
        CaseDrop.setName(restricted[selectedItemFromQuality]->weaponName);
    }
    else if(intChance > 930 && intChance <= 947)//Restricted Stattrak
    {
        color = colorPurple;
        selectedItemFromQuality = rand() % restrictedCount;
        CaseDrop.setItemQuality(2);
        if (restricted[selectedItemFromQuality]->normPrice == -1.00)
        {
            restricted[selectedItemFromQuality]->setPrice();
        }
        *money += restricted[selectedItemFromQuality]->statPrice;
        CaseDrop.setName(restricted[selectedItemFromQuality]->weaponName);
        CaseDrop.setName("Stat-Trak " + CaseDrop.weaponName);
    }
    else if(intChance > 947 && intChance <= 980)//Classified
    {
        color = colorPink;
        selectedItemFromQuality = rand() % classifiedCount;
        CaseDrop.setItemQuality(3);
        if (classified[selectedItemFromQuality]->normPrice == -1.00)
        {
            classified[selectedItemFromQuality]->setPrice();
        }
        *money += classified[selectedItemFromQuality]->normPrice;
        CaseDrop.setName(classified[selectedItemFromQuality]->weaponName);
    }
    else if(intChance > 980 && intChance <= 983)//Classified stattrak
    {
        color = colorPink;
        selectedItemFromQuality = rand() % classifiedCount;
        CaseDrop.setItemQuality(3);
        if (classified[selectedItemFromQuality]->normPrice == -1.00)
        {
            classified[selectedItemFromQuality]->setPrice();
        }
        *money += classified[selectedItemFromQuality]->statPrice;
        CaseDrop.setName(classified[selectedItemFromQuality]->weaponName);
        CaseDrop.setName("Stat-Trak " + CaseDrop.weaponName);
    }
    else if(intChance > 983 && intChance <= 993)//Covert
    {
        color = colorRed;
        selectedItemFromQuality = rand() % covertCount;
        CaseDrop.setItemQuality(4);
        if (covert[selectedItemFromQuality]->normPrice == -1.00)
        {
            covert[selectedItemFromQuality]->setPrice();
        }
        *money += covert[selectedItemFromQuality]->normPrice;
        CaseDrop.setName(covert[selectedItemFromQuality]->weaponName);
    }
    else if(intChance > 993 && intChance <= 994)//Covert stattrak
    {
        color = colorRed;
        selectedItemFromQuality = rand() % covertCount;
        CaseDrop.setItemQuality(4);
        if (covert[selectedItemFromQuality]->normPrice == -1.00)
        {
            covert[selectedItemFromQuality]->setPrice();
        }
        *money += covert[selectedItemFromQuality]->statPrice;
        CaseDrop.setName(covert[selectedItemFromQuality]->weaponName);
        CaseDrop.setName("Stat-Trak " + CaseDrop.weaponName);
    }
    else if(intChance > 994 && intChance <= 999)//Knife
    {
        color = colorYellow;
        selectedItemFromQuality = rand() % knifeCount;
        CaseDrop.setItemQuality(5);
        CaseDrop.setName(knifeList[selectedItemFromQuality]->weaponName);
        CaseDrop.setKnifeSkin(chroma);
    }
    else if(intChance > 999)//Knife stattrak
    {
        color = colorYellow;
        selectedItemFromQuality = rand() % knifeCount;
        CaseDrop.setItemQuality(5);
        CaseDrop.setName(knifeList[selectedItemFromQuality]->weaponName);
        CaseDrop.setKnifeSkin(chroma);
        CaseDrop.setName("Stat-Trak " + CaseDrop.weaponName);
    }
}
