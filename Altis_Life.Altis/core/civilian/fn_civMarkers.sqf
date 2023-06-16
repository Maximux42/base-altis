/*
    File: fn_civMarkers.sqf
    Author:

    Description:
    Add markers for civilians in groups.
*/
private ["_markers","_members"];
_markers = [];
_members = [];

for "_i" from 0 to 1 step 0 do {
    sleep 0.5;
    if (visibleMap) then
    {
        _members = units (group player);
        {
            _marker = createMarkerLocal ["moi_marker",(visiblePosition player)];
            _marker setMarkerTextLocal "Moi"; // modifier ici le texte
            _marker setMarkerTypeLocal "mil_dot"; // modifier ici le marker
            _marker setMarkerColorLocal "ColorCivilian"; // modifier ici la couleur
            _markers pushBack [_marker,player];
        } forEach _members;

        while {visibleMap} do
        {
            {
                private ["_unit"];
                _unit = _x select 1;
                if (!isNil "_unit" && !isNull _unit) then {
                      (_x select 0) setMarkerPosLocal (visiblePosition _unit);
                };
            } forEach _markers;
            if (!visibleMap) exitWith {};
            sleep 0.02;
        };

        {deleteMarkerLocal (_x select 0);} forEach _markers;
        _markers = [];
        _members = [];
    };
};
