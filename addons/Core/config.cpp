#include "script_component.hpp"


class CfgMods
{
    class Mod_Base;
    class PREFIX: Mod_Base
    {
        name = "Dart Armory Commandos";
        logo = "\DA\DAC\Core\logo_dac_ca.paa";
        logoSmall = "\DA\DAC\Core\logo_dac_ca.paa";
        logoOver = "\DA\DAC\Core\logo_dac_ca.paa";
        picture = "\DA\DAC\Core\logo_dac_ca.paa";
    };
};


class CfgPatches
{
    class ADDON
    {
        author = "DartRuffian";
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder"
        };
        units[] = {};
        weapons[] = {};
    };
};