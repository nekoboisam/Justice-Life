/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 25, -1 },
            { "ItemGPS", "", 100, 50 },
            { "ItemMap", "", 5, 35 },
            { "ItemCompass", "", 5, 25 },
            { "ItemWatch", "", 5, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 1000 },
            { "Chemlight_red", "", 50, -1 },
            { "Chemlight_yellow", "", 50, 25 },
            { "Chemlight_green", "", 50, 25 },
            { "Chemlight_blue", "", 50, 25 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "TPD Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "RH_p226", "Sig P226", 500, -1 },
            { "CSW_M26C", "Tazer", 250, -1 },
            { "Binocular", "", 150, -1 },
            { "tf_anprc152", "", 50, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 1000, -1 }
        };
        mags[] = {
            { "RH_15Rnd_9x19_SIG", "", 5 },
            { "CSW_Taser_Probe_Mag", "Probe box", 5 }
        };
        accs[] = {};
    };

    class cop_sergeant {
        name = "TPD Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Sergeant!" };
        items[] = {
            { "SMG_02_F", "", 750, -1 },
            { "SMG_05_F", "", 750, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag_SMG_02", "", 5, -1 }
        };
        accs[] = {
            { "acc_flashlight", "", 25, -1 },
            { "optic_Holosight_smg_blk_F", "", 250, -1 }
        };
    };

    class cop_swat {
        name = "TPD SWAT Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be SWAT Certified!" };
        items[] = {
            { "arifle_SPAR_01_blk_F", "", 1000, -1 },
            { "optic_Holosight_blk_F", "", 500, -1 },
            { "HandGrenade_Stone", "Flashbang", 150, -1 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 10 },
            { "RH_15Rnd_9x19_SIG", "", 5 },
            { "SmokeShell", "", 5 }
        };
        accs[] = {
            { "optic_Holosight_blk_F", "", 500 },
            { "KA_ANPEQ15_Black_IR", "", 500 },
            { "optic_Arco_blk_F", "", 500 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 1, 45 },
            { "Binocular", "", 1, -1 },
            { "FirstAidKit", "", 1, 65 },
            { "NVGoggles", "", 1, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
