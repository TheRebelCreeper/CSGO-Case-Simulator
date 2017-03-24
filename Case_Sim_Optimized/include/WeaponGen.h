//To Check Weapon Price from market
//http://steamcommunity.com/market/priceoverview/?country=US&currency=1&appid=730&market_hash_name=

namespace Weapons
{
    const int
                MiliSpec = 1,
                Restricted = 2,
                Classified = 3,
                Covert = 4,
                Knife = 5;

    ///Default Knifes
        Weapon Karambit(Knife, "Karambit", "");
        Weapon Bayonet(Knife, "Bayonet", "");
        Weapon M9(Knife, "M9 Bayonet", "");
        Weapon Flip(Knife, "Flip Knife", "");
        Weapon Gut(Knife, "Gut Knife", "");

    ///Weapon Case 1 Items
        //Milispec
        Weapon MP7_Skulls(MiliSpec, "MP7 | Skulls", MP7_Skulls_Name);
        Weapon AUG_Wings(MiliSpec, "AUG | Wings", AUG_Wings_Name);
        Weapon SG553_Ultraviolet(MiliSpec, "SG 553 | Ultraviolet", SG553_Ultraviolet_Name);
        //Restricted
        Weapon Glock_18_Dragon_Tattoo(Restricted, "Glock-18 | Dragon Tattoo", Glock_18_Dragon_Tattoo_Name);
        Weapon USPS_Dark_Water(Restricted, "USP-S | Dark Water", USPS_Dark_Water_Name);
        Weapon M4A1S_Dark_Water(Restricted, "M4A1-S | Dark Water", M4A1S_Dark_Water_Name);
        //Classified
        Weapon AK47_Case_Hardened(Classified, "AK-47 | Case Hardened", AK47_Case_Hardened_Name);
        Weapon Deagle_Hypnotic(Classified, "Desert Eagle | Hypnotic", Deagle_Hypnotic_Name);
        //Covert
        Weapon AWP_Lightning_Strike(Covert, "AWP | Lightning Strike", AWP_Lightning_Strike_Name);

    ///Weapon Case 2 Items
        //Milispec
        Weapon Tec_9_Blue_Titanium(MiliSpec, "Tec-9 | Blue Titanium", Tec_9_Blue_Titanium_Name);
        Weapon M4A1S_Blood_Tiger(MiliSpec, "M4A1-S | Blood Tiger", M4A1S_Blood_Tiger_Name);
        Weapon FAMAS_Hexane(MiliSpec, "FAMAS | Hexane", FAMAS_Hexane_Name);
        Weapon P250_Hive(MiliSpec, "P250 | Hive", P250_Hive_Name);
        Weapon SCAR_20_Crimson_Web(MiliSpec, "SCAR-20 | Crimson Web", SCAR_20_Crimson_Web_Name);
        //Restricted
        Weapon Five_Seven_Case_Hardened(Restricted, "Five-SeveN | Case Hardened", Five_Seven_Case_Hardened_Name);
        Weapon MP9_Hypnotic(Restricted, "MP9 | Hypnotic", MP9_Hypnotic_Name);
        Weapon Nova_Graphite(Restricted, "Nova | Graphite", Nova_Graphite_Name);
        Weapon Dualies_Hemoglobin(Restricted, "Dual Berettas | Hemoglobin", Dualies_Hemoglobin_Name);
        //Classified
        Weapon P90_Cold_Blooded(Classified, "P90 | Cold Blooded", P90_Cold_Blooded_Name);
        Weapon USPS_Serum(Classified, "USP-S | Serum", USPS_Serum_Name);
        //Covert
        Weapon SSG08_Blood_in_the_Water(Covert, "SSG 08 | Blood in the Water", SSG08_Blood_in_the_Water_Name);

