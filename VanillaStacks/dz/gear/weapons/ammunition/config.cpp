class CfgPatches
{
	class VanillaStacks_Weapons_Ammunition
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Weapons_Ammunition", "DZ_Weapons_Magazines", "DZ_Weapons_Projectiles" };
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base : Magazine_Base {};

	class Ammo_45ACP : Ammunition_Base
	{
		//count = 25;
		count = 50;
	};
	class Ammo_308Win : Ammunition_Base
	{
		//count = 20;
		count = 40;
	};
	class Ammo_308WinTracer : Ammunition_Base
	{
		//count = 20;
		count = 40;
	};
	class Ammo_9x19 : Ammunition_Base
	{
		//count = 25;
		count = 50;
	};
	class Ammo_380 : Ammunition_Base
	{
		//count = 35;
		count = 70;
	};
	class Ammo_556x45 : Ammunition_Base
	{
		//count = 20;
		count = 40;
	};
	class Ammo_556x45Tracer : Ammunition_Base
	{
		//count = 20;
		count = 40;
	};
	class Ammo_762x54 : Ammunition_Base
	{
		//count = 20;
		count = 40;
	};
	class Ammo_762x54Tracer : Ammunition_Base
	{
		//count = 20;
		count = 40;
	};
	class Ammo_762x39 : Ammunition_Base
	{
		//count = 20;
		count = 40;
	};
	class Ammo_762x39Tracer : Ammunition_Base
	{
		//count = 20;
		count = 40;
	};
	class Ammo_9x39AP : Ammunition_Base
	{
		//count = 20;
		count = 40;
	};
	class Ammo_9x39 : Ammunition_Base
	{
		//count = 20;
		count = 40;
	};
	class Ammo_22 : Ammunition_Base
	{
		//count = 50;
		count = 100;
	};
	class Ammo_12gaPellets : Ammunition_Base
	{
		//count = 10;
		count = 20;
	};
	class Ammo_12gaSlug : Ammunition_Base
	{
		//count = 10;
		count = 20;
	};
	class Ammo_12gaRubberSlug : Ammunition_Base
	{
		//count = 10;
		count = 20;
	};
	class Ammo_12gaBeanbag : Ammunition_Base
	{
		//count = 10;
		count = 20;
	};
	class Ammo_357 : Ammunition_Base
	{
		//count = 20;
		count = 40;
	};
	class Ammo_545x39 : Ammunition_Base
	{
		//count = 20;
		count = 40;
	};
	class Ammo_545x39Tracer : Ammunition_Base
	{
		//count = 20;
		count = 40;
	};
	class Ammo_HuntingBolt : Ammunition_Base
	{
		//count = 5;
		count = 10;
	};
	class Ammo_ImprovisedBolt_1 : Ammunition_Base
	{
		//count = 5;
		count = 10;
	};
	class Ammo_ImprovisedBolt_2 : Ammunition_Base
	{
		//count = 5;
		count = 10;
	};
	class Ammo_CupidsBolt_2 : Ammunition_Base
	{
		//count = 5;
		count = 10;
	};
	class Ammo_Flare : Ammunition_Base
	{
		//count = 5;
		count = 10;
	};
	//class Ammo_FlareRed: Ammo_Flare
	//class Ammo_FlareGreen: Ammo_Flare
	//class Ammo_FlareBlue: Ammo_Flare

	//Ammo_RPG7_HE
	//Ammo_RPG7_AP
	//Ammo_LAW_HE
	//Ammo_GrenadeM4
	//Ammo_40mm_Base
	//Ammo_40mm_Explosive
	//Ammo_40mm_ChemGas
	//Ammo_40mm_Smoke_ColorBase
	//Ammo_40mm_Smoke_Red
	//Ammo_40mm_Smoke_Green
	//Ammo_40mm_Smoke_White
	//Ammo_40mm_Smoke_Black
};
