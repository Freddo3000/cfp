#define public 2

#define mag_xx(a,b) class _xx_##a {magazine = CUP_##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = CUP_##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}


class CBA_Extended_EventHandlers_base;
class CfgEditorSubCategories
{
    class CFP_EdSubcat_Personnel_SAD { displayName = "Men (Special Activities Division)";  };
};
class CfgVehicles {

    class CUP_B_US_SpecOps;
    class CUP_B_US_SpecOps_OCimport_01 : CUP_B_US_SpecOps { scope = 0; class EventHandlers; };

	class CFP_B_USCIA_Paramilitary_Officer_Base : CUP_B_US_SpecOps_OCimport_01 {
 		author = "Tupolov";
        scope = 1;
        scopeCurator = 1;
        displayName = "Paramilitary Officer";
        side = 1;
        faction = "CFP_B_USCIA";
        editorSubcategory = "CFP_EdSubcat_Personnel_SAD";
        identityTypes[] = { "Head_NATO" , "LanguageENG_F" , "G_GUERIL_default" };

        uniformClass = "U_BG_Guerilla2_1";

        linkedItems[] = {"ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        randomGearProbability = 100;
        randomWeaponProbability = 100;

        // Civilian clothes
		uniformList[] = {
			"U_BG_Guerilla2_1", 0.25,
			"U_BG_Guerilla2_2", 0.25,
			"U_BG_Guerilla2_3", 0.25,
			"U_BG_Guerilla3_1", 0.25,
            "U_C_HunterBody_grn", 0.25,
            "CUP_I_B_PMC_Unit_13", 0.25,
            "CUP_I_B_PMC_Unit_15", 0.25,
            "CUP_I_B_PMC_Unit_19", 0.25,
            "CUP_I_B_PMC_Unit_20", 0.25,
            "CUP_I_B_PMC_Unit_3", 0.25,
            "CUP_I_B_PMC_Unit_7", 0.25,
            "CUP_I_B_PMC_Unit_11", 0.25,
            "CUP_U_C_Pilot_01", 0.2,
            "U_Marshal", 0.1,
            "U_C_Mechanic_01_F", 0.1
		};

		// Basic Rigs
		vestList[] = {
			"CUP_V_I_RACS_Carrier_Vest", 0.25,
            "CUP_V_I_RACS_Carrier_Vest_2", 0.25,
            "CUP_V_I_RACS_Carrier_Vest_3", 0.25,
			"V_Chestrig_khk", 0.25,
            "V_Chestrig_oli", 0.25,
            "SP_Chestrig1_Tan", 0.25,
            "SP_Harness1_Tan", 0.25,
            "CUP_V_B_GER_Carrier_Rig_3_Brown", 0.25,
            "CUP_V_B_GER_Carrier_Rig_2_Brown", 0.25,
            "SP_Modular1_Tan", 0.25,
            "SP_Tactical1_Tan", 0.25,
            "SP_OpforRig1_Tan", 0.25,
            "SP_PlateCarrier1_Tan", 0.25,
            "V_TacChestrig_cbr_F", 0.25,
            "V_TacVest_brn",0.2,
            "V_TacVest_khk",0.2,
            "V_TacVestR_F", 0.1,
            "CUP_V_B_RRV_Scout3",0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.15,
            "CUP_V_OI_TKI_Jacket4_05", 0.15,
            "CUP_V_OI_TKI_Jacket4_06", 0.15,
            "CUP_V_OI_TKI_Jacket3_06", 0.15,
            "CUP_V_OI_TKI_Jacket6_06", 0.1
		};

		// Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
        	"", 0.6,
        	"G_Bandanna_blk", 0.1,
            "G_Bandanna_khk", 0.2,
            "G_Bandanna_tan", 0.2,
            "CUP_TK_NeckScarf", 0.3,
            "G_Shades_Black",0.3,
            "G_Shades_Blue",0.3,
            "SP_Shades_Black",0.3,
            "CUP_FR_Neckscarf2",0.3
        };

      	// Baseball caps, boonies,
        headgearList[] = {
            "", 0.4,
			"SP_BaseballCap_Tan", 0.3,
            "SP_BaseballCap_Black", 0.3,
			"H_WatchCap_cbr", 0.25,
            "H_WatchCap_khk", 0.2,
            "H_WatchCap_blk", 0.2,
            "SP_BeanieHat_Tan", 0.2,
            "SP_BeanieHat_Black", 0.2,
            "CUP_H_USMC_BOONIE_DES", 0.25,
            "CUP_H_USMC_BOONIE_PRR_DES", 0.25,
            "SP_BoonieHat_Tan", 0.25,
            "H_BoonieHat_tan",0.25,
            "H_BoonieHat_khk",0.25,
            "H_BoonieHat_mcamo",0.25,
            "H_BoonieHat_khk_hs",0.25,
            "H_Cap_blk",0.3,
            "H_Cap_tan",0.3,
            "CUP_H_PMC_Cap_Back_Tan",0.35,
            "CUP_H_PMC_Cap_Back_EP_Tan",0.35,
            "CUP_H_PMC_Cap_Back_Grey",0.35,
            "CUP_H_PMC_Cap_Back_EP_Grey",0.35,
            "CUP_H_PMC_Cap_Back_PRR_Tan",0.35,
            "CUP_H_PMC_Cap_Back_PRR_Grey",0.35,
            "CUP_H_PMC_Cap_PRR_Tan",0.35,
            "CUP_H_PMC_Cap_PRR_Grey",0.35,
            "CUP_H_PMC_Cap_EP_Tan",0.35,
            "CUP_H_PMC_Cap_EP_Grey",0.35,
            "SP_Headset_Tan",0.35,
            "SP_Headset_Black",0.35
        };