    ///Weapon Case 3 Items
        //Milispec
        Weapon CZ75_Auto_Crimson_Web(MiliSpec, "CZ75-Auto | Crimson Web", CZ75_Auto_Crimson_Web_Name);
        Weapon P2000_Red_FragCam(MiliSpec, "P2000 | Red FragCam", P2000_Red_FragCam_Name);
        Weapon Dualies_Panther(MiliSpec, "Dual Berettas | Panther", Dualies_Panther_Name);
        Weapon USPS_Stainless(MiliSpec, "USP-S | Stainless", USPS_Stainless_Name);
        Weapon Glock_18_Blue_Fissure(MiliSpec, "Glock-18 | Blue Fissure", Glock_18_Blue_Fissure_Name);
        //Restricted
        Weapon CZ75_Auto_Tread_Plate(Restricted, "CZ75-Auto | Tread Plate", CZ75_Auto_Tread_Plate_Name);
        Weapon Tec_9_Titanium_Bit(Restricted, "Tec-9 | Titanium Bit", Tec_9_Titanium_Bit_Name);
        Weapon Deagle_Heirloom(Restricted, "Desert Eagle | Heirloom", Deagle_Heirloom_Name);
        Weapon Five_Seven_Copper_Galaxy(Restricted, "Five-SeveN | Copper Galaxy", Five_Seven_Copper_Galaxy_Name);
        //Classified
        Weapon CZ75_Auto_The_Fuschia_Is_Now(Classified, "CZ75-Auto | The Fuschia Is Now", CZ75_Auto_The_Fuschia_Is_Now_Name);
        Weapon P250_Undertow(Classified, "P250 | Undertow", P250_Undertow_Name);
        //Covert
        Weapon CZ75_Auto_Victoria(Covert, "CZ75-Auto | Victoria", CZ75_Auto_Victoria_Name);

    ///eSports 2013 Items
        //Milispec
        Weapon M4A4_Faded_Zebra(MiliSpec, "M4A4 | Faded Zebra", M4A4_Faded_Zebra_Name);
        Weapon MAG_7_Memento(MiliSpec, "MAG-7 | Memento", MAG_7_Memento_Name);
        Weapon FAMAS_Doomkitty(MiliSpec, "FAMAS | Doomkitty", FAMAS_Doomkitty_Name);
        //Restricted
        Weapon Galil_AR_Orange_DDPAT(Restricted, "Galil AR | Orange DDPAT", Galil_AR_Orange_DDPAT_Name);
        Weapon Sawed_Off_Orange_DDPAT(Restricted, "Sawed-Off | Orange DDPAT", Sawed_Off_Orange_DDPAT_Name);
        Weapon P250_Splash(Restricted, "P250 | Splash", P250_Splash_Name);
        //Classified
        Weapon AK47_Red_Laminate(Classified, "AK-47 | Red Laminate", AK47_Red_Laminate_Name);
        Weapon AWP_BOOM(Classified, "AWP | BOOM", AWP_BOOM_Name);
        //Covert
        Weapon P90_Death_by_Kitty(Covert, "P90 | Death by Kitty", P90_Death_by_Kitty_Name);

    ///eSports 2013 Winter Items
        //Milispec
        Weapon Galil_AR_Blue_Titanium(MiliSpec, "Galil AR | Blue Titanium", Galil_AR_Blue_Titanium_Name);
        Weapon Five_Seven_Nightshade(MiliSpec, "Five-SeveN | Nightshade", Five_Seven_Nightshade_Name);
        Weapon PP_Bizon_Water_Sigil(MiliSpec, "PP-Bizon | Water Sigil", PP_Bizon_Water_Sigil_Name);
        Weapon Nova_Ghost_Camo(MiliSpec, "Nova | Ghost Camo", Nova_Ghost_Camo_Name);
        Weapon G3SG1_Azure_Zebra(MiliSpec, "G3SG1 | Azure Zebra", G3SG1_Azure_Zebra_Name);
        Weapon P250_Steel_Disruption(MiliSpec, "P250 | Steel Disruption", P250_Steel_Disruption_Name);
        //Restricted
        Weapon AK47_Blue_Laminate(Restricted, "AK-47 | Blue Laminate", AK47_Blue_Laminate_Name);
        Weapon P90_Blind_Spot(Restricted, "P90 | Blind Spot", P90_Blind_Spot_Name);
        //Classified
        Weapon FAMAS_Afterimage(Classified, "FAMAS | Afterimage", FAMAS_Afterimage_Name);
        Weapon AWP_Electric_Hive(Classified, "AWP | Electric Hive", AWP_Electric_Hive_Name);
        Weapon Deagle_Cobalt_Disruption(Classified, "Desert Eagle | Cobalt Disruption", Deagle_Cobalt_Disruption_Name);
        //Covert
        Weapon M4A4_XRay(Covert, "M4A4 | X-Ray", M4A4_XRay_Name);

