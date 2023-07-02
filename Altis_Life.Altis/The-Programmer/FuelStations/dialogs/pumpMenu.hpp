/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
class maxence_pumpMenu {
   idd = 28300;
   name = "maxence_pumpMenu";
   movingenable = 0;
   enablesimulation = 1;
   class controlsBackground
   {
       class Fond : Life_RscPicture
       {
           idc = 28323;
           text = "";
           x = 0.20859375 * safezoneW + safezoneX;
           y = 0.0353848946986201 * safezoneH + safezoneY;
           w = 0.6 * safezoneW;
           h = 0.96 * safezoneH;
       };
   };
   class controls
   {
       class choixvehicule : Life_RscCombo
       {
           colorselect[] = {1,1,1,1};
           colorbackground[] = {1,1,1,0};
           colorscrollbar[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           x = 0.4853125 * safezoneW + safezoneX;
           y = 0.375813667649951 * safezoneH + safezoneY;
           w = 0.262604166666667 * safezoneW;
           h = 0.035 * safezoneH;
           coloractive[] = {1,1,1,0};
           colortextright[] = {1,1,1,0};
           colorselectright[] = {1,1,1,1};
           colorselect2right[] = {1,1,1,1};
           onLBSelChanged = "[0] spawn max_fuelstations_fnc_fuelLBChanged;";
           idc = 28302;
       };
       class carburant : Life_RscCombo
       {
           colorselect[] = {1,1,1,1};
           colorbackground[] = {1,1,1,0};
           colorscrollbar[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           x = 0.4853125 * safezoneW + safezoneX;
           y = 0.419078171091445 * safezoneH + safezoneY;
           w = 0.262604166666667 * safezoneW;
           h = 0.035 * safezoneH;
           coloractive[] = {1,1,1,0};
           colortextright[] = {1,1,1,0};
           colorselectright[] = {1,1,1,1};
           colorselect2right[] = {1,1,1,1};
           onLBSelChanged = "[1] spawn max_fuelstations_fnc_fuelLBChanged;";
           idc = 28903;
       };
       class prixtotal : Life_RscText
       {
           idc = 28322;
           x = 0.445833333333333 * safezoneW + safezoneX;
           y = 0.609818584070796 * safezoneH + safezoneY;
           h = 0.037 * safezoneH;
           w = 0.3 * safezoneW;
           colorshadow[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           text = "";
           sizeEx = 0.05;
       };
       class RscSlider : Life_RscXSliderH
       {
           w = 0.3 * safezoneW;
           h = 0.025 * safezoneH;
           idc = 28901;
           x = 0.368229166666667 * safezoneW + safezoneX;
           y = 0.565671091445428 * safezoneH + safezoneY;
           onSliderPosChanged = "[_this select 1] spawn max_fuelstations_fnc_fuelOnSliderChange;";
       };
       class quantite : Life_RscEdit
       {
           idc = 28902;
           x = 0.4853125 * safezoneW + safezoneX;
           y = 0.504607177974435 * safezoneH + safezoneY;
           h = 0.037 * safezoneH;
           w = 0.1834375 * safezoneW;
           colorshadow[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           sizeEx = 0.05;
           text = "";
           onkeyup = "[] call max_fuelstations_fnc_onKeyUpFuel;";
       };
       class unite : Life_RscText
       {
           idc = 28908;
           x = 0.67234375 * safezoneW + safezoneX;
           y = 0.504607177974435 * safezoneH + safezoneY;
           h = 0.037 * safezoneH;
           w = 0.0755729166666669 * safezoneW;
           colorshadow[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           sizeEx = 0.05;
           text = "";
       };
       class prixlitre : Life_RscText
       {
           idc = 28904;
           text = "";
           x = 0.4853125 * safezoneW + safezoneX;
           y = 0.46330924287119 * safezoneH + safezoneY;
           h = 0.037 * safezoneH;
           w = 0.262604166666667 * safezoneW;
           colorshadow[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           sizeEx = 0.05;
       };
       class valider : Life_RscButtonMenu
       {
           colorbackground[] = {1,1,1,0};
           colorbackgroundfocused[] = {1,1,1,0};
           colorbackground2[] = {1,1,1,0};
           color[] = {1,1,1,0};
           colorfocused[] = {1,1,1,0};
           color2[] = {1,1,1,0};
           colortext[] = {1,1,1,0};
           colorsecondary[] = {1,1,1,0};
           colorfocusedsecondary[] = {1,1,1,0};
           color2secondary[] = {1,1,1,0};
           colordisabledsecondary[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           tooltipcolorshade[] = {1,1,1,0};
           x = 0.440747166666667 * safezoneW + safezoneX;
           y = 0.683440180924287 * safezoneH + safezoneY;
           w = 0.134773666666667 * safezoneW;
           h = 0.0589393667649951 * safezoneH;
           idc = -1;
           text = "";
           onButtonClick = "[] spawn max_fuelstations_fnc_refuelCar;";
       };
   };
};