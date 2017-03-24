
#include "Case.h"
#include "resource.h"
#include "WeaponGen.h"

using namespace Weapons;

//Function Prototypes
void setToChecked(HWND, UINT);
string toString(double);
double getProfit(double, double);
LRESULT CALLBACK WinProc(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam);
BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInst,HINSTANCE hPrevInst,LPSTR lpCmdLine,int nCmdShow)
{
    double seed;
    srand(time(0));
    seed = rand();
    srand(seed);
    WNDCLASSEX wc;
    HWND hWnd;
    MSG msg;

    //Step 1: Registering the Window Class
    wc.cbSize        = sizeof(WNDCLASSEX);
    wc.style         = 0;
    wc.lpfnWndProc   = WinProc;
    wc.cbClsExtra    = 0;
    wc.cbWndExtra    = 0;
    wc.hInstance     = hInst;
    wc.hIcon         = LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_CSICON));
    wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW);
    wc.lpszMenuName  = NULL;
    wc.lpszClassName = "Simulator";
    wc.hIconSm       = LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_CSICON));

    //If the window does not create properly
    if(!RegisterClassEx(&wc))
    {
        MessageBox(NULL, "Window Registration Failed!", "Error!",
            MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    // Step 2: Creating the Window
    hWnd = CreateWindowEx(
        WS_EX_CLIENTEDGE,
        "Simulator",
        "CS:GO Case Simulator",
        WS_OVERLAPPEDWINDOW,
        200,
        200,
        737,
        304,
        NULL,
        NULL,
        hInst,
        NULL);

    //If the window does not create properly
    if(hWnd == NULL)
    {
        MessageBox(NULL, "Window Creation Failed!", "Error!",
                    MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }
    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);
    // Step 3: The Message Loop
    while(GetMessage(&msg, NULL, 0, 0) > 0)
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return msg.wParam;
}

LRESULT CALLBACK WinProc(HWND hWnd,UINT msg,WPARAM wParam,LPARAM lParam)
{
    static int color = RGB(0, 0, 0);                    //The current color of the text
    static double moneySpent = 0;                       //How much money has been lost
    static double moneyEarned = 0;                      //How much money has been made
    static double profit;                               //Keeps track of the profit
    static double *dPointer = &moneyEarned;             //Pointer to moneyEarned
    static string lastWeapon = "Please open a case.";   //Used to store the name of the last weapon.

//Create the Cases needed for the program

///Default Knifes
    Weapon *DefaultKnifeList[] = {&Karambit, &Bayonet, &M9, &Flip, &Gut};

///Weapon Case 1
    //Loot List
    Weapon *WepCaseMiliSpec[] = {&MP7_Skulls, &AUG_Wings, &SG553_Ultraviolet};
    Weapon *WepCaseRestricted[] = {&Glock_18_Dragon_Tattoo, &USPS_Dark_Water, &M4A1S_Dark_Water};
    Weapon *WepCaseClassified[] = {&AK47_Case_Hardened, &Deagle_Hypnotic};
    Weapon *WepCaseCovert[] = {&AWP_Lightning_Strike};
    //Create Case
    Case WepCase(WepCaseMiliSpec, 3 , WepCaseRestricted, 3, WepCaseClassified, 2, WepCaseCovert, 1, DefaultKnifeList, 5, false);

///Weapon Case 2 Items
    //Loot List
    Weapon *WepCase2MiliSpec[] = {&Tec_9_Blue_Titanium, &M4A1S_Blood_Tiger, &FAMAS_Hexane, &P250_Hive, &SCAR_20_Crimson_Web};
    Weapon *WepCase2Restricted[] = {&Five_Seven_Case_Hardened, &MP9_Hypnotic, &Nova_Graphite, &Dualies_Hemoglobin};
    Weapon *WepCase2Classified[] = {&P90_Cold_Blooded, &USPS_Serum};
    Weapon *WepCase2Covert[] = {&SSG08_Blood_in_the_Water};
    //Create Case
    Case WepCase2(WepCase2MiliSpec, 5 , WepCase2Restricted, 4, WepCase2Classified, 2, WepCase2Covert, 1, DefaultKnifeList, 5, false);

///Weapon Case 3 Items
    //Loot List
    Weapon *WepCase3MiliSpec[] = {&CZ75_Auto_Crimson_Web, &P2000_Red_FragCam, &Dualies_Panther, &USPS_Stainless, &Glock_18_Blue_Fissure};
    Weapon *WepCase3Restricted[] = {&CZ75_Auto_Tread_Plate, &Tec_9_Titanium_Bit, &Deagle_Heirloom, &Five_Seven_Copper_Galaxy};
    Weapon *WepCase3Classified[] = {&CZ75_Auto_The_Fuschia_Is_Now, &P250_Undertow};
    Weapon *WepCase3Covert[] = {&CZ75_Auto_Victoria};
    //Create Case
    Case WepCase3(WepCase3MiliSpec, 5 , WepCase3Restricted, 4, WepCase3Classified, 2, WepCase3Covert, 1, DefaultKnifeList, 5, false);

///eSports 2013 Items
    //Loot List
    Weapon *eSportsMiliSpec[] = {&M4A4_Faded_Zebra, &MAG_7_Memento, &FAMAS_Doomkitty};
    Weapon *eSportsRestricted[] = {&Galil_AR_Orange_DDPAT, &Sawed_Off_Orange_DDPAT, &P250_Splash};
    Weapon *eSportsClassified[] = {&AK47_Red_Laminate, &AWP_BOOM};
    Weapon *eSportsCovert[] = {&P90_Death_by_Kitty};
    //Create Case
    Case eSports(eSportsMiliSpec, 3 , eSportsRestricted, 3, eSportsClassified, 2, eSportsCovert, 1, DefaultKnifeList, 5, false);

///eSports 2013 Winter Items
    //Loot List
    Weapon *eSports2MiliSpec[] = {&Galil_AR_Blue_Titanium, &Five_Seven_Nightshade, &PP_Bizon_Water_Sigil, &Nova_Ghost_Camo, &G3SG1_Azure_Zebra, &P250_Steel_Disruption};
    Weapon *eSports2Restricted[] = {&AK47_Blue_Laminate, &P90_Blind_Spot};
    Weapon *eSports2Classified[] = {&FAMAS_Afterimage, &AWP_Electric_Hive, &Deagle_Cobalt_Disruption};
    Weapon *eSports2Covert[] = {&M4A4_XRay};
    //Create Case
    Case eSports2(eSports2MiliSpec, 6 , eSports2Restricted, 2, eSports2Classified, 3, eSports2Covert, 1, DefaultKnifeList, 5, false);

///eSports 2014 Summer Items
    //Loot List
    Weapon *eSports3MiliSpec[] = {&SSG08_Dark_Water, &SSG08_Dark_Water, &USPS_Blood_Tiger, &CZ75_Auto_Hexane, &Negev_Bratatat, &XM1014_Red_Python};
    Weapon *eSports3Restricted[] = {&PP_Bizon_Blue_Streak, &P90_Virus, &MP7_Ocean_Foam, &Glock_18_Steel_Disruption, &Deagle_Crimson_Web};
    Weapon *eSports3Classified[] = {&AUG_Bengal_Tiger, &Nova_Bloomstick, &AWP_Corticera, &P2000_Corticera};
    Weapon *eSports3Covert[] = {&M4A4_Bullet_Rain, &AK47_Jaguar};
    //Create Case
    Case eSports3(eSports3MiliSpec, 6 , eSports3Restricted, 5, eSports3Classified, 4, eSports3Covert, 2, DefaultKnifeList, 5, false);

///Huntsman Items
    //Loot List
    Weapon *HuntsmanMiliSpec[] = {&Tec_9_Isaac, &SSG08_Slashed, &Galil_AR_Kami, &CZ75_Auto_Twist, &P90_Module, &P2000_Pulse};
    Weapon *HuntsmanRestricted[] = {&AUG_Torque, &PP_Bizon_Antique, &XM1014_Heaven_Guard, &MAC_10_Tatter};
    Weapon *HuntsmanClassified[] = {&M4A1S_Atomic_Alloy, &SCAR_20_Cyrex, &USPS_Caiman};
    Weapon *HuntsmanCovert[] = {&AK47_Vulcan, &M4A4_Desert_Strike};
    Weapon *HuntsmanKnifeList[] = {&HuntsmanKnife};
    //Create Case
    Case Huntsman(HuntsmanMiliSpec, 6 , HuntsmanRestricted, 4, HuntsmanClassified, 3, HuntsmanCovert, 2, HuntsmanKnifeList, 1, false);

///Chroma Case Items
    //Loot List
    Weapon *ChromaMiliSpec[] = {&Glock_18_Catacombs, &M249_System_Lock, &MP9_Deadly_Poison, &SCAR_20_Grotto, &XM1014_Quicksilver};
    Weapon *ChromaRestricted[] = {&Dualies_Urban_Shock, &Deagle_Naga, &MAC_10_Malachite, &Sawed_Off_Serenity};
    Weapon *ChromaClassified[] = {&AK47_Cartel, &M4A4_Dragon_King, &P250_Muertos};
    Weapon *ChromaCovert[] = {&AWP_Man_o_war, &Galil_AR_Chatterbox};
    //Create Case
    Case Chroma(ChromaMiliSpec, 5 , ChromaRestricted, 4, ChromaClassified, 3, ChromaCovert, 2, DefaultKnifeList, 5, true);

///Chroma 2 Items
    //Loot List
    Weapon *Chroma2MiliSpec[] = {&AK47_Elite_Build, &MP7_Armor_Core, &Deagle_Bronze_Deco, &P250_Valence, &Negev_Man_o_war, &Sawed_Off_Origami};
    Weapon *Chroma2Restricted[] = {&AWP_Worm_God, &MAG_7_Heat, &CZ75_Auto_Pole_Position, &UMP_45_Grand_Prix};
    Weapon *Chroma2Classified[] = {&Five_Seven_Monkey_Business, &Galil_AR_Eco, &FAMAS_Djinn};
    Weapon *Chroma2Covert[] = {&M4A1S_Hyper_Beast, &MAC_10_Neon_Rider};
    //Create Case
    Case Chroma2(Chroma2MiliSpec, 6 , Chroma2Restricted, 4, Chroma2Classified, 3, Chroma2Covert, 2, DefaultKnifeList, 5, true);

///Operation Bravo Items
    //Loot List
    Weapon *BravoMiliSpec[] = {&SG553_Wave_Spray, &Dualies_Black_Limba, &Nova_Tempest, &Galil_AR_Shattered, &UMP_45_Bone_Pile, &G3SG1_Demeter};
    Weapon *BravoRestricted[] = {&USPS_Overgrowth, &M4A4_Zirka, &MAC_10_Graven, &M4A1S_Bright_Water};
    Weapon *BravoClassified[] = {&P90_Emerald_Dragon, &P2000_Ocean_Foam, &AWP_Graphite};
    Weapon *BravoCovert[] = {&AK47_Fire_Serpent, &Deagle_Golden_Koi};
    //Create Case
    Case Bravo(BravoMiliSpec, 6 , BravoRestricted, 4, BravoClassified, 3, BravoCovert, 2, DefaultKnifeList, 5, false);

///Operation Breakout Items
    //Loot List
    Weapon *BreakoutMiliSpec[] = {&MP7_Urban_Hazard, &Negev_Desert_Strike, &P2000_Ivory, &SSG08_Abyss, &UMP_45_Labyrinth};
    Weapon *BreakoutRestricted[] = {&PP_Bizon_Osiris, &CZ75_Auto_Tigris, &Nova_Koi, &P250_Supernova};
    Weapon *BreakoutClassified[] = {&Deagle_Conspiracy, &Five_Seven_Fowl_Play, &Glock_18_Water_Elemental};
    Weapon *BreakoutCovert[] = {&P90_Asiimov, &M4A1S_Cyrex};
    Weapon *BreakoutKnifeList[] = {&ButterflyKnife};
    //Create Case
    Case Breakout(BreakoutMiliSpec, 5 , BreakoutRestricted, 4, BreakoutClassified, 3, BreakoutCovert, 2, BreakoutKnifeList, 1, false);

///Operation Phoenix Items
    //Loot List
    Weapon *PhoenixMiliSpec[] = {&UMP_45_Corporal, &Negev_Terrain, &Tec_9_Sandstorm, &MAG_7_Heaven_Guard};
    Weapon *PhoenixRestricted[] = {&MAC_10_Heat, &SG_553_Pulse, &FAMAS_Sergeant, &USPS_Guardian};
    Weapon *PhoenixClassified[] = {&AK47_Redline, &P90_Trigon, &Nova_Antique};
    Weapon *PhoenixCovert[] = {&AWP_Asiimov, &AUG_Chameleon};
    //Create Case
    Case Phoenix(PhoenixMiliSpec, 4 , PhoenixRestricted, 4, PhoenixClassified, 3, PhoenixCovert, 2, DefaultKnifeList, 5, false);

///Operation Vanguard Items
    //Loot List
    Weapon *VanguardMiliSpec[] = {&G3SG1_Murky, &MAG_7_Firestarter, &MP9_Dart, &Five_Seven_Urban_Hazard, &UMP_45_Delusion};
    Weapon *VanguardRestricted[] = {&Glock_18_Grinder, &M4A1S_Basilisk, &M4A4_Griffin, &Sawed_Off_Highwayman};
    Weapon *VanguardClassified[] = {&P250_Cartel, &SCAR_20_Cardiac, &XM1014_Tranquility};
    Weapon *VanguardCovert[] = {&AK47_Wasteland_Rebel, &P2000_Fire_Elemental};
    //Create Case
    Case Vanguard(VanguardMiliSpec, 5 , VanguardRestricted, 4, VanguardClassified, 3, VanguardCovert, 2, DefaultKnifeList, 5, false);

///Winter Offensive Items
    //Loot List
    Weapon *WinterOffensiveMiliSpec[] = {&Galil_AR_Sandstorm, &Five_Seven_Kami, &M249_Magma, &PP_Bizon_Cobalt_Halftone};
    Weapon *WinterOffensiveRestricted[] = {&FAMAS_Pulse, &Dualies_Marina, &MP9_Rose_Iron, &Nova_Rising_Skull};
    Weapon *WinterOffensiveClassified[] = {&M4A1S_Guardian, &P250_Mehndi, &AWP_Redline};
    Weapon *WinterOffensiveCovert[] = {&M4A4_Asiimov, &Sawed_Off_Kraken};
    //Create Case
    Case WinterOffensive(WinterOffensiveMiliSpec, 4 , WinterOffensiveRestricted, 4, WinterOffensiveClassified, 3, WinterOffensiveCovert, 2, DefaultKnifeList, 5, false);

    switch(msg)
    {
        //Creates the controls in the window
        case WM_CREATE:
        {

            HFONT myFont;                                                   //Name of the font
            HDC hdc;                                                        //HDC variable
            long nHeight;                                                   //Font size
            hdc = GetDC(NULL);
            nHeight = -MulDiv(12, GetDeviceCaps(hdc, LOGPIXELSY), 72);
            myFont = CreateFont(nHeight, 0, 0, 0, 0, FALSE, 0, 0, 0, 0, 0, 0, 0, "Microsoft Sans Serif");

            HWND LastWeapon = CreateWindow(
                            "STATIC",
                            "Last Weapon Unboxed:",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD,
                            485,
                            38,
                            200,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_LastUnbox,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_LastUnbox, WM_SETFONT, (WPARAM)myFont, TRUE); //Sets the Font

            HWND OpenButton = CreateWindow(
                            "BUTTON",
                            "Open Case",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_DEFPUSHBUTTON,
                            485,
                            219,
                            106,
                            33,
                            hWnd,
                            (HMENU)IDC_MAIN_Button_Open,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_Button_Open, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND ExitButton = CreateWindow(
                            "BUTTON",
                            "Exit Program",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_DEFPUSHBUTTON,
                            597,
                            219,
                            113,
                            33,
                            hWnd,
                            (HMENU)IDC_MAIN_Button_Exit,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_Button_Exit, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND GroupBox = CreateWindow(
                            "BUTTON",
                            "Cases",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_GROUPBOX,
                            16,
                            13,
                            465,
                            240,
                            hWnd,
                            (HMENU)IDC_MAIN_GroupBox,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_GroupBox, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND Case1Button = CreateWindow(
                            "BUTTON",
                            "CS:GO Weapon Case",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            22,
                            38,
                            183,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_Case1,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Case1, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND Case2Button = CreateWindow(
                            "BUTTON",
                            "CS:GO Weapon Case 2",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            22,
                            68,
                            196,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_Case2,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Case2, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND Case3Button = CreateWindow(
                            "BUTTON",
                            "CS:GO Weapon Case 3",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            22,
                            98,
                            196,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_Case3,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Case3, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND eSports1Button = CreateWindow(
                            "BUTTON",
                            "eSports 2013 Case",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            22,
                            128,
                            164,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_eSports1,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_eSports1, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND eSports2Button = CreateWindow(
                            "BUTTON",
                            "eSports 2013 Winter Case",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            22,
                            158,
                            214,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_eSports2,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_eSports2, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND eSports3Button = CreateWindow(
                            "BUTTON",
                            "eSports 2014 Summer Case",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            22,
                            188,
                            228,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_eSports3,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_eSports3, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND HuntsmanButton = CreateWindow(
                            "BUTTON",
                            "Huntsman Weapon Case",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            22,
                            218,
                            206,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_Huntsman,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Huntsman, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND ChromaButton = CreateWindow(
                            "BUTTON",
                            "Chroma Case",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            256,
                            38,
                            124,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_Chroma,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Chroma, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND Chroma2Button = CreateWindow(
                            "BUTTON",
                            "Chroma 2 Case",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            256,
                            68,
                            137,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_Chroma2,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Chroma2, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND BravoButton = CreateWindow(
                            "BUTTON",
                            "Operation Bravo Case",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            256,
                            98,
                            183,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_Bravo,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Bravo, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND BreakoutButton = CreateWindow(
                            "BUTTON",
                            "Operation Breakout Case",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            256,
                            128,
                            207,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_Breakout,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Breakout, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND PhoenixButton = CreateWindow(
                            "BUTTON",
                            "Operation Phoenix Case",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            256,
                            158,
                            198,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_Phoenix,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Phoenix, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND VanguardButton = CreateWindow(
                            "BUTTON",
                            "Operation Vanguard Case",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            256,
                            188,
                            212,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_Vanguard,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Vanguard, WM_SETFONT, (WPARAM)myFont, TRUE);

            HWND WinterButton = CreateWindow(
                            "BUTTON",
                            "Winter Offensive Case",
                            WS_TABSTOP|WS_VISIBLE|WS_CHILD|BS_RADIOBUTTON,
                            256,
                            218,
                            185,
                            24,
                            hWnd,
                            (HMENU)IDC_MAIN_RadioButton_Winter,
                            GetModuleHandle(NULL),
                            NULL);
            SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Winter, WM_SETFONT, (WPARAM)myFont, TRUE);
        }
        break; //WM_CREATE

        //Displays the text for the last weapon unboxed
        case WM_PAINT:
        {
            HFONT myFont;
            HDC hdc;
            HDC wdc;
            long nHeight;
            PAINTSTRUCT ps;
            RECT rcLastWep;             //The area for the text to go in
            rcLastWep.left = 485;
            rcLastWep.top = 68;
            rcLastWep.right = 700;
            rcLastWep.bottom = 128;
            hdc = GetDC(NULL);
            nHeight = -MulDiv(12, GetDeviceCaps(hdc, LOGPIXELSY), 72);
            myFont = CreateFont(nHeight, 0, 0, 0, 0, FALSE, 0, 0, 0, 0, 0, 0, 0, "Microsoft Sans Serif");

            wdc = BeginPaint(hWnd, &ps);

            SelectObject(wdc, myFont);  //Sets the font
            SetTextColor(wdc, color);   //Sets the color
            SetBkColor(wdc, GetSysColor(COLOR_BTNFACE));    //Sets the background
            SetBkMode(wdc,TRANSPARENT);                     //Makes the background transparent
            DrawText(wdc, lastWeapon.c_str(), -1, &rcLastWep, DT_WORDBREAK);    //Draws the name of the last weapon
            EndPaint(hWnd, &ps);
        }
        break; //WM_PAINT

        //Handles changing the selected case and opening the case
        case WM_COMMAND:
        {
            RECT rcLastWep;
            rcLastWep.left = 485;
            rcLastWep.top = 68;
            rcLastWep.right = 700;
            rcLastWep.bottom = 128;
            Weapon CaseDrop;

            //Determines which button was pressed
            switch (LOWORD(wParam))
            {
                //Opens the case depending on which is selected.
                case IDC_MAIN_Button_Open:
                {
                    //If the first case is checked, open it. Otherwise, check the next case
                    if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Case1, BM_GETCHECK, 1, 0) == 1)
                    {
                        WepCase.getItemFromCase(CaseDrop, color, dPointer);         //Get the item from the case
                        lastWeapon = CaseDrop.weaponName;                           //Set the name of that weapon to the string
                        lastWep = lastWeapon;                                       //Store in global variable
                        currentColor = color;                                       //Store the color of that weapon
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);  //Create a dialog box displaying the name
                        InvalidateRect(hWnd, &rcLastWep, true);                     //Force the window to redraw, updating the text
                        moneySpent += KEY_PRICE;                                    //Increment the amount spent so far
                    }//Ends if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Case1, BM_GETCHECK, 1, 0) == 1)

                    else if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Case2, BM_GETCHECK, 1, 0) == 1)
                    {
                        WepCase2.getItemFromCase(CaseDrop, color, dPointer);
                        lastWeapon = CaseDrop.weaponName;
                        lastWep = lastWeapon;
                        currentColor = color;
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                        moneySpent += KEY_PRICE;
                    }//Ends if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Case2, BM_GETCHECK, 1, 0) == 1)

                    else if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Case3, BM_GETCHECK, 1, 0) == 1)
                    {
                        WepCase3.getItemFromCase(CaseDrop, color, dPointer);
                        lastWeapon = CaseDrop.weaponName;
                        lastWep = lastWeapon;
                        currentColor = color;
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                        moneySpent += KEY_PRICE;
                    }//Emds if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Case3, BM_GETCHECK, 1, 0) == 1)

                    else if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_eSports1, BM_GETCHECK, 1, 0) == 1)
                    {
                        eSports.getItemFromCase(CaseDrop, color, dPointer);
                        lastWeapon = CaseDrop.weaponName;
                        lastWep = lastWeapon;
                        currentColor = color;
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                        moneySpent += KEY_PRICE;
                    }//Ends if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_eSports1, BM_GETCHECK, 1, 0) == 1)

                    else if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_eSports2, BM_GETCHECK, 1, 0) == 1)
                    {
                        eSports2.getItemFromCase(CaseDrop, color, dPointer);
                        lastWeapon = CaseDrop.weaponName;
                        lastWep = lastWeapon;
                        currentColor = color;
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                        moneySpent += KEY_PRICE;
                    }//Ends if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_eSports2, BM_GETCHECK, 1, 0) == 1)

                    else if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_eSports3, BM_GETCHECK, 1, 0) == 1)
                    {
                        eSports3.getItemFromCase(CaseDrop, color, dPointer);
                        lastWeapon = CaseDrop.weaponName;
                        lastWep = lastWeapon;
                        currentColor = color;
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                        moneySpent += KEY_PRICE;
                    }//Ends if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_eSports3, BM_GETCHECK, 1, 0) == 1)

                    else if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Huntsman, BM_GETCHECK, 1, 0) == 1)
                    {
                        Huntsman.getItemFromCase(CaseDrop, color, dPointer);
                        lastWeapon = CaseDrop.weaponName;
                        lastWep = lastWeapon;
                        currentColor = color;
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                        moneySpent += KEY_PRICE;
                    }//Ends if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Huntsman, BM_GETCHECK, 1, 0) == 1)

                    else if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Chroma, BM_GETCHECK, 1, 0) == 1)
                    {
                        Chroma.getItemFromCase(CaseDrop, color, dPointer);
                        lastWeapon = CaseDrop.weaponName;
                        lastWep = lastWeapon;
                        currentColor = color;
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                        moneySpent += KEY_PRICE;
                    }//Ends if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Chroma, BM_GETCHECK, 1, 0) == 1)

                    else if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Chroma2, BM_GETCHECK, 1, 0) == 1)
                    {
                        Chroma2.getItemFromCase(CaseDrop, color, dPointer);
                        lastWeapon = CaseDrop.weaponName;
                        lastWep = lastWeapon;
                        currentColor = color;
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                        moneySpent += KEY_PRICE;
                    }//Ends if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Chroma2, BM_GETCHECK, 1, 0) == 1)

                    else if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Bravo, BM_GETCHECK, 1, 0) == 1)
                    {
                        Bravo.getItemFromCase(CaseDrop, color, dPointer);
                        lastWeapon = CaseDrop.weaponName;
                        lastWep = lastWeapon;
                        currentColor = color;
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                        moneySpent += KEY_PRICE;
                    }//Ends if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Bravo, BM_GETCHECK, 1, 0) == 1)

                    else if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Breakout, BM_GETCHECK, 1, 0) == 1)
                    {
                        Breakout.getItemFromCase(CaseDrop, color, dPointer);
                        lastWeapon = CaseDrop.weaponName;
                        lastWep = lastWeapon;
                        currentColor = color;
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                        moneySpent += KEY_PRICE;
                    }//Ends if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Breakout, BM_GETCHECK, 1, 0) == 1)

                    else if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Phoenix, BM_GETCHECK, 1, 0) == 1)
                    {
                        Phoenix.getItemFromCase(CaseDrop, color, dPointer);
                        lastWeapon = CaseDrop.weaponName;
                        lastWep = lastWeapon;
                        currentColor = color;
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                        moneySpent += KEY_PRICE;
                    }//Ends if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Phoenix, BM_GETCHECK, 1, 0) == 1)

                    else if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Vanguard, BM_GETCHECK, 1, 0) == 1)
                    {
                        Vanguard.getItemFromCase(CaseDrop, color, dPointer);
                        lastWeapon = CaseDrop.weaponName;
                        lastWep = lastWeapon;
                        currentColor = color;
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                        moneySpent += KEY_PRICE;
                    }//Ends if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Vanguard, BM_GETCHECK, 1, 0) == 1)

                    else if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Winter, BM_GETCHECK, 1, 0) == 1)
                    {
                        WinterOffensive.getItemFromCase(CaseDrop, color, dPointer);
                        lastWeapon = CaseDrop.weaponName;
                        lastWep = lastWeapon;
                        currentColor = color;
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                        moneySpent += KEY_PRICE;
                    }//Ends if (SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Winter, BM_GETCHECK, 1, 0) == 1)

                    else
                    {
                        lastWep = "Please select a case first.";
                        DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN), hWnd, DlgProc);
                        InvalidateRect(hWnd, &rcLastWep, true);
                    }//Ends the else
                }
                break;

                //Closes the program
                case IDC_MAIN_Button_Exit:
                {
                    profit = getProfit(moneySpent, moneyEarned);    //Calculates the profit
                    string strProfit, strMessage;                   //2 needed strings.
                    //If you lost money
                    if (profit < 0)
                    {
                        profit *= -1;
                        strProfit = toString(profit);
                        strMessage = "You lost $" + strProfit;
                        MessageBox(NULL, strMessage.c_str(), "Total Profit", MB_ICONINFORMATION);
                    }//Ends if you lost money

                    //If you made money
                    else if (profit > 0)
                    {
                        strProfit = toString(profit);
                        strMessage = "You made $" + strProfit;
                        MessageBox(NULL, strMessage.c_str(), "Total Profit", MB_ICONINFORMATION);
                    }//Ends if you made money

                    //If you broke even
                    else
                    {
                        MessageBox(NULL, "You broke even", "Total Profit", MB_ICONINFORMATION);
                    }//Ends if you broke even

                    PostQuitMessage(0);
                    return 0;

                }
                break;

                //Sets the pressed button to the checked state
                case IDC_MAIN_RadioButton_Case1:
                {
                    UINT Name = LOWORD(wParam);
                    //If the button was clicked
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        //Check if the button is unpressed
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);   //Sets the button to checked and all others to not.
                        }//Ends if the button is unpressed

                    }//Ends if the button was clicked
                }
                break;

                case IDC_MAIN_RadioButton_Case2:
                {
                    UINT Name = LOWORD(wParam);
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);
                        }
                    }
                }
                break;

                case IDC_MAIN_RadioButton_Case3:
                {
                    UINT Name = LOWORD(wParam);
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);
                        }
                    }
                }
                break;

                case IDC_MAIN_RadioButton_eSports1:
                {
                    UINT Name = LOWORD(wParam);
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);
                        }
                    }
                }
                break;

                case IDC_MAIN_RadioButton_eSports2:
                {
                    UINT Name = LOWORD(wParam);
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);
                        }
                    }
                }
                break;

                case IDC_MAIN_RadioButton_eSports3:
                {
                    UINT Name = LOWORD(wParam);
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);
                        }
                    }
                }
                break;

                case IDC_MAIN_RadioButton_Huntsman:
                {
                    UINT Name = LOWORD(wParam);
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);
                        }
                    }
                }
                break;

                case IDC_MAIN_RadioButton_Chroma:
                {
                    UINT Name = LOWORD(wParam);
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);
                        }
                    }
                }
                break;

                case IDC_MAIN_RadioButton_Chroma2:
                {
                    UINT Name = LOWORD(wParam);
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);
                        }
                    }
                }
                break;

                case IDC_MAIN_RadioButton_Bravo:
                {
                    UINT Name = LOWORD(wParam);
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);
                        }
                    }
                }
                break;

                case IDC_MAIN_RadioButton_Breakout:
                {
                    UINT Name = LOWORD(wParam);
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);
                        }
                    }
                }
                break;

                case IDC_MAIN_RadioButton_Phoenix:
                {
                    UINT Name = LOWORD(wParam);
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);
                        }
                    }
                }
                break;

                case IDC_MAIN_RadioButton_Vanguard:
                {
                    UINT Name = LOWORD(wParam);
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);
                        }
                    }
                }
                break;

                case IDC_MAIN_RadioButton_Winter:
                {
                    UINT Name = LOWORD(wParam);
                    if (HIWORD(wParam) == BN_CLICKED)
                    {
                        if (SendDlgItemMessage(hWnd, Name, BM_SETCHECK, 0, 0) == 0)
                        {
                            setToChecked(hWnd, Name);
                        }
                    }
                }
                break;
            }
        }
        break;//WM_COMMAND

        //Closes the window. Also calculates the profit
        case WM_DESTROY:
        {
            profit = getProfit(moneySpent, moneyEarned);
            string strProfit, strMessage;
            //If you lost money
            if (profit < 0)
            {
                profit *= -1;
                strProfit = toString(profit);
                strMessage = "You lost $" + strProfit;
                MessageBox(NULL, strMessage.c_str(), "Total Profit", MB_ICONINFORMATION);
            }//Ends if you lost money

            //If you made money
            else if (profit > 0)
            {
                strProfit = toString(profit);
                strMessage = "You made $" + strProfit;
                MessageBox(NULL, strMessage.c_str(), "Total Profit", MB_ICONINFORMATION);
            }//Ends if you made money

            //If you broke even
            else
            {
                MessageBox(NULL, "You broke even", "Total Profit", MB_ICONINFORMATION);
            }//Ends if you broke even

            PostQuitMessage(0);
            return 0;
        }
        break; //WM_DESTROY

        default:
            return DefWindowProc(hWnd, msg, wParam, lParam);
    }
    return 0;
}