    ///eSports 2014 Summer Items
        //Milispec
        Weapon SSG08_Dark_Water(MiliSpec, "SSG 08 | Dark Water", SSG08_Dark_Water_Name);
        Weapon MAC_10_Ultraviolet(MiliSpec, "MAC-10 | Ultraviolet", MAC_10_Ultraviolet_Name);
        Weapon USPS_Blood_Tiger(MiliSpec, "USP-S | Blood Tiger", USPS_Blood_Tiger_Name);
        Weapon CZ75_Auto_Hexane(MiliSpec, "CZ75-Auto | Hexane", CZ75_Auto_Hexane_Name);
        Weapon Negev_Bratatat(MiliSpec, "Negev | Bratatat", Negev_Bratatat_Name);
        Weapon XM1014_Red_Python(MiliSpec, "XM1014 | Red Python", XM1014_Red_Python_Name);
        //Restricted
        Weapon PP_Bizon_Blue_Streak(Restricted, "PP-Bizon | Blue Streak", PP_Bizon_Blue_Streak_Name);
        Weapon P90_Virus(Restricted, "P90 | Virus", P90_Virus_Name);
        Weapon MP7_Ocean_Foam(Restricted, "MP7 | Ocean Foam", MP7_Ocean_Foam_Name);
        Weapon Glock_18_Steel_Disruption(Restricted, "Glock-18 | Steel Disruption", Glock_18_Steel_Disruption_Name);
        Weapon Deagle_Crimson_Web(Restricted, "Desert Eagle | Crimson Web", Deagle_Crimson_Web_Name);
        //Classified
        Weapon AUG_Bengal_Tiger(Classified, "AUG | Bengal Tiger", AUG_Bengal_Tiger_Name);
        Weapon Nova_Bloomstick(Classified, "Nova | Bloomstick", Nova_Bloomstick_Name);
        Weapon AWP_Corticera(Classified, "AWP | Corticera", AWP_Corticera_Name);
        Weapon P2000_Corticera(Classified, "P2000 | Corticera", P2000_Corticera_Name);
        //Covert
        Weapon M4A4_Bullet_Rain(Covert, "M4A4 | Bullet Rain", M4A4_Bullet_Rain_Name);
        Weapon AK47_Jaguar(Covert, "AK-47 | Jaguar", AK47_Jaguar_Name);

    ///Huntsman Items
        //Milispec
        Weapon Tec_9_Isaac(MiliSpec, "Tec-9 | Isaac", Tec_9_Isaac_Name);
        Weapon SSG08_Slashed(MiliSpec, "SSG 08 | Slashed", SSG08_Slashed_Name);
        Weapon Galil_AR_Kami(MiliSpec, "Galil AR | Kami", Galil_AR_Kami_Name);
        Weapon CZ75_Auto_Twist(MiliSpec, "CZ75-Auto | Twist", CZ75_Auto_Twist_Name);
        Weapon P90_Module(MiliSpec, "P90 | Module", P90_Module_Name);
        Weapon P2000_Pulse(MiliSpec, "P2000 | Pulse", P2000_Pulse_Name);
        //Restricted
        Weapon AUG_Torque(Restricted, "AUG | Torque", AUG_Torque_Name);
        Weapon PP_Bizon_Antique(Restricted, "PP-Bizon | Antique", PP_Bizon_Antique_Name);
        Weapon XM1014_Heaven_Guard(Restricted, "XM1014 | Heaven Guard", XM1014_Heaven_Guard_Name);
        Weapon MAC_10_Tatter(Restricted, "MAC-10 | Tatter", MAC_10_Tatter_Name);
        //Classified
        Weapon M4A1S_Atomic_Alloy(Classified, "M4A1-S | Atomic Alloy", M4A1S_Atomic_Alloy_Name);
        Weapon SCAR_20_Cyrex(Classified, "SCAR-20 | Cyrex", SCAR_20_Cyrex_Name);
        Weapon USPS_Caiman(Classified, "USP-S | Caiman", USPS_Caiman_Name);
        //Covert
        Weapon AK47_Vulcan(Covert, "AK-47 | Vulcan", AK47_Vulcan_Name);
        Weapon M4A4_Desert_Strike(Covert, "M4A4 | Desert Strike", M4A4_Desert_Strike_Name);
        //Knife
        Weapon HuntsmanKnife(Knife, "Huntsman Knife", "");

