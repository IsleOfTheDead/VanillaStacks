class CfgPatches
{
	class VanillaStacks_Gear_Consumables
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Gear_Consumables" };
	};
};
class CfgVehicles
{
	class Inventory_Base;
	//class Box_Base;
	class Paper: Inventory_Base
	{
		varStackMax = 5;
	};

	class Firewood: Inventory_Base
	{
		varStackMax=6;
	};

};