//Dialog box to display unbox results
BOOL CALLBACK DlgProc(HWND hWnd, UINT Message, WPARAM wParam, LPARAM lParam)
{
	switch(Message)
    {
        case WM_INITDIALOG:
        {
            return true;
        }
        break;

        //Displays name of weapon
        case WM_PAINT:
        {
            HFONT myFont;
            HDC hdc;
            HDC wdc;
            PAINTSTRUCT ps;
            long nHeight;
            RECT rcLastWep;
            rcLastWep.left = 0;
            rcLastWep.top = 0;
            rcLastWep.right = 264;
            rcLastWep.bottom = 84;

            hdc = GetDC(NULL);
            //If the text is too big
            if (lastWep.length() > 33 && lastWep.length() <= 37)
            {
                nHeight = -MulDiv(11, GetDeviceCaps(hdc, LOGPIXELSY), 72);
            }//Ends if the text is too big

            //If it's still too big
            else if (lastWep.length() > 37)
            {
                nHeight = -MulDiv(10, GetDeviceCaps(hdc, LOGPIXELSY), 72);
            }//Ends if text is still too big

            //Default size
            else
            {
                nHeight = -MulDiv(12, GetDeviceCaps(hdc, LOGPIXELSY), 72);
            }//Ends default size

            myFont = CreateFont(nHeight, 0, 0, 0, 400, FALSE, 0, 0, 0, 0, 0, 0, 0, "Microsoft Sans Serif");
            wdc = BeginPaint(hWnd, &ps);

            SelectObject(wdc, myFont);
            SetTextColor(wdc, currentColor);
            SetBkColor(wdc, GetSysColor(COLOR_BTNFACE));
            SetBkMode(wdc,TRANSPARENT);
            FillRect(wdc, &rcLastWep, CreateSolidBrush(GetSysColor(COLOR_WINDOW)));
            DrawText(wdc, lastWep.c_str(), -1, &rcLastWep, DT_SINGLELINE|DT_CENTER|DT_VCENTER);
            EndPaint(hWnd, &ps);
        }
        break; //WM_PAINT

        case WM_COMMAND:
            switch(LOWORD(wParam))
            {
                //If you pressed OK
                case IDOK:
                    EndDialog(hWnd, IDOK);
                break;
            }
        break;

        case WM_CLOSE:
        {
            EndDialog(hWnd, WM_CLOSE);
        }
        break;

        default:
            return FALSE;
    }
    return TRUE;
}



