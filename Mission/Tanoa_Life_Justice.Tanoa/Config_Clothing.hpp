/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 45, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 45, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 45, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 45, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 45, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 45, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 45, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 45, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 45, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 45, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 45, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 45, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 45, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 100, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 10, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 10, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 10, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 10, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } },
            { "H_Cap_grn", "", 10, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 10, { "", "", -1 } },
            { "H_Cap_oli", "", 10, { "", "", -1 } },
            { "H_Cap_red", "", 10, { "", "", -1 } },
            { "H_Cap_tan", "", 10, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 10, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 10, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 10, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 10, { "", "", -1 } },
            { "H_Hat_tan", "", 10, { "", "", -1 } },
            { "H_Hat_brown", "", 10, { "", "", -1 } },
            { "H_Hat_grey", "", 10, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 10, { "", "", -1 } },
            { "H_Hat_blue", "", 10, { "", "", -1 } },
            { "H_Hat_checker", "", 10, { "", "", -1 } },
            { "H_Booniehat_tan", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 5, { "", "", -1 } },
            { "G_Shades_Blue", "", 5, { "", "", -1 } },
            { "G_Shades_Green", "", 5, { "", "", -1 } },
            { "G_Shades_Red", "", 5, { "", "", -1 } },
            { "G_Sport_Blackred", "", 5, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 5, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 5, { "", "", -1 } },
            { "G_Sport_Checkered", "", 5, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 5, { "", "", -1 } },
            { "G_Sport_Red", "", 5, { "", "", -1 } },
            { "G_Lowprofile", "", 5, { "", "", -1 } },
            { "G_Squares", "", 5, { "", "", -1 } },
            { "G_Aviator", "", 5, { "", "", -1 } },
            { "G_Combat", "", 5, { "", "", -1 } },
            { "G_Lady_Mirror", "", 5, { "", "", -1 } },
            { "G_Lady_Dark", "", 5, { "", "", -1 } },
            { "G_Lady_Blue", "", 5, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 100, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 100, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 100, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 100, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 100, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 100, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 100, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 100, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 125, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 150, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 150, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 150, { "", "", -1 } },
            { "B_FieldPack_blk", "", 150, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 150, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 150, { "", "", -1 } },
            { "B_Bergen_sgg", "", 325, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 325, { "", "", -1 } },
            { "B_Bergen_rgr", "", 325, { "", "", -1 } },
            { "B_Bergen_blk", "", 325, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 200, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 200, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 200, { "", "", -1 } },
            { "B_Carryall_oli", "", 200, { "", "", -1 } },
            { "B_Carryall_khk", "", 200, { "", "", -1 } },
            { "B_Carryall_cbr", "", 200, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "demian2435_police_man_uniform", "Cop Uniform", 5, { "", "", -1 } },
            { "RM_SWAT_Uniform_01", "SWAT Uniform", 10, { "life_coplevel", "SCALAR", 3 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "Cop Cap", 5, { "life_coplevel", "SCALAR", 2 } },
            { "CPE_SWAT_FAST_2", "Cop Cap", 5, { "life_coplevel", "SCALAR", 3 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 1, { "", "", -1 } },
            { "G_Shades_Blue", "", 1, { "", "", -1 } },
            { "G_Sport_Blackred", "", 1, { "", "", -1 } },
            { "G_Sport_Checkered", "", 1, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 1, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 1, { "", "", -1 } },
            { "G_Shades_Black", "", 1, { "", "", -1 } },
            { "G_Lowprofile", "", 1, { "", "", -1 } },
            { "G_Combat", "", 1, { "", "", -1 } },
            { "G_Aviator", "", 1, { "", "", -1 } },
            { "G_Lady_Mirror", "", 1, { "", "", -1 } },
            { "G_Lady_Dark", "", 1, { "", "", -1 } },
            { "G_Lady_Blue", "", 1, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "demian2435_police_belt", "", 10, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 25, { "life_coplevel", "SCALAR", 2 } },
            { "RM_SWAT_Vest_01", "", 25, { "life_coplevel", "SCALAR", 3 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 10, { "", "", -1 } },
            { "TRYK_B_Kitbag_blk", "", 20, { "life_coplevel", "SCALAR", 2 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "EMS Uniform", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 3000, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
            { "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
            { "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
            { "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
            { "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
            { "U_O_GhillieSuit", "", 50000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } },
            { "V_TacVest_khk", "", 12500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
