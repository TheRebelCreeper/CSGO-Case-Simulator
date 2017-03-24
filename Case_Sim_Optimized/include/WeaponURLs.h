//const string Name = "http://steamcommunity.com/market/priceoverview/?country=US&currency=1&appid=730&market_hash_name=";
//Replace ™ with %E2%84%A2
//const string _Name = "";

using namespace std;

//Strings holding the last part of the URL
const string MP7_Skulls_Name = "MP7%20%7C%20Skulls%20%28Field-Tested%29";
const string AUG_Wings_Name = "AUG%20%7C%20Wings%20%28Factory%20New%29";
const string SG553_Ultraviolet_Name = "SG%20553%20%7C%20Ultraviolet%20%28Field-Tested%29";
const string Glock_18_Dragon_Tattoo_Name = "Glock-18%20%7C%20Dragon%20Tattoo%20%28Factory%20New%29";
const string USPS_Dark_Water_Name = "USP-S%20%7C%20Dark%20Water%20%28Field-Tested%29";
const string M4A1S_Dark_Water_Name = "M4A1-S%20%7C%20Dark%20Water%20%28Field-Tested%29";
const string AK47_Case_Hardened_Name = "AK-47%20%7C%20Case%20Hardened%20%28Field-Tested%29";
const string Deagle_Hypnotic_Name = "Desert%20Eagle%20%7C%20Hypnotic%20%28Factory%20New%29";
const string AWP_Lightning_Strike_Name = "AWP%20%7C%20Lightning%20Strike%20%28Factory%20New%29";

const string Tec_9_Blue_Titanium_Name = "Tec-9%20%7C%20Blue%20Titanium%20%28Factory%20New%29";
const string M4A1S_Blood_Tiger_Name = "M4A1-S%20%7C%20Blood%20Tiger%20%28Field-Tested%29";
const string FAMAS_Hexane_Name = "FAMAS%20%7C%20Hexane%20%28Field-Tested%29";
const string P250_Hive_Name = "P250%20%7C%20Hive%20%28Field-Tested%29";
const string SCAR_20_Crimson_Web_Name = "SCAR-20%20%7C%20Crimson%20Web%20%28Field-Tested%29";
const string Five_Seven_Case_Hardened_Name = "Five-SeveN%20%7C%20Case%20Hardened%20%28Field-Tested%29";
const string MP9_Hypnotic_Name = "MP9%20%7C%20Hypnotic%20%28Factory%20New%29";
const string Nova_Graphite_Name = "Nova%20%7C%20Graphite%20%28Factory%20New%29";
const string Dualies_Hemoglobin_Name = "Dual%20Berettas%20%7C%20Hemoglobin%20%28Minimal%20Wear%29";
const string P90_Cold_Blooded_Name = "P90%20%7C%20Cold%20Blooded%20%28Factory%20New%29";
const string USPS_Serum_Name = "USP-S%20%7C%20Serum%20%28Minimal%20Wear%29";
const string SSG08_Blood_in_the_Water_Name = "SSG%2008%20%7C%20Blood%20in%20the%20Water%20%28Field-Tested%29";

const string CZ75_Auto_Crimson_Web_Name = "CZ75-Auto%20%7C%20Crimson%20Web%20%28Field-Tested%29";
const string P2000_Red_FragCam_Name = "P2000%20%7C%20Red%20FragCam%20%28Field-Tested%29";
const string Dualies_Panther_Name = "Dual%20Berettas%20%7C%20Panther%20%28Field-Tested%29";
const string USPS_Stainless_Name = "USP-S%20%7C%20Stainless%20%28Field-Tested%29";
const string Glock_18_Blue_Fissure_Name = "Glock-18%20%7C%20Blue%20Fissure%20%28Field-Tested%29";
const string CZ75_Auto_Tread_Plate_Name = "CZ75-Auto%20%7C%20Tread%20Plate%20%28Minimal%20Wear%29";
const string Tec_9_Titanium_Bit_Name = "Tec-9%20%7C%20Titanium%20Bit%20%28Field-Tested%29";
const string Deagle_Heirloom_Name = "Desert%20Eagle%20%7C%20Heirloom%20%28Field-Tested%29";
const string Five_Seven_Copper_Galaxy_Name = "Five-SeveN%20%7C%20Copper%20Galaxy%20%28Minimal%20Wear%29";
const string CZ75_Auto_The_Fuschia_Is_Now_Name = "CZ75-Auto%20%7C%20The%20Fuschia%20Is%20Now%20%28Minimal%20Wear%29";
const string P250_Undertow_Name = "P250%20%7C%20Undertow%20%28Minimal%20Wear%29";
const string CZ75_Auto_Victoria_Name = "CZ75-Auto%20%7C%20Victoria%20%28Field-Tested%29";

