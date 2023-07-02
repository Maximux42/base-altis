/*
    Author: Jean-Baptiste
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
#define true 1
#define false 0

class The_programmer_Mining {
    default_lang = "fr"; // fr / en / es / de

    check_all_rocks_every_x_seconds = 30; //Loop for respawn trees & rocks
    automaticAdd = true; //Put true if you want the physical objects come directly into your bag (Only if virtual_object = false)

    class Trees {
        allow_to_cut_everywhere = false; // If allow_to_cut_everywhere is on true, only the Tree_1 class will be taken into account. Otherwise they will be differentiated by the closest marker
        destructible = true; //true : trees are deleted | false : trees are not deleted

        class Tree_1 {
            classname_object = "Pine_3"; //tree class name, put "" to avoid tree spawn
            marker_name[] = {"marker_tree_1"};
            zoneSize = 40;

            number_of_trees = 10; //number of trees in the area 
            Number_of_hits = 5; //number of shots to break the tree

            virtual_object = false; //false allows to have a physical object || true allows you to receive virtual objects
            classname_object_given = "TheProgrammer_Buche";

            amount_min = 1;
            amount_max = 3;
        };
/*
        class Tree_2 {
            classname_object = "Oak";
            marker_name[] = {"marker_tree_2"};
            zoneSize = 40;

            number_of_trees = 5;
            Number_of_hits = 10;

            virtual_object = false;
            classname_object_given = "TheProgrammer_Buche";

            amount_min = 1;
            amount_max = 3;
        };
        */
    };

    class Mining {
        destructible = true; //true : stones are deleted | false : stones are not deleted
        cooldown = 90;//Time before we can break the stone again (only if destructible = false; or if the stone is placed manually)
        
        class Rock_1 { 
            classname_object = "TheProgrammer_Rock_iron"; //object class name, put "" to avoid rock spawn
            marker_name[] = {"marker_iron"}; //marker variable
            zoneSize = 40; //area size

            number_of_ores = 8; //number of stones in the area 
            Number_of_hits = 4; //number of shots to break the stone

            virtual_object = true; //false allows to have a physical object || true allows you to receive virtual objects
            /* {object, chance, number min, number max} 
                chance = 1 = 100% 
                        0.7 = 70%
                        0.2 = 20*
            */
            object_given[] = {
                {"iron_unrefined",0.7,1,3}
            };
        };

        class Rock_2 {
            classname_object = "TheProgrammer_Rock_Or";
            marker_name[] = {"marker_or"};
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            virtual_object = false;
            object_given[] = {
                {"TheProgrammer_or",0.7,1,3}
            };
        };

        class Rock_3 {
            classname_object = "TheProgrammer_Rock_sapphire";
            marker_name[] = {"marker_sapphire"};
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            virtual_object = false;
            object_given[] = {
                {"TheProgrammer_sapphire",0.7,1,3}
            };
        };

        class Rock_4 {
            classname_object = "TheProgrammer_Rock_charbon";
            marker_name[] = {"marker_charbon"};
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            virtual_object = false;
            object_given[] = {
                {"TheProgrammer_charbon",0.7,1,3}
            };
        };

        class Rock_5 {
            classname_object = "TheProgrammer_Rock_cuivre";
            marker_name[] = {"marker_cuivre"};
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            virtual_object = true;
            object_given[] = {
                {"copper_unrefined",0.7,1,3}
            };
        };
        class Rock_6 {
            classname_object = "TheProgrammer_Rock_diamant";
            marker_name[] = {"marker_diamant"};
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            virtual_object = true;
            object_given[] = {
                {"diamond_uncut",0.7,1,3}
            };
        };
        class Rock_7 {
            classname_object = "TheProgrammer_Rock_obsidienne";
            marker_name[] = {"marker_obsidienne"};
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            virtual_object = false;
            object_given[] = {
                {"TheProgrammer_obsidienne",0.7,1,3}
            };
        };
        class Rock_8 {
            classname_object = "TheProgrammer_Rock_ruby";
            marker_name[] = {"marker_ruby"};
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            virtual_object = false;
            object_given[] = {
                {"TheProgrammer_ruby",0.7,1,3}
            };
        };
        class Rock_9 {
            classname_object = "TheProgrammer_Rock";
            marker_name[] = {"marker_rock"};
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            virtual_object = true;
            object_given[] = {
                {"rock",0.7,1,3}
            };
        };
    };
};