void setToChecked(HWND hWnd, UINT CaseName)
{
    //Set everything to unchecked
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Case1, BM_SETCHECK, 0, 0);
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Case2, BM_SETCHECK, 0, 0);
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Case3, BM_SETCHECK, 0, 0);
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_eSports1, BM_SETCHECK, 0, 0);
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_eSports2, BM_SETCHECK, 0, 0);
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_eSports3, BM_SETCHECK, 0, 0);
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Huntsman, BM_SETCHECK, 0, 0);
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Chroma, BM_SETCHECK, 0, 0);
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Chroma2, BM_SETCHECK, 0, 0);
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Bravo, BM_SETCHECK, 0, 0);
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Breakout, BM_SETCHECK, 0, 0);
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Phoenix, BM_SETCHECK, 0, 0);
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Vanguard, BM_SETCHECK, 0, 0);
    SendDlgItemMessage(hWnd, IDC_MAIN_RadioButton_Winter, BM_SETCHECK, 0, 0);
    //Set the one that was pressed to checked
    SendDlgItemMessage(hWnd, CaseName, BM_SETCHECK, 1, 0);
}

string toString(double myDouble)
{
    stringstream myString;
    myString << fixed << setprecision(2) << myDouble;
    return myString.str();
}

double getProfit(double spent, double earned)
{
    double profit;
    profit = earned - spent;
    return profit;
}
