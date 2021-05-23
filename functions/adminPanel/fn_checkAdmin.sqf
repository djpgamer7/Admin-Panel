params["_player"];

adminList = ["76561198132602883", "76561198069082054"];

_playerUID = getPlayerUID _player;

if(_playerUID in adminList) exitWith {
    true;
};

false;