const string M4A4_Faded_Zebra_Name = "M4A4%20%7C%20Faded%20Zebra%20%28Field-Tested%29";
const string MAG_7_Memento_Name = "MAG-7%20%7C%20Memento%20%28Minimal%20Wear%29";
const string FAMAS_Doomkitty_Name = "FAMAS%20%7C%20Doomkitty%20%28Field-Tested%29";
const string Galil_AR_Orange_DDPAT_Name = "Galil%20AR%20%7C%20Orange%20DDPAT%20%28Field-Tested%29";
const string Sawed_Off_Orange_DDPAT_Name = "Sawed-Off%20%7C%20Orange%20DDPAT%20%28Field-Tested%29";
const string P250_Splash_Name = "P250%20%7C%20Splash%20%28Minimal%20Wear%29";
const string AK47_Red_Laminate_Name = "AK-47%20%7C%20Red%20Laminate%20%28Field-Tested%29";
const string AWP_BOOM_Name = "AWP%20%7C%20BOOM%20%28Field-Tested%29";
const string P90_Death_by_Kitty_Name = "P90%20%7C%20Death%20by%20Kitty%20%28Field-Tested%29";

const string Galil_AR_Blue_Titanium_Name = "Galil%20AR%20%7C%20Blue%20Titanium%20%28Factory%20New%29";
const string Five_Seven_Nightshade_Name = "Five-SeveN%20%7C%20Nightshade%20%28Field-Tested%29";
const string PP_Bizon_Water_Sigil_Name = "PP-Bizon%20%7C%20Water%20Sigil%20%28Field-Tested%29";
const string Nova_Ghost_Camo_Name = "Nova%20%7C%20Ghost%20Camo%20%28Field-Tested%29";
const string G3SG1_Azure_Zebra_Name = "G3SG1%20%7C%20Azure%20Zebra%20%28Minimal%20Wear%29";
const string P250_Steel_Disruption_Name = "P250%20%7C%20Steel%20Disruption%20%28Factory%20New%29";
const string AK47_Blue_Laminate_Name = "AK-47%20%7C%20Blue%20Laminate%20%28Field-Tested%29";
const string P90_Blind_Spot_Name = "P90%20%7C%20Blind%20Spot%20%28Field-Tested%29";
const string FAMAS_Afterimage_Name = "FAMAS%20%7C%20Afterimage%20%28Field-Tested%29";
const string AWP_Electric_Hive_Name = "AWP%20%7C%20Electric%20Hive%20%28Field-Tested%29";
const string Deagle_Cobalt_Disruption_Name = "Desert%20Eagle%20%7C%20Cobalt%20Disruption%20%28Field-Tested%29";
const string M4A4_XRay_Name = "M4A4%20%7C%20X-Ray%20%28Field-Tested%29";

