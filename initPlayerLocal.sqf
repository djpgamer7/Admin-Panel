params["_player"];

_isAdmin = [_player] call dJp_fnc_checkAdmin;

[_player] call dJp_fnc_onPlayerSpawn;

//_player call dJp_fnc_setMarker;

if(_isAdmin) then {

    waitUntil {!isNull (findDisplay 46)};

    (findDisplay 46) displayAddEventHandler ["KeyDown", {
        switch (_this select 1) do {
            case 41: {
                call dJp_fnc_openMenu;
            };
        };
        false
    }];
};