    ///Chroma Case Items
        //Milispec
        Weapon Glock_18_Catacombs(MiliSpec, "Glock-18 | Catacombs", Glock_18_Catacombs_Name);
        Weapon M249_System_Lock(MiliSpec, "M249 | System Lock", M249_System_Lock_Name);
        Weapon MP9_Deadly_Poison(MiliSpec, "MP9 | Deadly Poison", MP9_Deadly_Poison_Name);
        Weapon SCAR_20_Grotto(MiliSpec, "SCAR-20 | Grotto", SCAR_20_Grotto_Name);
        Weapon XM1014_Quicksilver(MiliSpec, "XM1014 | Quicksilver", XM1014_Quicksilver_Name);
        //Restricted
        Weapon Dualies_Urban_Shock(Restricted, "Dual Berettas | Urban Shock", Dualies_Urban_Shock_Name);
        Weapon Deagle_Naga(Restricted, "Desert Eagle | Naga", Deagle_Naga_Name);
        Weapon MAC_10_Malachite(Restricted, "MAC-10 | Malachite", MAC_10_Malachite_Name);
        Weapon Sawed_Off_Serenity(Restricted, "Sawed-Off | Serenity", Sawed_Off_Serenity_Name);
        //Classified
        Weapon AK47_Cartel(Classified, "AK-47 | Cartel", AK47_Cartel_Name);
        Weapon M4A4_Dragon_King(Classified, "M4A4 | Dragon King", M4A4_Dragon_King_Name);
        Weapon P250_Muertos(Classified, "P250 | Muertos", P250_Muertos_Name);
        //Covert
        Weapon AWP_Man_o_war(Covert, "AWP | Man-o'-war", AWP_Man_o_war_Name);
        Weapon Galil_AR_Chatterbox(Covert, "Galil AR | Chatterbox", Galil_AR_Chatterbox_Name);

    ///Chroma 2 Items
        //Milispec
        Weapon AK47_Elite_Build(MiliSpec, "AK-47 | Elite Build", AK47_Elite_Build_Name);
        Weapon MP7_Armor_Core(MiliSpec, "MP7 | Armor Core", MP7_Armor_Core_Name);
        Weapon Deagle_Bronze_Deco(MiliSpec, "Desert Eagle | Bronze Deco", Deagle_Bronze_Deco_Name);
        Weapon P250_Valence(MiliSpec, "P250 | Valence", P250_Valence_Name);
        Weapon Negev_Man_o_war(MiliSpec, "Negev | Man-o'-war", Negev_Man_o_war_Name);
        Weapon Sawed_Off_Origami(MiliSpec, "Sawed-Off | Origami", Sawed_Off_Origami_Name);
        //Restricted
        Weapon AWP_Worm_God(Restricted, "AWP | Worm God", AWP_Worm_God_Name);
        Weapon MAG_7_Heat(Restricted, "MAG-7 | Heat", MAG_7_Heat_Name);
        Weapon CZ75_Auto_Pole_Position(Restricted, "CZ75-Auto | Pole Position", CZ75_Auto_Pole_Position_Name);
        Weapon UMP_45_Grand_Prix(Restricted, "UMP-45 | Grand Prix", UMP_45_Grand_Prix_Name);
        //Classified
        Weapon Five_Seven_Monkey_Business(Classified, "Five-SeveN | Monkey Business", Five_Seven_Monkey_Business_Name);
        Weapon Galil_AR_Eco(Classified, "Galil AR | Eco", Galil_AR_Eco_Name);
        Weapon FAMAS_Djinn(Classified, "FAMAS | Djinn", FAMAS_Djinn_Name);
        //Covert
        Weapon M4A1S_Hyper_Beast(Covert, "M4A1-S | Hyper Beast", M4A1S_Hyper_Beast_Name);
        Weapon MAC_10_Neon_Rider(Covert, "MAC-10 | Neon Rider", MAC_10_Neon_Rider_Name);