        nvgList[] = {
            "", 1
        };

        backpackList[] = {
            "",0.7,
			"B_AssaultPack_cbr", 0.25,
            "B_AssaultPack_khk", 0.25,
            "B_AssaultPack_mcamo", 0.25,
            "B_AssaultPack_cbr", 0.25,
			"SP_Carryall_Tan", 0.2,
			"B_Carryall_khk", 0.2,
            "B_Carryall_mcamo", 0.2,
            "B_Carryall_cbr", 0.2,
            "B_Kitbag_mcamo", 0.2,
            "B_Kitbag_cbr", 0.2,
            "CUP_B_AssaultPack_Coyote", 0.2
        };

        grenadeList[] = {
        	{"HandGrenade",4}, 0.25,
			{"MiniGrenade",4}, 0.25,
			{"CUP_HandGrenade_M67",4}, 0.25,
			{"CUP_HandGrenade_L109A2_HE",4}, 0.25
        };

        // 6-8 options
        rifleList[] = {
        	{"CUP_arifle_M4A1_camo_Aim",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4,
        	{"CUP_arifle_M4A3_desert_Aim_Flashlight",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4,
        	{"CUP_arifle_M4A1_Aim",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4,
        	{"CUP_arifle_AK74M",{"CUP_30Rnd_545x39_AK_M",6}}, 0.3,
        	{"CUP_arifle_AK107",{"CUP_30Rnd_545x39_AK_M",6}}, 0.2,
        	{"CUP_arifle_AKS74",{"CUP_30Rnd_545x39_AK_M",6}}, 0.3,
        	{"CUP_arifle_AKS74_pso",{"CUP_30Rnd_545x39_AK_M",6}}, 0.1,
        	{"CUP_arifle_AKS74U",{"CUP_30Rnd_545x39_AK_M",6}}, 0.1,
        	{"CUP_arifle_CZ805_A2_Holo_Laser",{"CUP_30Rnd_556x45_G36",6}}, 0.2,
        	{"CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds",{"CUP_30Rnd_556x45_Stanag",6}}, 0.2
        };

        handgunList[] = {
            {"CUP_hgun_Glock17",{"CUP_17Rnd_9x19_glock17",3}}, 0.8,
           	{"CUP_hgun_M9",{"CUP_15Rnd_9x19_M9",3}}, 0.4, // M9
        	{"CUP_hgun_Makarov",{"CUP_8Rnd_9x18_Makarov_M",3}}, 0.4,
        	{"CUP_hgun_MicroUzi",{"CUP_30Rnd_9x19_UZI",3}}, 0.2,
        	{"CUP_hgun_M9_snds",{"CUP_15Rnd_9x19_M9",3}}, 0.2
        };

        explosiveList[] = {
        	{}, 0.9,
        	{{"CUP_TimeBomb_M",2}}, 0.2,
        	{{"CUP_Mine_M",2}}, 0.2,
        	{{"CUP_PipeBomb_M",2}}, 0.2,
        	{{"CUP_IED_V1_M",2}}, 0.2
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ADDON
            {
                init = "if (local (_this select 0)) then { _onSpawn = { private _unit = _this select 0; sleep 0.2; [_unit] call CFP_main_fnc_randomizeUnit; }; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };
	};

	class CFP_B_USCIA_paramilitary_officer_01 : CFP_B_USCIA_Paramilitary_Officer_Base {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_paramilitary_officer_01.JPG";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary Officer";

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

	class CFP_B_USCIA_paramilitary_officer_covert_01 : CFP_B_USCIA_Paramilitary_Officer_Base {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_paramilitary_officer_covert_01.JPG";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary Officer (Covert)";

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

        uniformClass = "CUP_O_TKI_Khet_Jeans_01";

        uniformList[] = {
            "CUP_O_TKI_Khet_Jeans_01", 0.25,
            "CUP_O_TKI_Khet_Jeans_02", 0.25,
            "CUP_O_TKI_Khet_Jeans_03", 0.25,
            "CUP_O_TKI_Khet_Jeans_04", 0.25,
            "CUP_O_TKI_Khet_Partug_01", 0.25,
            "CUP_O_TKI_Khet_Partug_02", 0.25,
            "CUP_O_TKI_Khet_Partug_03", 0.25,
            "CUP_O_TKI_Khet_Partug_04", 0.25,
            "CUP_O_TKI_Khet_Partug_05", 0.25,
            "CUP_O_TKI_Khet_Partug_06", 0.25,
            "CUP_O_TKI_Khet_Partug_07", 0.25,
            "CUP_O_TKI_Khet_Partug_08", 0.25
        };

        vestList[] = {
            "V_Chestrig_khk", 0.25,
            "V_Chestrig_oli", 0.25,
            "SP_Chestrig1_Tan", 0.25,
            "SP_Harness1_Tan", 0.25,
            "SP_OpforRig1_Tan", 0.25,
            "CUP_V_OI_TKI_Jacket1_06", 0.25,
            "CUP_V_OI_TKI_Jacket4_05", 0.25,
            "CUP_V_OI_TKI_Jacket4_06", 0.25,
            "CUP_V_OI_TKI_Jacket3_06", 0.25,
            "CUP_V_OI_TKI_Jacket6_06", 0.1
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "", 0.5,
            "CUP_TK_NeckScarf", 0.3,
            "CUP_FR_Neckscarf2",0.3,
            "CUP_FR_Neckscarf",0.3
        };

        // Baseball caps, boonies,
        headgearList[] = {
            "SP_Shemagh_CheckTan", 0.2,
            "SP_Shemagh_CheckWhite", 0.2,
            "SP_Shemagh_Tan", 0.2,
            "SP_Shemagh_White", 0.2,
            "CUP_H_TKI_Lungee_Open_01", 0.3,
            "CUP_H_TKI_Lungee_Open_02", 0.3,
            "CUP_H_TKI_Lungee_Open_03", 0.3,
            "CUP_H_TKI_Lungee_Open_04", 0.3,
            "CUP_H_TKI_Lungee_Open_05", 0.3,
            "CUP_H_TKI_Lungee_Open_06", 0.3,
            "CUP_H_TKI_Pakol_1_01", 0.25,
            "CUP_H_TKI_Pakol_1_02", 0.25,
            "CUP_H_TKI_Pakol_1_03", 0.25,
            "CUP_H_TKI_Pakol_1_04", 0.25,
            "CUP_H_TKI_Pakol_1_05", 0.25,
            "CUP_H_TKI_Pakol_1_06", 0.25,
            "CUP_H_TKI_Pakol_2_01", 0.25,
            "CUP_H_TKI_Pakol_2_02", 0.25,
            "CUP_H_TKI_Pakol_2_03", 0.25,
            "CUP_H_TKI_Pakol_2_04", 0.25,
            "CUP_H_TKI_Pakol_2_05", 0.25,
            "CUP_H_TKI_Pakol_2_06", 0.25,
            "CUP_H_TKI_SkullCap_01", 0.25,
            "CUP_H_TKI_SkullCap_02", 0.25,
            "CUP_H_TKI_SkullCap_03", 0.25,
            "CUP_H_TKI_SkullCap_04", 0.25,
            "CUP_H_TKI_SkullCap_05", 0.25,
            "CUP_H_TKI_SkullCap_06", 0.25,
            "CUP_H_TKI_Lungee_01", 0.2,
            "CUP_H_TKI_Lungee_02", 0.2,
            "CUP_H_TKI_Lungee_03", 0.2,
            "CUP_H_TKI_Lungee_04", 0.2,
            "CUP_H_TKI_Lungee_05", 0.2,
            "CUP_H_TKI_Lungee_06", 0.2
        };

        nvgList[] = {
            "", 1
        };

        backpackList[] = {
            "",0.7,
            "CUP_B_AlicePack_Khaki", 0.25,
            "B_FieldPack_cbr", 0.2,
            "B_FieldPack_khk", 0.2
        };

        insigniaList[] = {};

        // 6-8 options
        rifleList[] = {
            {"CUP_arifle_M4A1_camo_Aim",{"CUP_30Rnd_556x45_Stanag",6}}, 0.3,
            {"CUP_arifle_M4A3_desert_Aim_Flashlight",{"CUP_30Rnd_556x45_Stanag",6}}, 0.3,
            {"CUP_arifle_M4A1_Aim",{"CUP_30Rnd_556x45_Stanag",6}}, 0.3,
            {"CUP_arifle_AK74M",{"CUP_30Rnd_545x39_AK_M",6}}, 0.4,
            {"CUP_arifle_AK107",{"CUP_30Rnd_545x39_AK_M",6}}, 0.3,
            {"CUP_arifle_AKS74",{"CUP_30Rnd_545x39_AK_M",6}}, 0.4,
            {"CUP_arifle_AKS74_pso",{"CUP_30Rnd_545x39_AK_M",6}}, 0.1,
            {"CUP_arifle_AKS74U",{"CUP_30Rnd_545x39_AK_M",6}}, 0.3,
            {"CUP_arifle_CZ805_A2_Holo_Laser",{"CUP_30Rnd_556x45_G36",6}}, 0.2,
            {"CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds",{"CUP_30Rnd_556x45_Stanag",6}}, 0.2
        };
    };

	class CFP_B_USCIA_paramilitary_officer_assault_01 : CFP_B_USCIA_Paramilitary_Officer_Base {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_paramilitary_officer_assault_01.JPG";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary Trooper (Leader)";
        uniformClass = "CFP_U_FieldUniform_multicam";

        // Camo clothes
        uniformList[] = {
            "CFP_U_FieldUniform_multicam", 0.8,
            "U_B_CombatUniform_mcam_tshirt", 0.2,
            "SP_0000_Standard_FieldUniform_Tan_SS", 0.2,
            "SP_0000_Standard_TacticalUniform_Tan_TS", 0.2,
            "U_B_CombatUniform_mcam_tshirt", 0.2,
            "U_B_CombatUniform_mcam", 0.2,
            "U_BG_Guerilla2_1",0.2
        };

        insigniaList[] = {
            "MORALE", 0.5,
            "BLOOD", 0.5
        };

        // Carrier
        vestList[] = {
            "CUP_V_I_RACS_Carrier_Vest", 0.25,
            "CUP_V_I_RACS_Carrier_Vest_2", 0.25,
            "CUP_V_I_RACS_Carrier_Vest_3", 0.25,
            "CUP_V_B_GER_Carrier_Rig_2_Brown", 0.25,
            "CUP_V_B_RRV_DA1",0.25,
            "CUP_V_B_RRV_DA2",0.25,
            "CUP_V_B_RRV_Scout3",0.25,
            "SP_Modular1_Tan", 0.25,
            "SP_Tactical1_Tan", 0.25,
            "V_PlateCarrier1_blk", 0.25,
            "V_PlateCarrier2_blk", 0.25,
            "SP_PlateCarrier1_Tan", 0.25,
            "SP_PlateCarrier1_Grey", 0.25
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "", 0.3,
            "G_Bandanna_blk", 0.4,
            "G_Bandanna_khk", 0.4,
            "G_Bandanna_tan", 0.4,
            "CUP_TK_NeckScarf", 0.3,
            "SP_Goggles_Black",0.3,
            "SP_Goggles_Tan",0.3,
            "G_Lowprofile",0.3,
            "CUP_FR_Neckscarf2",0.3
        };

        // Baseball caps, boonies,
        headgearList[] = {
            "SP_ProTecHelmet_Tan", 0.3,
            "SP_ECHHelmet_Tan1", 0.3,
            "SP_ProTecHelmet_Black", 0.25,
            "CUP_H_USArmy_Helmet_Pro_gog", 0.25,
            "CUP_H_USArmy_Helmet_Pro", 0.25,
            "CUP_H_USArmy_Helmet_ECH1_Sand", 0.25,
            "CUP_H_USArmy_Helmet_ECH2_Sand", 0.25,
            "CUP_H_FR_ECH", 0.25,
            "H_HelmetB_light_sand", 0.2,
            "H_HelmetB_light_desert", 0.2,
            "CUP_H_PMC_Cap_Back_EP_Tan", 0.1
        };

        nvgList[] = {
            "", 0.8,
            "CUP_NVG_PVS7", 0.25,
            "NVGoggles", 0.1
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USCIA_paramilitary_officer_assault_02 : CFP_B_USCIA_paramilitary_officer_assault_01 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_paramilitary_officer_assault_02.JPG";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary Trooper (Grenadier)";

        rifleList[] = {
            {"CUP_arifle_M4A1_BUIS_desert_GL",{{"CUP_30Rnd_556x45_Stanag",6},{"CUP_1Rnd_HE_M203",4},{"CUP_1Rnd_HEDP_M203",2}}}, 0.4,
            {"CUP_arifle_M4A1_BUIS_GL",{{"CUP_30Rnd_556x45_Stanag",6},{"CUP_1Rnd_HE_M203",4},{"CUP_1Rnd_HEDP_M203",2}}}, 0.4,
            {"CUP_arifle_Mk16_CQC_EGLM",{{"CUP_30Rnd_556x45_Stanag",6},{"CUP_1Rnd_HE_M203",4},{"CUP_1Rnd_HEDP_M203",2}}}, 0.4,
            {"CUP_arifle_Mk17_CQC_EGLM",{{"CUP_30Rnd_556x45_Stanag",6},{"CUP_1Rnd_HE_M203",4},{"CUP_1Rnd_HEDP_M203",2}}}, 0.3,
            {"CUP_arifle_AK74_GL",{{"CUP_30Rnd_545x39_AK_M",6},{"CUP_1Rnd_HE_GP25_M",4},{"CUP_1Rnd_HE_GP25_M",2}}}, 0.3,
            {"CUP_arifle_AK74M_GL",{{"CUP_30Rnd_545x39_AK_M",6},{"CUP_1Rnd_HE_GP25_M",4},{"CUP_1Rnd_HE_GP25_M",2}}}, 0.3,
            {"CUP_arifle_CZ805_GL",{{"CUP_30Rnd_556x45_G36",6},{"CUP_1Rnd_HE_M203",4},{"CUP_1Rnd_HEDP_M203",2}}}, 0.3,
            {"CUP_arifle_AK74_GL",{{"CUP_30Rnd_545x39_AK_M",6},{"CUP_1Rnd_HE_GP25_M",4},{"CUP_1Rnd_HE_GP25_M",2}}}, 0.3,
            {"arifle_AK12_GL_F",{{"30Rnd_762x39_Mag_F",6},{"1Rnd_HE_Grenade_shell",4},{"1Rnd_HE_Grenade_shell",2}}}, 0.2
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USCIA_paramilitary_officer_assault_03 : CFP_B_USCIA_paramilitary_officer_assault_01 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_paramilitary_officer_assault_03.JPG";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary Trooper (AT)";

        launcherList[] ={
            {"CUP_launch_M136",{"CUP_M136_M",3}}, 0.6,
            {"launch_RPG7_F",{"RPG7_F",3}}, 0.4,
            {"CUP_launch_RPG7V",{"CUP_PG7V_M",3}}, 0.4,
            {"CUP_launch_M72A6",{"CUP_M72A6_M",3}}, 0.3,
            {"CUP_launch_M72A6",{"CUP_M72A6_M",3}}, 0.2,
            {"CUP_launch_RPG18",{"CUP_RPG18_M",3}}, 0.2
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USCIA_paramilitary_officer_assault_04 : CFP_B_USCIA_paramilitary_officer_assault_01 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_paramilitary_officer_assault_04.JPG";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary Trooper (AR)";

        // 6-8 options
        rifleList[] = {
            {"CUP_lmg_M249_pip3",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",3}}, 0.4,
            {"CUP_lmg_minimipara",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",3}}, 0.3,
            {"CUP_lmg_L110A1",{"CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",3}}, 0.3,
            {"CUP_lmg_M249_pip4",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",3}}, 0.3,
            {"CUP_lmg_M249_e2",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",3}}, 0.3,
            {"CUP_lmg_M249_pip2",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",3}}, 0.3,
            {"CUP_lmg_M249_para",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",3}}, 0.3,
            {"CUP_arifle_RPK74",{"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",6}}, 0.2,
            {"CUP_arifle_RPK74M",{"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",6}}, 0.2,
            {"CUP_lmg_Mk48_des",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",6}}, 0.1
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    // Vehicles

    class B_CTRG_LSV_01_light_F;
    class B_CTRG_LSV_01_light_F_OCimport_01 : B_CTRG_LSV_01_light_F { scope = 0; class EventHandlers; class Turrets; };
    class B_CTRG_LSV_01_light_F_OCimport_02 : B_CTRG_LSV_01_light_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_01;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class CUP_O_SUV_TKA;
    class CUP_O_SUV_TKA_OCimport_01 : CUP_O_SUV_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_SUV_TKA_OCimport_02 : CUP_O_SUV_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
            class CargoTurret_09;
        };
    };

    class CUP_I_Datsun_4seat_TK;
    class CUP_I_Datsun_4seat_TK_OCimport_01 : CUP_I_Datsun_4seat_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Datsun_4seat_TK_OCimport_02 : CUP_I_Datsun_4seat_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class CFP_O_TBAN_Offroad_Armed_01;
    class CFP_O_TBAN_Offroad_Armed_01_OCimport_01 : CFP_O_TBAN_Offroad_Armed_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_TBAN_Offroad_Armed_01_OCimport_02 : CFP_O_TBAN_Offroad_Armed_01_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class M2_Turret;
        };
    };

    class I_C_Offroad_02_unarmed_F;
    class I_C_Offroad_02_unarmed_F_OCimport_01 : I_C_Offroad_02_unarmed_F { scope = 0; class EventHandlers; class Turrets; };
    class I_C_Offroad_02_unarmed_F_OCimport_02 : I_C_Offroad_02_unarmed_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class B_G_Offroad_01_F;
    class B_G_Offroad_01_F_OCimport_01 : B_G_Offroad_01_F { scope = 0; class EventHandlers; class Turrets; };
    class B_G_Offroad_01_F_OCimport_02 : B_G_Offroad_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_O_Mi8_SLA_1;
    class CUP_O_Mi8_SLA_1_OCimport_01 : CUP_O_Mi8_SLA_1 { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Mi8_SLA_1_OCimport_02 : CUP_O_Mi8_SLA_1_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class BackTurret;
            class CopilotTurret;
        };
    };

    class CUP_I_UH1H_TK_GUE;
    class CUP_I_UH1H_TK_GUE_OCimport_01 : CUP_I_UH1H_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_UH1H_TK_GUE_OCimport_02 : CUP_I_UH1H_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class LeftDoorGun;
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_B_Ural_CDF;
    class CUP_B_Ural_CDF_OCimport_01 : CUP_B_Ural_CDF { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_Ural_CDF_OCimport_02 : CUP_B_Ural_CDF_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CFP_O_TBAN_Technical_PK_01;
    class CFP_O_TBAN_Technical_PK_01_OCimport_01 : CFP_O_TBAN_Technical_PK_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_TBAN_Technical_PK_01_OCimport_02 : CFP_O_TBAN_Technical_PK_01_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };


    class CFP_B_USCIA_LSV_01 : B_CTRG_LSV_01_light_F_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_LSV_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa'];_unit setObjectTextureGlobal [2,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa'];_unit setObjectTextureGlobal [3,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sand";

    };

    class CFP_B_USCIA_LSV_02 : CFP_B_USCIA_LSV_01 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_LSV_02.JPG";
        displayName = "LSV (Special Forces)";
        crew = "CFP_B_USCIA_paramilitary_officer_assault_01";
    };

    class CFP_B_USCIA_SUV_01 : CUP_O_SUV_TKA_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_SUV_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "SUV";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_body_bluewhite_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "CIV";

    };

    class CFP_B_USCIA_Datsun_PK_01 : CUP_I_Datsun_4seat_TK_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Datsun_PK_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "Datsun PK";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_trup4_CO.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "desert";

    };

    class CFP_B_USCIA_Datsun_PK_02 : CFP_B_USCIA_Datsun_PK_01 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Datsun_PK_02.JPG";
        displayName = "Datsun PK (Covert)";
        crew = "CFP_B_USCIA_paramilitary_officer_covert_01";
    };

    class CFP_B_USCIA_Offroad_01 : CFP_O_TBAN_Offroad_Armed_01_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Offroad_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Armed)";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "CFP_B_USCIA_paramilitary_officer_01"; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_06";

    };

    class CFP_B_USCIA_Offroad_02 : B_G_Offroad_01_F_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Offroad_02.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_03";

    };
    class CFP_B_USCIA_MB_4WD_01 : I_C_Offroad_02_unarmed_F_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_MB_4WD_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "MB 4WD";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;[_unit,['Olive',1], ['hideLeftDoor',1,'hideRightDoor',1,'hideHeadSupportRear',1,'hideHeadSupportFront',1,'hideRollcage',1,'hideSpareWheel',1]] call BIS_fnc_initVehicle;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "White";

    };

    class CFP_B_USCIA_Mi_8MT_01 : CUP_O_Mi8_SLA_1_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Mi_8MT_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-8MT";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class BackTurret : BackTurret { gunnerType = ""; };
            class CopilotTurret : CopilotTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_cia1_1_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_cia1_2_co.paa'];_unit setObjectTextureGlobal [2,'a3\data_f\clear_empty.paa'];_unit setObjectTextureGlobal [3,'CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "CIA";

    };

    class CFP_B_USCIA_UH_1H_01 : CUP_I_UH1H_TK_GUE_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_UH_1H_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-1H";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class LeftDoorGun : LeftDoorGun { gunnerType = ""; };
            class CopilotTurret : CopilotTurret { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_CO.paa'];_unit setObjectTextureGlobal [1,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_CO.paa'];_unit setObjectTextureGlobal [2,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Olive";

    };

    class CFP_B_USCIA_Ural_01 : CUP_B_Ural_CDF_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Ural_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_un_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_un_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "UN";

    };

    class CFP_B_USCIA_Technical_01 : CFP_O_TBAN_Technical_PK_01_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Technical_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "Datsun Technical";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USCIA_paramilitary_officer_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_trup4_civ_CO.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "striped";

    };

