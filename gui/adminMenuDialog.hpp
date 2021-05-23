class adminMenuDialog
{
	idd = 1000;
	
	class ControlsBackground
	{
		
	};
	class Controls
	{
	    ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT START (by Casper Kraakman, v1.063, #Muryno)
        ////////////////////////////////////////////////////////

        class admin_background: RscText
        {
            idc = 1000;
            x = 0.29375 * safezoneW + safezoneX;
            y = 0.247 * safezoneH + safezoneY;
            w = 0.4125 * safezoneW;
            h = 0.418 * safezoneH;
            colorBackground[] = {0.2,0.2,0.2,1};
        };
        class admin_header: RscText
        {
            idc = 1001;
            x = 0.29375 * safezoneW + safezoneX;
            y = 0.225 * safezoneH + safezoneY;
            w = 0.4125 * safezoneW;
            h = 0.022 * safezoneH;
            colorBackground[] = {0.8,0.4,0.2,1};
        };
        class RscText_1002: RscText
        {
            idc = 1002;
            x = 0.525781 * safezoneW + safezoneX;
            y = 0.929 * safezoneH + safezoneY;
            w = 0.04125 * safezoneW;
            h = 0.055 * safezoneH;
        };
        class admin_playerListText: RscText
        {
            idc = 1003;
            text = "Player List"; //--- ToDo: Localize;
            x = 0.62375 * safezoneW + safezoneX;
            y = 0.236 * safezoneH + safezoneY;
            w = 0.04125 * safezoneW;
            h = 0.055 * safezoneH;
            colorText[] = {0.8,0.4,0.2,1};
        };
        class admin_playerList: RscListbox
        {
            idc = 1500;
            x = 0.587656 * safezoneW + safezoneX;
            y = 0.28 * safezoneH + safezoneY;
            w = 0.113437 * safezoneW;
            h = 0.198 * safezoneH;
            colorText[] = {0.2,0.3,0.7,1};
            colorActive[] = {1,0,0,1};
        };
        class admin_title: RscText
        {
            idc = 1004;
            text = "Kraakman Admin Panel V1.0"; //--- ToDo: Localize;
            x = 0.448438 * safezoneW + safezoneX;
            y = 0.225 * safezoneH + safezoneY;
            w = 0.103125 * safezoneW;
            h = 0.022 * safezoneH;
            colorText[] = {0.8,0.8,0.8,1};
        };
        class admin_spectateButton: RscButton
        {
            idc = 1600;
            text = "Spectate"; //--- ToDo: Localize;
            x = 0.587656 * safezoneW + safezoneX;
            y = 0.489 * safezoneH + safezoneY;
            w = 0.113437 * safezoneW;
            h = 0.044 * safezoneH;
            colorText[] = {0.7,0.7,0.7,1};
            colorBackground[] = {0.8,0.4,0.2,1};
            tooltip = "Spectates Selected Player"; //--- ToDo: Localize;
            onMouseButtonClick = "call dJp_fnc_spectatePlayer;";
        };
        class admin_freeCam: RscButton
        {
            idc = 1601;

            text = "Freecam"; //--- ToDo: Localize;
            x = 0.587656 * safezoneW + safezoneX;
            y = 0.544 * safezoneH + safezoneY;
            w = 0.113437 * safezoneW;
            h = 0.044 * safezoneH;
            colorText[] = {0.7,0.7,0.7,1};
            colorBackground[] = {0.8,0.4,0.2,1};
            tooltip = "Enables freecam on player"; //--- ToDo: Localize;

            onMouseButtonClick = "call dJp_fnc_freeCam";
        };

        class admin_arsenal: RscButton
        {
            idc = 1602;
            text = "Arsenal"; //--- ToDo: Localize;
            x = 0.587656 * safezoneW + safezoneX;
            y = 0.599 * safezoneH + safezoneY;
            w = 0.113437 * safezoneW;
            h = 0.044 * safezoneH;
            colorText[] = {0.7,0.7,0.7,1};
            colorBackground[] = {0.8,0.4,0.2,1};

            onMouseButtonClick = "call dJp_fnc_arsenal";
        };
        class RscFrame_1800: RscFrame
        {
            idc = 1800;
            x = 0.304062 * safezoneW + safezoneX;
            y = 0.269 * safezoneH + safezoneY;
            w = 0.2475 * safezoneW;
            h = 0.308 * safezoneH;
        };
        ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT END
        ////////////////////////////////////////////////////////

	};
	
};


