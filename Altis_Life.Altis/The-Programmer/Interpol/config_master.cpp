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

class Max_Settings_Interpol {
    default_lang = "fr"; // fr / en / de / es

    eye_colors[] = {"marron","bleu","bleu-gris","gris","noisette","vert","noir","ambre","violet","turquoise"};
    min_cop_level_remove_crime = 3;

    crimes[] = { // WARNING : DO NOT USE ' IT CANNOT BE SAVED IN YOUR DATABASE !!
        //{"DISPLAYED TEXT","PRICE"},
        {"Excès de vitesse de catégorie < 30hm/h",10000},
        {"Excès de vitesse de catégorie > 30hm/h (SV + SP + CT)",50000},
        {"Conduite avec un véhicule déterioré",5000},
        {"Conduite dangeureuse (F + SP)",5000},
        {"Conduite sans permis (SV + P)",50000},
        {"Conduite sans casque ou tenue réglementaire(F)",15000},
        {"Conduite en état d’ivresse 2 dose (F + P)",15000},
        {"Stationnement gênant (F)",15000},
        {"Abandon d'un vehicule accidenté(F)",10000},
        {"Non respect de la signalisation ",25000},
        {"Degradation de bien public ",15000},
        {"Décolage / Attérissage dans une zone non homologuée (F + SP)",45000},
        {"Entrée dans une zone interdite de survol GN et SP (SV + SP)",45000},
        {"Refus de contrôle ou refus d'obtempérer(P)",50000},
        {"Outrage à agent GN ou SP (P)",15000},
        {"Coups et blessures",25000},
        {"Usurpation d'identitée",35000},
        {"Port d'arme (P)",50000},
        {"amende au nombre item illégale",1500},
        {"État d’ivresse sur la voie publique",1500},
        {"dépistage de stupéfiants positif (P)",75000},
        {"Possession de drogue(SV + P)",90000},
        {"Délit de fuite(P)",75000},
        {"Vol de voiture de la gendarmerie",45000},
        {"Homicide (P)",150000},
        {"Tentative d'homicide (P)",85000},
        {"Evasion de prison (P)",150000},
        {"Tentative de braquage shop",50000},
        {"Braquage de banque(P)",300000},
        {"Possession de matèriel ou véhicule illégal(SV)",50000}
    };
};
