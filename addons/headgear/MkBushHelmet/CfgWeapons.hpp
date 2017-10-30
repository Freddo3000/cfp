

/*MkBushHelmet

class CfgVehicleClasses
{
	class CFP_MkBushHelmet
	{
		displayName = "Mk Bush Helmet";
	};
};
*/
	class SP_MkBushHelmet_Forrest: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk Bush Helmet (Forrest)";
		picture = "\x\cfp\addons\headgear\MkBushHelmet\ui\Forrest.jpg";
		model = "\x\cfp\addons\character\Models\MkBushHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\MkBushHelmet\Forrest.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\MkBushHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\MkBushHelmet\Forrest.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};
	class SP_MkBushHelmet_Tropical: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk Bush Helmet (Tropical)";
		picture = "\x\cfp\addons\headgear\MkBushHelmet\ui\Tropical.jpg";
		model = "\x\cfp\addons\character\Models\MkBushHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\MkBushHelmet\Tropical.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\MkBushHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\MkBushHelmet\Tropical.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};		};
		};
	
