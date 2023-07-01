/*
    Author: Maxence Lyon
    Altis DEV: https://altisdev.com/user/maxence-lyon
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Steam: « Une Vache Sur CS – Maxence », please leave a message on my profile who says the exact reason before adding me.

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.

    License number:
    Server's name:
    Owner's name:
*/
#define false 0
#define true 1

class Max_Settings_Plants {
    default_lang = "fr"; // fr / en / de / es

    check_all_plants_loop_every_x_seconds = 45;
    save_plants_between_reboot = true;

    item_to_put_water = "arrosoir";
    item_to_delete_plant = "desherbant";

    class Plants {
        class cocaine {
            className = "tp_weed"; // You can use classname of the object or P3D path, for example : a3\vegetation_f_exp\shrub\b_gardenia_f.p3d
            zones[] = { "plant_cocaine" };
            zoneSize = 50;
            allow_to_plant_in_house = true;
            allow_to_plant_everywhere = false;
            itemNeeded = "seed_cocaine"; // Classname of the item required in your config_vItems.hpp
            itemGiven = "cocaine_unprocessed"; // Classname of the item required in your config_vItems.hpp
            amount_min = 1;
            amount_max = 3;
            time_to_growth = 15 * 60; // 15 minutes
            number_of_watering_needed = 1;
        };

        class cannabis {
            className = "tp_weed_2";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = false;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_cannabis";
            itemGiven = "cannabis";
            amount_min = 1;
            amount_max = 2;
            time_to_growth = 10 * 60; // 10 minutes
            number_of_watering_needed = 1;
        };

        class corn {
            className = "tp_corn";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = false;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_corn";
            itemGiven = "corn";
            amount_min = 1;
            amount_max = 3;
            time_to_growth = 240;
            number_of_watering_needed = 1;
        }; 

        class artichoke {
            className = "tp_artichoke";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = false;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_artichoke";
            itemGiven = "artichoke";
            amount_min = 1;
            amount_max = 3;
            time_to_growth = 240;
            number_of_watering_needed = 1;
        }; 

        class chili_pepper {
            className = "tp_chili_pepper";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = false;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_chili_pepper";
            itemGiven = "chili_pepper";
            amount_min = 1;
            amount_max = 3;
            time_to_growth = 240;
            number_of_watering_needed = 1;
        }; 

        class wheat {
            className = "tp_wheat";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = false;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_wheat";
            itemGiven = "wheat";
            amount_min = 1;
            amount_max = 3;
            time_to_growth = 240;
            number_of_watering_needed = 1;
        };

        class strawberry {
            className = "tp_strawberry";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = false;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_strawberry";
            itemGiven = "strawberry";
            amount_min = 1;
            amount_max = 3;
            time_to_growth = 240;
            number_of_watering_needed = 1;
        };
        class cotton {
            className = "tp_cotton";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = false;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_cotton";
            itemGiven = "cotton";
            amount_min = 1;
            amount_max = 3;
            time_to_growth = 240;
            number_of_watering_needed = 1;
        };
        class lettuce {
            className = "tp_lettuce";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = false;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_lettuce";
            itemGiven = "lettuce";
            amount_min = 1;
            amount_max = 3;
            time_to_growth = 240;
            number_of_watering_needed = 1;
        };
        class tomato {
            className = "tp_tomato";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = false;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_tomato";
            itemGiven = "tomato";
            amount_min = 1;
            amount_max = 3;
            time_to_growth = 240;
            number_of_watering_needed = 1;
        };
        class tobacco {
            className = "tp_tobacco";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = false;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_tobacco";
            itemGiven = "tobacco";
            amount_min = 1;
            amount_max = 3;
            time_to_growth = 240;
            number_of_watering_needed = 1;
        };
        class sunflower {
            className = "tp_sunflower";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = false;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_sunflower";
            itemGiven = "sunflower";
            amount_min = 1;
            amount_max = 3;
            time_to_growth = 240;
            number_of_watering_needed = 1;
        };
    };
};