const string SSG08_Dark_Water_Name = "SSG%2008%20%7C%20Dark%20Water%20%28Field-Tested%29";
const string MAC_10_Ultraviolet_Name = "MAC-10%20%7C%20Ultraviolet%20%28Field-Tested%29";
const string USPS_Blood_Tiger_Name = "USP-S%20%7C%20Blood%20Tiger%20%28Minimal%20Wear%29";
const string CZ75_Auto_Hexane_Name = "CZ75-Auto%20%7C%20Hexane%20%28Field-Tested%29";
const string Negev_Bratatat_Name = "Negev%20%7C%20Bratatat%20%28Field-Tested%29";
const string XM1014_Red_Python_Name = "XM1014%20%7C%20Red%20Python%20%28Field-Tested%29";
const string PP_Bizon_Blue_Streak_Name = "PP-Bizon%20%7C%20Blue%20Streak%20%28Field-Tested%29";
const string P90_Virus_Name = "P90%20%7C%20Virus%20%28Field-Tested%29";
const string MP7_Ocean_Foam_Name = "MP7%20%7C%20Ocean%20Foam%20%28Factory%20New%29";
const string Glock_18_Steel_Disruption_Name = "Glock-18%20%7C%20Steel%20Disruption%20%28Minimal%20Wear%29";
const string Deagle_Crimson_Web_Name = "Desert%20Eagle%20%7C%20Crimson%20Web%20%28Field-Tested%29";
const string AUG_Bengal_Tiger_Name = "AUG%20%7C%20Bengal%20Tiger%20%28Field-Tested%29";
const string Nova_Bloomstick_Name = "Nova%20%7C%20Bloomstick%20%28Field-Tested%29";
const string AWP_Corticera_Name = "AWP%20%7C%20Corticera%20%28Field-Tested%29";
const string P2000_Corticera_Name = "P2000%20%7C%20Corticera%20%28Field-Tested%29";
const string M4A4_Bullet_Rain_Name = "M4A4%20%7C%20Bullet%20Rain%20%28Field-Tested%29";
const string AK47_Jaguar_Name = "AK-47%20%7C%20Jaguar%20%28Field-Tested%29";

const string Tec_9_Isaac_Name = "Tec-9%20%7C%20Isaac%20%28Field-Tested%29";
const string SSG08_Slashed_Name = "SSG%2008%20%7C%20Slashed%20%28Field-Tested%29";
const string Galil_AR_Kami_Name = "Galil%20AR%20%7C%20Kami%20%28Field-Tested%29";
const string CZ75_Auto_Twist_Name = "CZ75-Auto%20%7C%20Twist%20%28Field-Tested%29";
const string P90_Module_Name = "P90%20%7C%20Module%20%28Field-Tested%29";
const string P2000_Pulse_Name = "P2000%20%7C%20Pulse%20%28Field-Tested%29";
const string AUG_Torque_Name = "AUG%20%7C%20Torque%20%28Field-Tested%29";
const string PP_Bizon_Antique_Name = "PP-Bizon%20%7C%20Antique%20%28Field-Tested%29";
const string XM1014_Heaven_Guard_Name = "XM1014%20%7C%20Heaven%20Guard%20%28Field-Tested%29";
const string MAC_10_Tatter_Name = "MAC-10%20%7C%20Tatter%20%28Field-Tested%29";
const string M4A1S_Atomic_Alloy_Name = "M4A1-S%20%7C%20Atomic%20Alloy%20%28Field-Tested%29";
const string SCAR_20_Cyrex_Name = "SCAR-20%20%7C%20Cyrex%20%28Field-Tested%29";
const string USPS_Caiman_Name = "USP-S%20%7C%20Caiman%20%28Field-Tested%29";
const string AK47_Vulcan_Name = "AK-47%20%7C%20Vulcan%20%28Field-Tested%29";
const string M4A4_Desert_Strike_Name = "M4A4%20%7C%20Desert-Strike%20%28Field-Tested%29";

