params["_player"];


//marker = createMarker ["EMPTY", [0,0,0]];

while {true} do {

    _playerList = call BIS_fnc_listPlayers;

    {
        coords = position _x;
        _uid = getPlayerUID _x;
        _name = name _x;
        _markerLabel = _name + ", " + _uid;
        marker = createMarker [_markerLabel, coords];
        marker setMarkerType "hd_dot";
        marker setMarkerText _markerLabel;
        marker setMarkerSize [1,1];
    } forEach _playerList;

    {
        marker setMarkerPos coords;
    } forEach _playerList;

    sleep 1;

    deleteMarker marker;
};
