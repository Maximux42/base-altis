/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
#define true 1
#define false 0

class Max_Settings_Entreprise {
    default_lang = "fr"; // fr / en / de / es

    textures_base_path = "The-Programmer\Entreprise\textures";

    allow_acces_to_create_company_forearch_player = true;
    allowed_licenses[] = { "license_civ_entrepreneur" }; // [OPTIONAL SETTING] Only if allow_acces_to_create_company_forearch_player = false
    allowed_playerid[] = { "76561198168200130" }; // [OPTIONAL SETTING] Only if allow_acces_to_create_company_forearch_player = false

    minimumCompanyName = 3; // Minimum length of the company name
    maximumCompanyName = 50; // Maximum length of the company name
    forbiddenWords[] = {"hitler", "dick"}; // Theses words cannot be used in the company name

    price_upgrade_100_storage = 500;
    price_upgrade_1000_storage = 1500;

    open_color = "ColorGreen"; // check : https://community.bistudio.com/wiki/CfgMarkerColors_Arma_3
    close_color = "ColorBlack";
    open_or_close_for_new_employes = false;

    blacklisted_virtual_items[] = {"pickaxe","defibrillator","lockpick","goldbar","blastingcharge","boltcutter","defusekit"}; // Items that the company's CEO cannot buy from his employees (config class of the item)

    class positions_entreprises {
        class entreprise1 {
            markerVar = "entreprise_1";
            radius = 100;
            price = 250000;
        };
        class entreprise2 {
            markerVar = "entreprise_2";
            radius = 10;
            price = 35000;
        };
        class entreprise3 {
            markerVar = "entreprise_3";
            radius = 25;
            price = 58000;
        };
        class entreprise4 {
            markerVar = "entreprise_4";
            radius = 50;
            price = 142000;
        };
        class entreprise5 {
            markerVar = "entreprise_5";
            radius = 75;
            price = 210000;
        };
    };

    class types_entreprises {
        class autoentreprise {
            displayName = "Auto-entreprise";
            max_stock_commum = 1500;
            max_stock_private = 500;
            max_players = 1;
            price = 25000;
        };
        class sarl {
            displayName = "SARL";
            max_stock_commum = 3000;
            max_stock_private = 2000;
            max_players = 3;
            price = 75000;
        };
        class sas {
            displayName = "SAS";
            max_stock_commum = 5000;
            max_stock_private = 3500;
            max_players = 5;
            price = 150000;
        };
        class sa {
            displayName = "SA";
            max_stock_commum = 10000;
            max_stock_private = 7500;
            max_players = 8;
            price = 250000;
        };
    };

    class company_placeable_objects {
        class Land_InfoStand_V1_F { // Classname of the object
            displayName = "STR_OBJECT_STORAGE";
            type = "object";
            can_be_placed = 2; // -1 for unlimited
            actionOnPlace = "max_entreprise_fnc_onPlaceInfoStandV1";
            actionOnJoin = "max_entreprise_fnc_onJoinInfoStandV1";
            condition = "";
        };
        class Land_InfoStand_V2_F {
            displayName = "STR_OBJECT_IMPOUNDMENU";
            type = "object";
            can_be_placed = 1;
            actionOnPlace = "max_entreprise_fnc_onPlaceInfoStandV2";
            actionOnJoin = "max_entreprise_fnc_onJoinInfoStandV2";
            condition = "";
        };

        class Sign_Arrow_Green_F {
            displayName = "STR_OBJECT_SPAWNPOINT_LAND";
            type = "land_spawn_marker";
            can_be_placed = 1; // You can place only 1 marker ; land vehicle spawn marker only
            actionOnPlace = "max_entreprise_fnc_onPlaceMarker"; // No actionOnJoin for markers
            condition = "";
        };

        class Sign_Arrow_Blue_F {
            displayName = "STR_OBJECT_SPAWNPOINT_SEA";
            type = "sea_spawn_marker";
            can_be_placed = 1; // You can place only 1 marker ; sea vehicle spawn marker only
            actionOnPlace = "max_entreprise_fnc_onPlaceMarker"; // No actionOnJoin for markers
            condition = "(missionNameSpace getVariable ['entreprise_1',false])";
        };
    };
};