const string Glock_18_Catacombs_Name = "Glock-18%20%7C%20Catacombs%20%28Field-Tested%29";
const string M249_System_Lock_Name = "M249%20%7C%20System%20Lock%20%28Field-Tested%29";
const string MP9_Deadly_Poison_Name = "MP9%20%7C%20Deadly%20Poison%20%28Field-Tested%29";
const string SCAR_20_Grotto_Name = "SCAR-20%20%7C%20Grotto%20%28Field-Tested%29";
const string XM1014_Quicksilver_Name = "XM1014%20%7C%20Quicksilver%20%28Field-Tested%29";
const string Dualies_Urban_Shock_Name = "Dual%20Berettas%20%7C%20Urban%20Shock%20%28Field-Tested%29";
const string Deagle_Naga_Name = "Desert%20Eagle%20%7C%20Naga%20%28Field-Tested%29";
const string MAC_10_Malachite_Name = "MAC-10%20%7C%20Malachite%20%28Field-Tested%29";
const string Sawed_Off_Serenity_Name = "Sawed-Off%20%7C%20Serenity%20%28Field-Tested%29";
const string AK47_Cartel_Name = "AK-47%20%7C%20Cartel%20%28Field-Tested%29";
const string M4A4_Dragon_King_Name = "M4A4%20%7C%20龍王%20%28Dragon%20King%29%20%28Field-Tested%29";
const string P250_Muertos_Name = "P250%20%7C%20Muertos%20%28Field-Tested%29";
const string AWP_Man_o_war_Name = "AWP%20%7C%20Man-o%27-war%20%28Field-Tested%29";
const string Galil_AR_Chatterbox_Name = "Galil%20AR%20%7C%20Chatterbox%20%28Well-Worn%29";

const string AK47_Elite_Build_Name = "AK-47%20%7C%20Elite%20Build%20%28Field-Tested%29";
const string MP7_Armor_Core_Name = "MP7%20%7C%20Armor%20Core%20%28Field-Tested%29";
const string Deagle_Bronze_Deco_Name = "Desert%20Eagle%20%7C%20Bronze%20Deco%20%28Field-Tested%29";
const string P250_Valence_Name = "P250%20%7C%20Valence%20%28Field-Tested%29";
const string Negev_Man_o_war_Name = "Negev%20%7C%20Man-o%27-war%20%28Minimal%20Wear%29";
const string Sawed_Off_Origami_Name = "Sawed-Off%20%7C%20Origami%20%28Field-Tested%29";
const string AWP_Worm_God_Name = "AWP%20%7C%20Worm%20God%20%28Field-Tested%29";
const string MAG_7_Heat_Name = "MAG-7%20%7C%20Heat%20%28Field-Tested%29";
const string CZ75_Auto_Pole_Position_Name = "CZ75-Auto%20%7C%20Pole%20Position%20%28Field-Tested%29";
const string UMP_45_Grand_Prix_Name = "UMP-45%20%7C%20Grand%20Prix%20%28Field-Tested%29";
const string Five_Seven_Monkey_Business_Name = "Five-SeveN%20%7C%20Monkey%20Business%20%28Field-Tested%29";
const string Galil_AR_Eco_Name = "Galil%20AR%20%7C%20Eco%20%28Field-Tested%29";
const string FAMAS_Djinn_Name = "FAMAS%20%7C%20Djinn%20%28Field-Tested%29";
const string M4A1S_Hyper_Beast_Name = "M4A1-S%20%7C%20Hyper%20Beast%20%28Field-Tested%29";
const string MAC_10_Neon_Rider_Name = "MAC-10%20%7C%20Neon%20Rider%20%28Field-Tested%29";

