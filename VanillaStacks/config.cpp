class CfgPatches
{
  class VanillaStacks
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={ "DZ_Data", "DZ_Scripts" };
  };
};

class CfgMods
{
  class VanillaStacks
  {
    dir="VanillaStacks";
    hideName=0;
    hidePicture=0;
    extra=0;
    name="VanillaStacks";
    picture="VanillaStacks/data/picture.paa";
    logoSmall="VanillaStacks/data/logoSmall.paa";
    logo="VanillaStacks/data/logo.paa";
    action="https://steamcommunity.com/sharedfiles/filedetails/?id=3638015273";
    credits="moldypenguins";
    author="moldypenguins";
    authorID="76561198312711389";
    version="1.1";
    type="mod";
    dependencies[]={};
    class defs
    {
      class engineScriptModule
      {
        value="";
        files[]={ "VanillaStacks/scripts/1_core" };
      };
    }
  };
};
