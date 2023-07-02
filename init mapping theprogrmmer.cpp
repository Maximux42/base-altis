/*company system.
Posez un objet sur votre mapping pour créer une entreprise, par exemple un panneau et ajoutez dans l’init de celui-ci : */
_null=this execVM "The-Programmer\Entreprise\init.sqf";
/*Sur votre mapping, toujours, créez autant de marqueurs que vous voulez qui seront les positions que les futurs entrepreneurs pourront acheter pour installer leurs objets.
Ajoutez la variable de votre choix à ce marqueur et ajoutez une class dans le config du script (puis positions_entreprises) où vous mettez la variable de votre marqueur après le « markerVar = ».*/

/*farming system*/
- Génération automatique : Les pierres sont générées automatiquement par un algorithme en fonction du nombre de pierres cassés et des paramètres mis dans le config.
Suivez cette vidéo : https://youtu.be/fkxZOT8DRyI

- Génération manuelle : Les pierres sont placées manuellement, utile si vous souhaitez des pierres dans un endroit spécifique (en hauteur ou dans une grotte).
Suivez cette vidéo : https://youtu.be/58U3xEThBpw

/*Road Service System*/
//Posez un objet sur votre mapping pour devenir réparateur, par exemple un panneau dans une préfecture et ajoutez dans l’init de celui-ci. 
_null=this execVM "The-Programmer\RepairJob\init.sqf";
