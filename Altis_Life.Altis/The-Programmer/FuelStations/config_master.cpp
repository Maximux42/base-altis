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

class Max_Settings_FuelStations {
    default_lang = "fr"; // fr / en / de / es

    textures_base_path = "The-Programmer\FuelStations\textures"; // If you move the textures to another location or in a mod keep the folder structure and file names the same in the current textures folder
    license_refuel_stations = "license_civ_pump"; // this license is required to refuel a pump [and win money :)]

    enable_more_fuel_consumption = true; // true/false  -  if you put true the vehicles will consume more fuel
    more_consumption_coefficent = 200; // This value does not really make sense, reduce it to reduce consumption, increase it to increase consumption

    refuel_car_time_per_liter = 0.5; // Default 0.5 seconds, for 10 liters it will take 5 seconds, for 30 liters it will take 15 seconds
    refuel_pump_time_per_liter = 0.25; // Default 0.25 seconds, for 100 liters it will take 25 seconds, for 300 liters it will take 75 seconds

	class fuel_stations {
		class Land_FuelStation_01_pump_malevil_F { // class = classname of the fuel pump
			fuel_1 = 2000; // number of liter by default and maximum per fuel per pump for the item who have as class "fuel_1" (fuel types are defined below the stations)
			fuel_2 = 2000;
			fuel_3 = 2000;
			fuel_4 = 2000;
			fuel_5 = 2000;
			fuel_6 = 0;
		};
		class Land_FuelStation_01_pump_F {
			fuel_1 = 2000;
			fuel_2 = 2000;
			fuel_3 = 2000;
			fuel_4 = 2000;
			fuel_5 = 2000;
			fuel_6 = 0;
		};
		class Land_FuelStation_02_pump_F {
			fuel_1 = 2000;
			fuel_2 = 2000;
			fuel_3 = 2000;
			fuel_4 = 2000;
			fuel_5 = 2000;
			fuel_6 = 0;
		};
		class Land_fs_feed_F {
			fuel_1 = 2500;
			fuel_2 = 2500;
			fuel_3 = 0;
			fuel_4 = 0;
			fuel_5 = 2000;
			fuel_6 = 0;
		};
		class Land_FuelStation_Feed_F {
			fuel_1 = 0;
			fuel_2 = 0;
			fuel_3 = 0;
			fuel_4 = 0;
			fuel_5 = 0;
			fuel_6 = 10000;
		};
	};

	class fuel_types {
		class fuel_1 {
			shortName = "Gazole"; // Used in our script : Vehicle Shop
			displayName = "Gazole"; // Not in stringtable ! only the text
			item_refuel = "gazole"; // class and variable of the object (in the config_vItems) which makes it possible to fill the fuel station for this type of fuel
			liter_price = 15; // price per liter of fuel purchased
			liter_price_refuel_station = 12; // price per liter of fuel sold (when you refuel the station)
			liters_per_item_refuel_station = 2; // number of liters in one "item_refuel"
		};
		class fuel_2 {
			shortName = "SP95";
			displayName = "Essence Sans Plomb 95";
			item_refuel = "sp95";
			liter_price = 9;
			liter_price_refuel_station = 6;
			liters_per_item_refuel_station = 2;
		};
		class fuel_3 {
			shortName = "SP98";
			displayName = "Essence Sans Plomb 98";
			item_refuel = "sp98";
			liter_price = 12;
			liter_price_refuel_station = 9;
			liters_per_item_refuel_station = 2;
		};
		class fuel_4 {
			shortName = "GPL";
			displayName = "Gaz de pétrole liquéfié";
			item_refuel = "gpl";
			liter_price = 11;
			liter_price_refuel_station = 8;
			liters_per_item_refuel_station = 2;
		};
		class fuel_5 {
			shortName = "Bio";
			displayName = "Biocarburant";
			item_refuel = "bio";
			liter_price = 17;
			liter_price_refuel_station = 14;
			liters_per_item_refuel_station = 2;
		};
		class fuel_6 {
			shortName = "Kerosene";
			displayName = "Kerosene";
			item_refuel = "kerosene";
			liter_price = 27;
			liter_price_refuel_station = 20;
			liters_per_item_refuel_station = 2;
		};
	};
};
