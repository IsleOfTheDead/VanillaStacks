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
  class Paper: Inventory_Base
  {
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=5;
		varQuantityDestroyOnMin=1;
  };
  class Firewood: Inventory_Base
  {
    varStackMax=6;
  };
};
