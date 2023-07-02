/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
#define false 0
#define true 1

class Max_Settings_Dispatch {
    default_lang = "fr"; // fr / en / de / es

    textures_base_path = "The-Programmer\Dispatch\textures";

    sound_call_cops = "dispatch"; // Class of the sound in your description.ext -> CfgSounds. Or "" for no sound
    sound_call_medics = "dispatch";
    sound_call_east = "dispatch";

    messages_preset[] = {
        //{"Title", "Message"}
        {"STR_ON_WAY_HEADER", "STR_ON_WAY_TEXT"},
        {"STR_NOT_MANY_INFORMATIONS_HEADER", "STR_NOT_MANY_INFORMATIONS_TEXT"},
        {"STR_NO_STAFF_HEADER", "STR_NO_STAFF_TEXT"}
    };
};
