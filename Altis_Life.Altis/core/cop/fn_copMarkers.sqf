/*
    File: fn_copMarkers.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Marks cops on the map for other cops. Only initializes when the actual map is open.
*/
private ["_markers","_cops"];
_markers = [];
_cops = [];

sleep 0.5;
if (visibleMap) then {
    {if (side _x isEqualTo west) then {_cops pushBack _x;}} forEach playableUnits; //Fetch list of cops / blufor

    //Create markers
    {
        _marker = createMarkerLocal ["moi_marker",(visiblePosition player)];
        _marker setMarkerTextLocal "Moi"; // modifier ici le texte
        _marker setMarkerTypeLocal "mil_dot"; // modifier ici le marker
        _marker setMarkerColorLocal "colorBLUFOR"; // modifier ici la couleur
        _markers pushBack [_marker,player];
        };
    } forEach _cops;

    while {visibleMap} do {
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
    _cops = [];
};