const string SG553_Wave_Spray_Name = "SG%20553%20%7C%20Wave%20Spray%20%28Field-Tested%29";
const string Dualies_Black_Limba_Name = "Dual%20Berettas%20%7C%20Black%20Limba%20%28Field-Tested%29";
const string Nova_Tempest_Name = "Nova%20%7C%20Tempest%20%28Minimal%20Wear%29";
const string Galil_AR_Shattered_Name = "Galil%20AR%20%7C%20Shattered%20%28Field-Tested%29";
const string UMP_45_Bone_Pile_Name = "UMP-45%20%7C%20Bone%20Pile%20%28Field-Tested%29";
const string G3SG1_Demeter_Name = "G3SG1%20%7C%20Demeter%20%28Field-Tested%29";
const string USPS_Overgrowth_Name = "USP-S%20%7C%20Overgrowth%20%28Field-Tested%29";
const string M4A4_Zirka_Name = "M4A4%20%7C%20Zirka%20%28Field-Tested%29";
const string MAC_10_Graven_Name = "MAC-10%20%7C%20Graven%20%28Field-Tested%29";
const string M4A1S_Bright_Water_Name = "M4A1-S%20%7C%20Bright%20Water%20%28Field-Tested%29";
const string P90_Emerald_Dragon_Name = "P90%20%7C%20Emerald%20Dragon%20%28Field-Tested%29";
const string P2000_Ocean_Foam_Name = "P2000%20%7C%20Ocean%20Foam%20%28Factory%20New%29";
const string AWP_Graphite_Name = "AWP%20%7C%20Graphite%20%28Factory%20New%29";
const string AK47_Fire_Serpent_Name = "AK-47%20%7C%20Fire%20Serpent%20%28Field-Tested%29";
const string Deagle_Golden_Koi_Name = "Desert%20Eagle%20%7C%20Golden%20Koi%20%28Factory%20New%29";

const string MP7_Urban_Hazard_Name = "MP7%20%7C%20Urban%20Hazard%20%28Field-Tested%29";
const string Negev_Desert_Strike_Name = "Negev%20%7C%20Desert-Strike%20%28Field-Tested%29";
const string P2000_Ivory_Name = "P2000%20%7C%20Ivory%20%28Field-Tested%29";
const string SSG08_Abyss_Name = "SSG%2008%20%7C%20Abyss%20%28Field-Tested%29";
const string UMP_45_Labyrinth_Name = "UMP-45%20%7C%20Labyrinth%20%28Field-Tested%29";
const string PP_Bizon_Osiris_Name = "PP-Bizon%20%7C%20Osiris%20%28Field-Tested%29";
const string CZ75_Auto_Tigris_Name = "CZ75-Auto%20%7C%20Tigris%20%28Field-Tested%29";
const string Nova_Koi_Name = "Nova%20%7C%20Koi%20%28Field-Tested%29";
const string P250_Supernova_Name = "P250%20%7C%20Supernova%20%28Field-Tested%29";
const string Deagle_Conspiracy_Name = "Desert%20Eagle%20%7C%20Conspiracy%20%28Field-Tested%29";
const string Five_Seven_Fowl_Play_Name = "Five-SeveN%20%7C%20Fowl%20Play%20%28Field-Tested%29";
const string Glock_18_Water_Elemental_Name = "Glock-18%20%7C%20Water%20Elemental%20%28Field-Tested%29";
const string P90_Asiimov_Name = "P90%20%7C%20Asiimov%20%28Field-Tested%29";
const string M4A1S_Cyrex_Name = "M4A1-S%20%7C%20Cyrex%20%28Field-Tested%29";

const string UMP_45_Corporal_Name = "UMP-45%20%7C%20Corporal%20%28Field-Tested%29";
const string Negev_Terrain_Name = "Negev%20%7C%20Terrain%20%28Field-Tested%29";
const string Tec_9_Sandstorm_Name = "Tec-9%20%7C%20Sandstorm%20%28Field-Tested%29";
const string MAG_7_Heaven_Guard_Name = "MAG-7%20%7C%20Heaven%20Guard%20%28Field-Tested%29";
const string MAC_10_Heat_Name = "MAC-10%20%7C%20Heat%20%28Field-Tested%29";
const string SG_553_Pulse_Name = "SG%20553%20%7C%20Pulse%20%28Field-Tested%29";
const string FAMAS_Sergeant_Name = "FAMAS%20%7C%20Sergeant%20%28Field-Tested%29";
const string USPS_Guardian_Name = "USP-S%20%7C%20Guardian%20%28Field-Tested%29";
const string AK47_Redline_Name = "AK-47%20%7C%20Redline%20%28Field-Tested%29";
const string P90_Trigon_Name = "P90%20%7C%20Trigon%20%28Field-Tested%29";
const string Nova_Antique_Name = "Nova%20%7C%20Antique%20%28Minimal%20Wear%29";
const string AWP_Asiimov_Name = "AWP%20%7C%20Asiimov%20%28Field-Tested%29";
const string AUG_Chameleon_Name = "AUG%20%7C%20Chameleon%20%28Field-Tested%29";