    ///Operation Bravo Items
        //Milispec
        Weapon SG553_Wave_Spray(MiliSpec, "SG 553 | Wave Spray", SG553_Wave_Spray_Name);
        Weapon Dualies_Black_Limba(MiliSpec, "Dual Berettas | Black Limba", Dualies_Black_Limba_Name);
        Weapon Nova_Tempest(MiliSpec, "Nova | Tempest", Nova_Tempest_Name);
        Weapon Galil_AR_Shattered(MiliSpec, "Galil AR | Shattered", Galil_AR_Shattered_Name);
        Weapon UMP_45_Bone_Pile(MiliSpec, "UMP-45 | Bone Pile", UMP_45_Bone_Pile_Name);
        Weapon G3SG1_Demeter(MiliSpec, "G3SG1 | Demeter", G3SG1_Demeter_Name);
        //Restricted
        Weapon USPS_Overgrowth(Restricted, "USP-S | Overgrowth", USPS_Overgrowth_Name);
        Weapon M4A4_Zirka(Restricted, "M4A4 | Zirka", M4A4_Zirka_Name);
        Weapon MAC_10_Graven(Restricted, "MAC-10 | Graven", MAC_10_Graven_Name);
        Weapon M4A1S_Bright_Water(Restricted, "M4A1-S | Bright Water", M4A1S_Bright_Water_Name);
        //Classified
        Weapon P90_Emerald_Dragon(Classified, "P90 | Emerald Dragon", P90_Emerald_Dragon_Name);
        Weapon P2000_Ocean_Foam(Classified, "P2000 | Ocean Foam", P2000_Ocean_Foam_Name);
        Weapon AWP_Graphite(Classified, "AWP | Graphite", AWP_Graphite_Name);
        //Covert
        Weapon AK47_Fire_Serpent(Covert, "AK-47 | Fire Serpent", AK47_Fire_Serpent_Name);
        Weapon Deagle_Golden_Koi(Covert, "Desert Eagle | Golden Koi", Deagle_Golden_Koi_Name);

    ///Operation Breakout Items
        //Milispec
        Weapon MP7_Urban_Hazard(MiliSpec, "MP7 | Urban Hazard", MP7_Urban_Hazard_Name);
        Weapon Negev_Desert_Strike(MiliSpec, "Negev | Desert Strike", Negev_Desert_Strike_Name);
        Weapon P2000_Ivory(MiliSpec, "P2000 | Ivory", P2000_Ivory_Name);
        Weapon SSG08_Abyss(MiliSpec, "SSG-08 | Abyss", SSG08_Abyss_Name);
        Weapon UMP_45_Labyrinth(MiliSpec, "UMP-45 | Labyrinth", UMP_45_Labyrinth_Name);
        //Restricted
        Weapon PP_Bizon_Osiris(Restricted, "PP-Bizon | Osiris", PP_Bizon_Osiris_Name);
        Weapon CZ75_Auto_Tigris(Restricted, "CZ75-Auto | Tigris", CZ75_Auto_Tigris_Name);
        Weapon Nova_Koi(Restricted, "Nova | Koi", Nova_Koi_Name);
        Weapon P250_Supernova(Restricted, "P250 | Supernova", P250_Supernova_Name);
        //Classified
        Weapon Deagle_Conspiracy(Classified, "Desert Eagle | Conspiracy", Deagle_Conspiracy_Name);
        Weapon Five_Seven_Fowl_Play(Classified, "Five-SeveN | Fowl Play", Five_Seven_Fowl_Play_Name);
        Weapon Glock_18_Water_Elemental(Classified, "Glock-18 | Water Elemental", Glock_18_Water_Elemental_Name);
        //Covert
        Weapon P90_Asiimov(Covert, "P90 | Asiimov", P90_Asiimov_Name);
        Weapon M4A1S_Cyrex(Covert, "M4A1-S | Cyrex", M4A1S_Cyrex_Name);
        //Knife
        Weapon ButterflyKnife(Knife, "Butterfly Knife", "");

    ///Operation Phoenix Items
        //Milispec
        Weapon UMP_45_Corporal(MiliSpec, "UMP-45 | Corporal", UMP_45_Corporal_Name);
        Weapon Negev_Terrain(MiliSpec, "Negev | Terrain", Negev_Terrain_Name);
        Weapon Tec_9_Sandstorm(MiliSpec, "Tec-9 | Sandstorm", Tec_9_Sandstorm_Name);
        Weapon MAG_7_Heaven_Guard(MiliSpec, "MAG-7 | Heaven Guard", MAG_7_Heaven_Guard_Name);
        //Restricted
        Weapon MAC_10_Heat(Restricted, "MAC-10 | Heat", MAC_10_Heat_Name);
        Weapon SG_553_Pulse(Restricted, "SG 553 | Pulse", SG_553_Pulse_Name);
        Weapon FAMAS_Sergeant(Restricted, "FAMAS | Sergeant", FAMAS_Sergeant_Name);
        Weapon USPS_Guardian(Restricted, "USP-S | Guardian", USPS_Guardian_Name);
        //Classified
        Weapon AK47_Redline(Classified, "AK-47 | Redline", AK47_Redline_Name);
        Weapon P90_Trigon(Classified, "P90 | Trigon", P90_Trigon_Name);
        Weapon Nova_Antique(Classified, "Nova | Antique", Nova_Antique_Name);
        //Covert
        Weapon AWP_Asiimov(Covert, "AWP | Asiimov", AWP_Asiimov_Name);
        Weapon AUG_Chameleon(Covert, "AUG | Chameleon", AUG_Chameleon_Name);

