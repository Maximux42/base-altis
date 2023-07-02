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

class Process_Config {
    class Fer {
        object_required = "TheProgrammer_iron";
        object_given = "iron_unrefined";
        text = "Traitement du fer";
        time = 90; //Time in seconds to process
        required_licenses[] = {""}; 
    };

    class Or {
        object_required = "TheProgrammer_or";
        object_given = "goldbar";
        text = "Traitement de l'or";
        time = 90;
        required_licenses[] = {""};
    };

    class Ruby {
        object_required = "TheProgrammer_Ruby";
        object_given = "ruby_unrefined";
        text = "Traitement du ruby";
        time = 90;
        required_licenses[] = {""};
    };

    class Charbon {
        object_required = "TheProgrammer_charbon";
        object_given = "oil_unprocessed";
        text = "Traitement du charbon";
        time = 90;
        required_licenses[] = {""};
    };

    class Cuivre {
        object_required = "TheProgrammer_cuivre";
        object_given = "copper_unrefined";
        text = "Traitement du cuivre";
        time = 90;
        required_licenses[] = {""};
    };

    class Diamant {
        object_required = "TheProgrammer_diamant";
        object_given = "diamond_uncut";
        text = "Traitement du diamant";
        time = 90;
        required_licenses[] = {""};
    };

    class Wood {
        object_required = "TheProgrammer_Buche";
        object_given = "paper";
        time = 90;
        text = "Traitement du bois";
        required_licenses[] = {""};
    };
};