const string G3SG1_Murky_Name = "G3SG1%20%7C%20Murky%20%28Field-Tested%29";
const string MAG_7_Firestarter_Name = "MAG-7%20%7C%20Firestarter%20%28Field-Tested%29";
const string MP9_Dart_Name = "MP9%20%7C%20Dart%20%28Field-Tested%29";
const string Five_Seven_Urban_Hazard_Name = "Five-SeveN%20%7C%20Urban%20Hazard%20%28Field-Tested%29";
const string UMP_45_Delusion_Name = "UMP-45%20%7C%20Delusion%20%28Field-Tested%29";
const string Glock_18_Grinder_Name = "Glock-18%20%7C%20Grinder%20%28Minimal%20Wear%29";
const string M4A1S_Basilisk_Name = "M4A1-S%20%7C%20Basilisk%20%28Field-Tested%29";
const string M4A4_Griffin_Name = "M4A4%20%7C%20Griffin%20%28Field-Tested%29";
const string Sawed_Off_Highwayman_Name = "Sawed-Off%20%7C%20Highwayman%20%28Field-Tested%29";
const string P250_Cartel_Name = "P250%20%7C%20Cartel%20%28Field-Tested%29";
const string SCAR_20_Cardiac_Name = "SCAR-20%20%7C%20Cardiac%20%28Field-Tested%29";
const string XM1014_Tranquility_Name = "XM1014%20%7C%20Tranquility%20%28Field-Tested%29";
const string AK47_Wasteland_Rebel_Name = "AK-47%20%7C%20Wasteland%20Rebel%20%28Field-Tested%29";
const string P2000_Fire_Elemental_Name = "P2000%20%7C%20Fire%20Elemental%20%28Field-Tested%29";

const string Galil_AR_Sandstorm_Name = "Galil%20AR%20%7C%20Sandstorm%20%28Field-Tested%29";
const string Five_Seven_Kami_Name = "Five-SeveN%20%7C%20Kami%20%28Field-Tested%29";
const string M249_Magma_Name = "M249%20%7C%20Magma%20%28Field-Tested%29";
const string PP_Bizon_Cobalt_Halftone_Name = "PP-Bizon%20%7C%20Cobalt%20Halftone%20%28Field-Tested%29";
const string FAMAS_Pulse_Name = "FAMAS%20%7C%20Pulse%20%28Field-Tested%29";
const string Dualies_Marina_Name = "Dual%20Berettas%20%7C%20Marina%20%28Field-Tested%29";
const string MP9_Rose_Iron_Name = "MP9%20%7C%20Rose%20Iron%20%28Field-Tested%29";
const string Nova_Rising_Skull_Name = "Nova%20%7C%20Rising%20Skull%20%28Field-Tested%29";
const string M4A1S_Guardian_Name = "M4A1-S%20%7C%20Guardian%20%28Field-Tested%29";
const string P250_Mehndi_Name = "P250%20%7C%20Mehndi%20%28Field-Tested%29";
const string AWP_Redline_Name = "AWP%20%7C%20Redline%20%28Field-Tested%29";
const string M4A4_Asiimov_Name = "M4A4%20%7C%20Asiimov%20%28Field-Tested%29";
const string Sawed_Off_Kraken_Name = "Sawed-Off%20%7C%20The%20Kraken%20%28Field-Tested%29";

//const string _Name = "";
