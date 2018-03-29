class Vest_Camo_Base;

class CFP_AK_VEST: Vest_Camo_Base
{
	scope = 2;
	displayName = "AK MAG Vest";
	picture = "x\cfp\addons\vests\AK_Vest\data\icon_chest_rig.paa";
	author = "Yugoslav";
	model = "x\cfp\addons\vests\AK_Vest\data\model\UO_AK_VEST.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_liz_co.paa"};


	class ItemInfo: VestItem
	{
		uniformModel = "x\cfp\addons\vests\AK_Vest\data\model\UO_AK_VEST.p3d";
		containerClass = "Supply100";
		mass = 25;
		armor = "2";
		passThrough = true;
		hiddenSelections[] = {"camo"};
		HiddenSelectionTextures[] = {};

	};
};

class CFP_AK_VEST_Black: CFP_AK_VEST
{

	displayName = "AK Chest Rig Black";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_black_co.paa"};
};

class CFP_AK_VEST_EDRL: CFP_AK_VEST
{

	displayName = "AK Chest Rig EDRL";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_erdl_co.paa"};

};

class CFP_AK_VEST_LOlive: CFP_AK_VEST
{

	displayName = "AK Chest Rig Light Olive";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_lightolive_co.paa"};
};

class CFP_AK_VEST_Olive: CFP_AK_VEST
{

	displayName = "AK Chest Rig Olive";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_olive_co.paa"};

};

class CFP_AK_VEST_Tan: CFP_AK_VEST
{

	displayName = "AK Chest Rig Tan";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_tan_co.paa"};
};

class CFP_AK_VEST_Flora_Arid: CFP_AK_VEST
{

	displayName = "AK Chest Rig Flora Arid";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_flora_arid.paa"};
};

class CFP_AK_VEST_Lime: CFP_AK_VEST
{

	displayName = "AK Chest Rig Lime";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_limegreen.paa"};
};