    ///Operation Vanguard Items
        //Milispec
        Weapon G3SG1_Murky(MiliSpec, "G3SG1 | Murky", G3SG1_Murky_Name);
        Weapon MAG_7_Firestarter(MiliSpec, "MAG-7 | Firestarter", MAG_7_Firestarter_Name);
        Weapon MP9_Dart(MiliSpec, "MP9 | Dart", MP9_Dart_Name);
        Weapon Five_Seven_Urban_Hazard(MiliSpec, "Five-SeveN | Urban Hazard", Five_Seven_Urban_Hazard_Name);
        Weapon UMP_45_Delusion(MiliSpec, "UMP-45 | Delusion", UMP_45_Delusion_Name);
        //Restricted
        Weapon Glock_18_Grinder(Restricted, "Glock-18 | Grinder", Glock_18_Grinder_Name);
        Weapon M4A1S_Basilisk(Restricted, "M4A1-S | Basilisk", M4A1S_Basilisk_Name);
        Weapon M4A4_Griffin(Restricted, "M4A4 | Griffin", M4A4_Griffin_Name);
        Weapon Sawed_Off_Highwayman(Restricted, "Sawed-Off | Highwayman", Sawed_Off_Highwayman_Name);
        //Classified
        Weapon P250_Cartel(Classified, "P250 | Cartel", P250_Cartel_Name);
        Weapon SCAR_20_Cardiac(Classified, "SCAR-20 | Cardiac", SCAR_20_Cardiac_Name);
        Weapon XM1014_Tranquility(Classified, "XM1014 | Tranquility", XM1014_Tranquility_Name);
        //Covert
        Weapon AK47_Wasteland_Rebel(Covert, "AK-47 | Wasteland Rebel", AK47_Wasteland_Rebel_Name);
        Weapon P2000_Fire_Elemental(Covert, "P2000 | Fire Elemental", P2000_Fire_Elemental_Name);

    ///Winter Offensive Items
        //Milispec
        Weapon Galil_AR_Sandstorm(MiliSpec, "Galil AR | Sandstorm", Galil_AR_Sandstorm_Name);
        Weapon Five_Seven_Kami(MiliSpec, "Five-SeveN | Kami", Five_Seven_Kami_Name);
        Weapon M249_Magma(MiliSpec, "M249 | Magma", M249_Magma_Name);
        Weapon PP_Bizon_Cobalt_Halftone(MiliSpec, "PP-Bizon | Cobalt Halftone", PP_Bizon_Cobalt_Halftone_Name);
        //Restricted
        Weapon FAMAS_Pulse(Restricted, "FAMAS | Pulse", FAMAS_Pulse_Name);
        Weapon Dualies_Marina(Restricted, "Dual Berettas | Marina", Dualies_Marina_Name);
        Weapon MP9_Rose_Iron(Restricted, "MP9 | Rose Iron", MP9_Rose_Iron_Name);
        Weapon Nova_Rising_Skull(Restricted, "Nova | Rising Skull", Nova_Rising_Skull_Name);
        //Classified
        Weapon M4A1S_Guardian(Classified, "M4A1-S | Guardian", M4A1S_Guardian_Name);
        Weapon P250_Mehndi(Classified, "P250 | Mehndi", P250_Mehndi_Name);
        Weapon AWP_Redline(Classified, "AWP | Redline", AWP_Redline_Name);
        //Covert
        Weapon M4A4_Asiimov(Covert, "M4A4 | Asiimov", M4A4_Asiimov_Name);
        Weapon Sawed_Off_Kraken(Covert, "Sawed-Off | Kraken", Sawed_Off_Kraken_Name);
};
