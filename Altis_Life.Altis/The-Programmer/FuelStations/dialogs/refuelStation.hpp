/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
class maxence_refuelMenu {
   idd = 29300;
   name = "maxence_refuelMenu";
   movingenable = 0;
   enablesimulation = 1;
   class controlsBackground
   {
       class Fond : Life_RscPicture
       {
           idc = 29301;
           text = "";
           x = 0.20859375 * safezoneW + safezoneX;
           y = 0.0353848946986201 * safezoneH + safezoneY;
           w = 0.6 * safezoneW;
           h = 0.96 * safezoneH;
       };
   };
   class controls
   {
       class gaintotal : Life_RscText
       {
           idc = 29302;
           x = 0.455729166666667 * safezoneW + safezoneX;
           y = 0.599002458210423 * safezoneH + safezoneY;
           h = 0.037 * safezoneH;
           w = 0.3 * safezoneW;
           colorshadow[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           text = "";
           sizeex = 0.05;
       };
       class RscSlider : Life_RscXSliderH
       {
           w = 0.3 * safezoneW;
           h = 0.025 * safezoneH;
           idc = 29303;
           x = 0.372395833333334 * safezoneW + safezoneX;
           y = 0.54993854473943 * safezoneH + safezoneY;
           onsliderposchanged = "[_this select 1] spawn max_fuelstations_fnc_refuelOnSliderChange;";
       };
       class quantite : Life_RscEdit
       {
           idc = 29304;
           x = 0.491666666666667 * safezoneW + safezoneX;
           y = 0.496740904621436 * safezoneH + safezoneY;
           h = 0.037 * safezoneH;
           w = 0.181770833333333 * safezoneW;
           colorshadow[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           text = "";
           onkeyup = "[] call max_fuelstations_fnc_onKeyUpRefuel;";
           sizeex = 0.05;
       };
       class unite : Life_RscText
       {
           idc = 29308;
           x = 0.672395833333333 * safezoneW + safezoneX;
           y = 0.496740904621436 * safezoneH + safezoneY;
           h = 0.037 * safezoneH;
           w = 0.0729166666666667 * safezoneW;
           colorshadow[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           sizeex = 0.05;
           text = "";
       };
       class choixcuve : Life_RscCombo
       {
           colorselect[] = {1,1,1,1};
           colorbackground[] = {1,1,1,0};
           colorscrollbar[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           x = 0.491666666666667 * safezoneW + safezoneX;
           y = 0.446610127826942 * safezoneH + safezoneY;
           w = 0.25625 * safezoneW;
           h = 0.035 * safezoneH;
           coloractive[] = {1,1,1,0};
           colortextright[] = {1,1,1,0};
           colorselectright[] = {1,1,1,1};
           colorselect2right[] = {1,1,1,1};
           onlbselchanged = "[1] spawn max_fuelstations_fnc_refuelLBChanged;";
           idc = 29305;
       };
       class choixvehicle : Life_RscCombo
       {
           colorselect[] = {1,1,1,1};
           colorbackground[] = {1,1,1,0};
           colorscrollbar[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           x = 0.491666666666667 * safezoneW + safezoneX;
           y = 0.400395771878073 * safezoneH + safezoneY;
           w = 0.25625 * safezoneW;
           h = 0.035 * safezoneH;
           coloractive[] = {1,1,1,0};
           colortextright[] = {1,1,1,0};
           colorselectright[] = {1,1,1,1};
           colorselect2right[] = {1,1,1,1};
           onlbselchanged = "[0] spawn max_fuelstations_fnc_refuelLBChanged;";
           idc = 29306;
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
           onbuttonclick = "[] spawn max_fuelstations_fnc_refuelStation;";
       };
   };
};