/*
    File: fn_medicMarkers.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Marks downed players on the map when it's open.
*/
private ["_markers","_units","_medics"];
_markers = [];
_markersMedecin = [];
_units = [];
_medics = [];

sleep 0.25;
if (visibleMap) then {
    {if (side _x isEqualTo independent) then {_medics pushBack _x;}} forEach playableUnits; //Fetch list of cops / blufor
    {
        _name = _x getVariable "name";
        _down = _x getVariable ["Revive",false];
        if (!isNil "_name" && !_down) then {
            _units pushBack _x;
        };
    } forEach allDeadMen;

    {
        _marker = createMarkerLocal ["moi_marker",(visiblePosition player)];
        _marker setMarkerTextLocal "Moi"; // modifier ici le texte
        _marker setMarkerTypeLocal "mil_dot"; // modifier ici le marker
        _marker setMarkerColorLocal "colorIndependent"; // modifier ici la couleur
        _markers pushBack [_marker,player];
        };
    } forEach _medics;

    //Loop through and create markers.
    {
        _marker = createMarkerLocal [format ["%1_dead_marker",_x],visiblePosition _x];
        _marker setMarkerColorLocal "ColorRed";
        _marker setMarkerTypeLocal "loc_Hospital";
        _marker setMarkerTextLocal format ["%1",(_x getVariable ["name","Unknown Player"])];
        _markers pushBack _marker;
    } forEach _units;

    while {visibleMap} do {
        {
            private ["_unit"];
            _unit = _x select 1;
            if (!isNil "_unit" && !isNull _unit) then {
                (_x select 0) setMarkerPosLocal (visiblePosition _unit);
            };
        } forEach _markersMedecin;
        if (!visibleMap) exitWith {};
        sleep 0.02;
    };
    {deleteMarkerLocal (_x select 0);} forEach _markersMedecin;
    _markersMedecin = [];
    _medics = [];
    waitUntil {!visibleMap};
    {deleteMarkerLocal _x;} forEach _markers;
};
