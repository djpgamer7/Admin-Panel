params["_player"];

createDialog "adminMenuDialog";

_playerList = call BIS_fnc_listPlayers;

{
    lbAdd[1500, name _x];
    lbData[1500, _x];
} forEach _playerList;