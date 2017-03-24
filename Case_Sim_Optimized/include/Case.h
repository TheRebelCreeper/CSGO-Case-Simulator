#ifndef CASE_H
#define CASE_H

#include "Weapon.h"
class Case
{
    public:
        Weapon *miliSpec[6];                 ///Array to store the Milispec weapons
        Weapon *restricted[6];               ///Array to store the Restricted weapons
        Weapon *classified[5];               ///Array to store the Classified weapons
        Weapon *covert[2];                   ///Array to store the Covert weapons
        Weapon *knifeList[10];               ///Array to store the Knives
        Case(Weapon *ItemsA[], int a, Weapon *ItemsB[], int b, Weapon *ItemsC[], int c, Weapon *ItemsD[], int d, Weapon *ItemsE[], int e, bool f);
        void getItemFromCase(Weapon &CaseDrop, int &color, double *money);
    protected:
    private:
        int miliSpecCount;                      ///Stores the amount of Milispec items in the case
        int restrictedCount;                    ///Stores the amount of Restricted items in the case
        int classifiedCount;                    ///Stores the amount of Classified items in the case
        int covertCount;                        ///Stores the amount of Covert items in the case
        int knifeCount;                         ///Stores the amount of Knives in the case
        int colorBlue = RGB(75, 105, 255);
        int colorPurple = RGB(136, 71, 255);
        int colorPink = RGB(211, 44, 230);
        int colorRed = RGB(235, 75, 75);
        int colorYellow = RGB(255, 215, 0);
        bool chroma = false;                    ///Is the case a chroma case?
};

#endif // CASE_H