    class CFP_B_USCIA_Technical_02 : CFP_B_USCIA_Technical_01 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Technical_02.JPG";
        displayName = "Datsun Technical (Covert)";
        crew = "CFP_B_USCIA_paramilitary_officer_covert_01";
    };


    class CUP_ReammoBox_EP1;
    class CUP_ReammoBox;

    /* US CIA Ammo Boxes */
    class CFP_USCIA_BasicAmmunitionBox: CUP_ReammoBox
    {
         scope = 2;
        displayname = "Basic Ammo [US CIA]";
        model = "\CUP\Weapons\CUP_Weapons_AmmoBoxes\CUP_RUBasicAmmo.p3d";
        class TransportMagazines
        {
            mag_xx(30Rnd_556x45_Stanag,100);
            mag_xx(30Rnd_556x45_G36,40);
            mag_xx(1Rnd_HE_M203,40);
            mag_xx(1Rnd_HEDP_M203,40);
            mag_xx(M136_M,40);
            mag_xx(M72A6_M,40);
            mag_xx(200Rnd_TE4_Red_Tracer_556x45_M249,40);
            mag_xx(200Rnd_TE4_Red_Tracer_556x45_L110A1,40);
            mag_xx(75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,40);
            mag_xx(100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,40);
            mag_xx(30Rnd_762x39_AK47_M,100);
            mag_xx(30Rnd_545x39_AK_M,400);
            mag_xx(30Rnd_TE1_Green_Tracer_545x39_AK_M,400);
            mag_xx(8Rnd_9x18_Makarov_M,50);
            mag_xx(8Rnd_9x18_MakarovSD_M,20);
            mag_xx(1Rnd_HE_GP25_M,80);
            mag_xx(FlareWhite_GP25_M,2);
            mag_xx(FlareGreen_GP25_M,2);
            mag_xx(FlareRed_GP25_M,2);
            mag_xx(FlareYellow_GP25_M,2);
            mag_xx(100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,100);
            mag_xx(HandGrenade_RGD5,50);
            mag_xx(HandGrenade_RGO,50);
            mag_xx(PG7V_M,15);
            mag_xx(PG7VR_M,5);
            mag_xx(RPG18_M,10);
            mag_xx(1Rnd_SmokeRed_GP25_M,2);
            mag_xx(1Rnd_SmokeGreen_GP25_M,2);
            mag_xx(1Rnd_SmokeYellow_GP25_M,2);
            mag_xx(1Rnd_Smoke_GP25_M,2);
            mag_xx(IlumFlareWhite_GP25_M, 5);
            mag_xx(IlumFlareRed_GP25_M, 5);
            mag_xx(IlumFlareGreen_GP25_M, 5);
        };
        class TransportWeapons
        {
            weap_xx(AK_47_M,4);
            weap_xx(AK_74,4);
            weap_xx(arifle_M4A1_camo_Aim,8);
            weap_xx(arifle_M4A3_desert_Aim_Flashlight,8);
        };
        class TransportItems
        {
            item_xx(CUP_optic_PSO_1,5);
            item_xx(CUP_optic_Kobra,5);
            item_xx(CUP_optic_CompM4,5);
            item_xx(CUP_optic_CompM2_Black,4);
        };
        /* ACE CARGO : */
        ace_cargo_size = 2; // Cargo space the object takes
        ace_cargo_canLoad = 1; // Enables the object to be loaded (1-yes, 0-no)
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.3, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 90; // Model direction while dragging (same as setDir after attachTo)
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1.2, 1};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
    };
    class CFP_USCIA_BasicWeaponsBox: CFP_USCIA_BasicAmmunitionBox
    {
        displayname = "Basic Weapons [US CIA]";
        model = "CUP\Weapons\CUP_Weapons_AmmoBoxes\CUP_RUBasicWeapons.p3d";
        class TransportMagazines
        {
            mag_xx(30Rnd_556x45_Stanag,100);
            mag_xx(30Rnd_556x45_G36,40);
            mag_xx(1Rnd_HE_M203,40);
            mag_xx(1Rnd_HEDP_M203,40);
            mag_xx(M136_M,40);
            mag_xx(M72A6_M,40);
            mag_xx(30Rnd_762x39_AK47_M,100);
            mag_xx(30Rnd_545x39_AK_M,400);
            mag_xx(30Rnd_TE1_Green_Tracer_545x39_AK_M,400);
            mag_xx(8Rnd_9x18_Makarov_M,50);
            mag_xx(8Rnd_9x18_MakarovSD_M,20);
            mag_xx(1Rnd_HE_GP25_M,80);
            mag_xx(FlareWhite_GP25_M,2);
            mag_xx(FlareGreen_GP25_M,2);
            mag_xx(FlareRed_GP25_M,2);
            mag_xx(FlareYellow_GP25_M,2);
            mag_xx(HandGrenade_RGD5,50);
            mag_xx(HandGrenade_RGO,50);
            mag_xx(1Rnd_SmokeRed_GP25_M,2);
            mag_xx(1Rnd_SmokeGreen_GP25_M,2);
            mag_xx(1Rnd_SmokeYellow_GP25_M,2);
            mag_xx(1Rnd_Smoke_GP25_M,2);
            mag_xx(IlumFlareWhite_GP25_M, 5);
            mag_xx(IlumFlareRed_GP25_M, 5);
            mag_xx(IlumFlareGreen_GP25_M, 5);
        };
        class TransportWeapons
        {

            weap_xx(arifle_M4A1_BUIS_desert_GL,8);
            weap_xx(arifle_M4A1_BUIS_GL,8);
            weap_xx(arifle_Mk16_CQC_EGLM,8);
            weap_xx(arifle_Mk17_CQC_EGLM,8);
            weap_xx(arifle_AK74_GL,8);
            weap_xx(arifle_AK74M_GL,8);
            weap_xx(arifle_CZ805_GL,8);
            weap_xx(arifle_M4A1_camo_Aim,8);
            weap_xx(arifle_M4A3_desert_Aim_Flashlight,8);
            weap_xx(arifle_M4A1_Aim,8);
            weap_xx(arifle_AK74M,8);
            weap_xx(arifle_AK107,8);
            weap_xx(arifle_AKS74,8);
            weap_xx(arifle_AKS74_pso,8);
            weap_xx(arifle_AKS74U,8);
            weap_xx(arifle_CZ805_A2_Holo_Laser,8);
            weap_xx(arifle_Mk16_CQC_FG_Aim_Laser_snds,8);
            weap_xx(hgun_Glock17,8);
            weap_xx(hgun_M9,8);
            weap_xx(hgun_Makarov,8);
            weap_xx(hgun_MicroUzi,8);
            weap_xx(hgun_M9_snds,10);
        };
        class TransportItems
        {
            item_xx(CUP_optic_PSO_1,5);
            item_xx(CUP_optic_Kobra,5);
            item_xx(CUP_muzzle_snds_M16_camo,4);
            item_xx(CUP_muzzle_snds_M16,4);
            item_xx(CUP_acc_Flashlight,4);
            item_xx(CUP_acc_Flashlight_wdl,4);
            item_xx(CUP_acc_ANPEQ_2_camo,4);
            item_xx(muzzle_snds_acp,5);
            item_xx(CUP_optic_CompM4,5);
            item_xx(CUP_optic_CompM2_Black,4);
            item_xx(CUP_optic_CompM2_Woodland,2);
            item_xx(CUP_optic_CompM2_Woodland2,2);
            item_xx(CUP_optic_CompM2_Desert,2);
        };
        /* ACE CARGO : */
        ace_cargo_size = 8; // Cargo space the object takes
        ace_cargo_canLoad = 1; // Enables the object to be loaded (1-yes, 0-no)
        ace_dragging_canDrag = 0;  // Can be dragged (0-no, 1-yes)
        ace_dragging_canCarry = 0;  // Can be carried (0-no, 1-yes)
    };

    class CFP_USCIA_SpecialWeaponsBox: CFP_USCIA_BasicAmmunitionBox
    {
        displayname = "Special Weapons [US CIA]";
        model = "CUP\Weapons\CUP_Weapons_AmmoBoxes\CUP_RUSpecialWeapons.p3d";
        class TransportMagazines
        {
            mag_xx(30Rnd_556x45_Stanag,100);
            mag_xx(30Rnd_556x45_G36,40);
            mag_xx(1Rnd_HE_M203,40);
            mag_xx(1Rnd_HEDP_M203,40);
            mag_xx(M136_M,40);
            mag_xx(M72A6_M,40);
            mag_xx(200Rnd_TE4_Red_Tracer_556x45_M249,40);
            mag_xx(200Rnd_TE4_Red_Tracer_556x45_L110A1,40);
            mag_xx(75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,40);
            mag_xx(100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,40);
            mag_xx(30Rnd_762x39_AK47_M,100);
            mag_xx(30Rnd_545x39_AK_M,400);
            mag_xx(30Rnd_TE1_Green_Tracer_545x39_AK_M,400);
            mag_xx(8Rnd_9x18_Makarov_M,50);
            mag_xx(8Rnd_9x18_MakarovSD_M,20);
            mag_xx(1Rnd_HE_GP25_M,80);
            mag_xx(FlareWhite_GP25_M,2);
            mag_xx(FlareGreen_GP25_M,2);
            mag_xx(FlareRed_GP25_M,2);
            mag_xx(FlareYellow_GP25_M,2);
            mag_xx(100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,100);
            mag_xx(HandGrenade_RGD5,50);
            mag_xx(HandGrenade_RGO,50);
            mag_xx(PG7V_M,15);
            mag_xx(PG7VR_M,5);
            mag_xx(RPG18_M,10);
            mag_xx(1Rnd_SmokeRed_GP25_M,2);
            mag_xx(1Rnd_SmokeGreen_GP25_M,2);
            mag_xx(1Rnd_SmokeYellow_GP25_M,2);
            mag_xx(1Rnd_Smoke_GP25_M,2);
            mag_xx(IlumFlareWhite_GP25_M, 5);
            mag_xx(IlumFlareRed_GP25_M, 5);
            mag_xx(IlumFlareGreen_GP25_M, 5);
        };
        class TransportWeapons
        {
            weap_xx(lmg_M249_pip3,8);
            weap_xx(lmg_minimipara,8);
            weap_xx(lmg_L110A1,8);
            weap_xx(lmg_M249_pip4,8);
            weap_xx(lmg_M249_e2,8);
            weap_xx(lmg_M249_pip2,8);
            weap_xx(lmg_M249_para,8);
            weap_xx(arifle_RPK74,8);
            weap_xx(arifle_RPK74M,8);
            weap_xx(lmg_Mk48_des,8);
        };
        class TransportItems
        {
            item_xx(CUP_optic_PSO_1,5);
            item_xx(CUP_optic_Kobra,5);
            item_xx(CUP_optic_CompM4,5);
            item_xx(CUP_optic_CompM2_Black,4);
            item_xx(CUP_optic_CompM2_Woodland,2);
            item_xx(CUP_optic_CompM2_Woodland2,2);
            item_xx(CUP_optic_CompM2_Desert,2);
            item_xx(CUP_acc_ANPEQ_15,5);
            item_xx(CUP_acc_ANPEQ_2,5);
            item_xx(CUP_optic_Eotech533,5);
            item_xx(CUP_optic_ACOG,5);
            item_xx(CUP_muzzle_snds_M110,2);
            item_xx(CUP_muzzle_snds_M14,2);
        };
        /* ACE CARGO : */
        ace_cargo_size = 8; // Cargo space the object takes
        ace_cargo_canLoad = 1; // Enables the object to be loaded (1-yes, 0-no)
        ace_dragging_canDrag = 0;  // Can be dragged (0-no, 1-yes)
        ace_dragging_canCarry = 0;  // Can be carried (0-no, 1-yes)
    };

    class CFP_USCIA_LaunchersBox: CFP_USCIA_BasicAmmunitionBox
    {
        displayname = "Launchers [US CIA]";
        model = "\CUP\Weapons\CUP_Weapons_AmmoBoxes\CUP_RULaunchers.p3d";
        class TransportMagazines
        {
            mag_xx(M136_M,40);
            mag_xx(M72A6_M,40);
            mag_xx(PG7V_M,15);
            mag_xx(PG7VR_M,5);
            mag_xx(RPG18_M,10);
        };
        class TransportWeapons
        {
            weap_xx(launch_M136,3);
            weap_xx(launch_RPG7V,3);
            weap_xx(launch_M72A6,1);
            weap_xx(launch_RPG18,3);
        };
        /* ACE CARGO : */
        ace_cargo_size = 4; // Cargo space the object takes
        ace_cargo_canLoad = 1; // Enables the object to be loaded (1-yes, 0-no)
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.8, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 90; // Model direction while dragging (same as setDir after attachTo)
        ace_dragging_canCarry = 0;  // Can be carried (0-no, 1-yes)
    };

    class CFP_USCIA_OrdnanceBox: CFP_USCIA_BasicAmmunitionBox
    {
            displayname = "Explosives [US CIA]";
            model = "\CUP\Weapons\CUP_Weapons_AmmoBoxes\CUP_RUOrdnance.p3d";
            class TransportMagazines
            {
                mag_xx(TimeBomb_M,10);
                mag_xx(PipeBomb_M,20);
                mag_xx(HandGrenade_RGD5,30);
                mag_xx(HandGrenade_RGO,30);
                mag_xx(IED_V1_M,10);
            };
            class TransportWeapons{};
        /* ACE CARGO : */
        ace_cargo_size = 4; // Cargo space the object takes
        ace_cargo_canLoad = 1; // Enables the object to be loaded (1-yes, 0-no)
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.8, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 90; // Model direction while dragging (same as setDir after attachTo)
        ace_dragging_canCarry = 0;  // Can be carried (0-no, 1-yes)
    };

    class CFP_USCIA_VehicleBox: CFP_USCIA_BasicAmmunitionBox
    {
            displayname = "Vehicle Ammo [US CIA]";
            model = "\CUP\Weapons\CUP_Weapons_AmmoBoxes\CUP_RUVehicleAmmo.p3d";
            class TransportMagazines
            {
                mag_xx(100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
                mag_xx(100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,50);
                mag_xx(100Rnd_TE4_Red_Tracer_556x45_M249,50);
            };
            class TransportWeapons{};
            transportAmmo = 100000;
            supplyRadius = 3;
        /* ACE CARGO : */
        ace_cargo_size = 20; // Cargo space the object takes
        ace_cargo_canLoad = 1; // Enables the object to be loaded (1-yes, 0-no)
        ace_dragging_canDrag = 0;  // Can be dragged (0-no, 1-yes)
        ace_dragging_canCarry = 0;  // Can be carried (0-no, 1-yes)
    };

};


