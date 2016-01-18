class CfgPatches
{
	class CODI_BFT_ACE
	{
		authors[] = {"Coding"};
		version = 0.1;
		units[] = {"CODI_BFT_Item_Tablet"};
		weapons[] = {"CODI_BFT_Tablet"};
		requiredVersion = 0.1;
		license = "CC-BY-NC-SA 4.0";
		licenseURL = "http://creativecommons.org/licenses/by-nc-sa/4.0/";
	};
};

class CfgVehicles
{
	class Item_Base_F;
	class CODI_BFT_Item_Tablet: Item_Base_F
	{
		author = "Coding";
		scope = 2;
		scopeCurator = 2;
		displayName = "BFT";
		vehicleClass = "Items";
	};
};

class CfgWeapons
{
	class ACE_ItemCore;
	class InventoryItem_Base_F;
	class CODI_BFT_Tablet: ACE_ItemCore
	{
		author = "Coding";
		scope = 2;
		displayName = "BFT";
		descriptionShort = $STR_CODI_BFT_ACE_itemDescription;
		picture = "\CODI_BFT_ACE\logo.paa";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 1;
		};
	};
};