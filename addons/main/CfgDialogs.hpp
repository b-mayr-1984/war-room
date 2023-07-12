/* ================================================================================ */

	// size safezone 40x25
    // we can't change that
    
    // War Room 1 --> 1x 4x4
    // War Room 2 --> 2x 2x2
    // War Room 3 --> 1x 2x2 and 4x 1x1
    // War Room 4 --> 8x 1x1
    // War Room 5 --> 1x 3x2 and 2x 1x1

/* ================================================================================ */

class RscText;
class RscCombo;
class RscMapControl;
class RscPicture;
class RscButtonMenuOK;
class RscButtonMenuCancel;

/* ================================================================================ */

class ConfigureScreenDialog
{
	idd = 14631;
	enableSimulation = true;

    onUnload = "['onUnloadDisplay', _this] call WR_main_fnc_ui_configureScreen;";

	class controlsBackground
	{
        class Background: RscText
        {
            idc = 1001;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 0 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 23 * GUI_GRID_H;

            colorBackground[] = {0.3, 0.3, 0.3, 1}; // opaque dark grey
        };
	};

	class controls
	{
        class Headline: RscText
        {
            idc = 2001;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 0 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 1.5 * GUI_GRID_H;

            colorBackground[] = {0, 0, 0, 1}; // opaque black
            text = "Configure Screen"; //--- ToDo: Localize;
        };

		class ResolutionLabel: RscText
		{
			idc = 3001;
        
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
        
			text = "Resolution"; //--- ToDo: Localize;
            style = ST_RIGHT;
		};

        class HorizontalResolution: RscCombo
        {
            idc = 4001;

            x = 11 * GUI_GRID_W + GUI_GRID_X;
            y = 2 * GUI_GRID_H + GUI_GRID_Y;
            w = 8 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;

            class Items
            {
                class 256
                {
                    text = "256px";
                };
                class 512
                {
                    text = "512px";
                };
                class 1024
                {
                    text = "1024px";
                    default = 1;
                };
                class 2048
                {
                    text = "2048px";
                };
                class 4096
                {
                    text = "4096px";
                };
            };
        };

		class xLabel: RscText
		{
			idc = 3002;
        
			x = 19.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 1 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
        
			text = "x"; //--- ToDo: Localize;
            style = ST_RIGHT;
		};

        class VerticalResolution: RscCombo
        {
            idc = 4002;

            x = 21 * GUI_GRID_W + GUI_GRID_X;
            y = 2 * GUI_GRID_H + GUI_GRID_Y;
            w = 8 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;

            class Items
            {
                class 256
                {
                    text = "256px";
                };
                class 512
                {
                    text = "512px";
                };
                class 1024
                {
                    text = "1024px";
                    default = 1;
                };
                class 2048
                {
                    text = "2048px";
                };
                class 4096
                {
                    text = "4096px";
                };
            };
        };

		class LayoutLabel: RscText
		{
			idc = 3003;
        
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
        
			text = "Layout"; //--- ToDo: Localize;
            style = ST_RIGHT;
		};

        class Layout: RscCombo
        {
            idc = 4003;

            x = 11 * GUI_GRID_W + GUI_GRID_X;
            y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 8 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;

            class Items
            {
                class WarRoom1Item
                {
                    text = "War Room 1";
                    data = "WarRoom1";
                    default = 1;
                };
                class WarRoom5Item
                {
                    text = "War Room 5";
                    data = "WarRoom5";
                };
            };

            onLBSelChanged = "['onLBSelChangedLayout', _this] call WR_main_fnc_ui_configureScreen;";
        };

		class LayoutDemo: RscPicture
		{
			idc = 5001;

            x = 21 * GUI_GRID_W + GUI_GRID_X;
            y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 16 * GUI_GRID_W;
            h = 10 * GUI_GRID_H;

            text = "\y\wr\addons\main\ui\WarRoom_Layouts_WarRoom1_1024x1024.paa";
		};

        class MyOk: RscButtonMenuOK
        {
            x = 37 * GUI_GRID_W + GUI_GRID_X;
            y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 1.5 * GUI_GRID_H;
        };

        class MyCancel: RscButtonMenuCancel
        {
            x = 31 * GUI_GRID_W + GUI_GRID_X;
            y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 5 * GUI_GRID_W;
            h = 1.5 * GUI_GRID_H;
        };
	};
};

/* ================================================================================ */

class WarRoom1
{
	idd = 14641;
	enableSimulation = true;

	WR_uiPlaceholderCount = 1;

	class controlsBackground
	{
        class Background: RscText
        {
            idc = 1001;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 0 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 25 * GUI_GRID_H;

            colorBackground[] = {0, 0, 0, 1}; // opaque black
        };
	};

	class controls
	{
        class Headline: RscText
        {
            idc = 2001;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 0 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;

            colorBackground[] = {0.2, 0.2, 0.2, 1}; // opaque dark grey
            sizeEx = 1.2 * GUI_GRID_H;
            text = "War Room"; //--- ToDo: Localize;
        };

		class Placeholder1: RscPicture
		{
			idc = 3001;

			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 20 * GUI_GRID_H;

            text = "\y\wr\addons\main\ui\WarRoom_Placeholder1_1024x1024.paa";
		};

		class Placeholder1Headline: RscText
		{
			idc = 5001;
        
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
        
        	colorBackground[] = {0.2, 0.2, 0.2, 0.5}; // translucent grey
        
			text = "Placeholder 1";
		};

        class Subheadline: RscText
        {
            idc = 6001;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 23 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;

            colorBackground[] = {0.2, 0.2, 0.2, 1}; // opaque dark grey
            text = "Mod v0.1.0 by y0014984"; //--- ToDo: Localize;
        };

        class Pos1: RscText
        {
            idc = 9001;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 0 * GUI_GRID_H + GUI_GRID_Y;
            w = 1 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;

            colorBackground[] = {1, 0, 0, 1}; // opaque red
        };

        class Pos2: RscText
        {
            idc = 9002;

            x = 39 * GUI_GRID_W + GUI_GRID_X;
            y = 0 * GUI_GRID_H + GUI_GRID_Y;
            w = 1 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;

            colorBackground[] = {1, 0, 0, 1}; // opaque red
        };

        class Pos3: RscText
        {
            idc = 9003;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 24 * GUI_GRID_H + GUI_GRID_Y;
            w = 1 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;

            colorBackground[] = {1, 0, 0, 1}; // opaque red
        };

        class Pos4: RscText
        {
            idc = 9004;

            x = 39 * GUI_GRID_W + GUI_GRID_X;
            y = 24 * GUI_GRID_H + GUI_GRID_Y;
            w = 1 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;

            colorBackground[] = {1, 0, 0, 1}; // opaque red
        };
	};
};

/* ================================================================================ */

class WarRoom5
{
	idd = 14645;
	enableSimulation = true;

	WR_uiPlaceholderCount = 3;

	class controlsBackground
	{
        class Background: RscText
        {
            idc = 1001;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 0 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 25 * GUI_GRID_H;

            colorBackground[] = {0, 0, 0, 1}; // opaque black
        };
	};

	class controls
	{
        class Headline: RscText
        {
            idc = 2001;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 0 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;

            colorBackground[] = {0.2, 0.2, 0.2, 1}; // opaque dark grey
            sizeEx = 1.2 * GUI_GRID_H;
            text = "War Room"; //--- ToDo: Localize;
        };

		class Placeholder1: RscPicture
		{
			idc = 3001;

			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 30 * GUI_GRID_W;
			h = 20 * GUI_GRID_H;

            text = "\y\wr\addons\main\ui\WarRoom_Placeholder1_1024x1024.paa";
		};

		class Placeholder2: RscPicture
		{
			idc = 3002;

			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 10 * GUI_GRID_H;

            text = "\y\wr\addons\main\ui\WarRoom_Placeholder2_1024x1024.paa";
		};

		class Placeholder3: RscPicture
		{
			idc = 3003;

			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 10 * GUI_GRID_H;

            text = "\y\wr\addons\main\ui\WarRoom_Placeholder3_1024x1024.paa";
		};

		class Placeholder1Headline: RscText
		{
			idc = 5001;
        
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
        
        	colorBackground[] = {0.2, 0.2, 0.2, 0.5}; // translucent grey
        
			text = "Placeholder 1";
		};

		class Placeholder2Headline: RscText
		{
			idc = 5002;

			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;

            colorBackground[] = {0.2, 0.2, 0.2, 0.5}; // translucent grey
			text = "Placeholder 2";
		};

		class Placeholder3Headline: RscText
		{
			idc = 5003;

			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			
            colorBackground[] = {0.2, 0.2, 0.2, 0.5}; // translucent grey
			text = "Placeholder 3";
		};

        class Subheadline: RscText
        {
            idc = 6001;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 23 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;

            colorBackground[] = {0.2, 0.2, 0.2, 1}; // opaque dark grey
            text = "Mod v0.1.0 by y0014984"; //--- ToDo: Localize;
        };

        class Pos1: RscText
        {
            idc = 9001;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 0 * GUI_GRID_H + GUI_GRID_Y;
            w = 1 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;

            colorBackground[] = {1, 0, 0, 1}; // opaque red
        };

        class Pos2: RscText
        {
            idc = 9002;

            x = 39 * GUI_GRID_W + GUI_GRID_X;
            y = 0 * GUI_GRID_H + GUI_GRID_Y;
            w = 1 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;

            colorBackground[] = {1, 0, 0, 1}; // opaque red
        };

        class Pos3: RscText
        {
            idc = 9003;

            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 24 * GUI_GRID_H + GUI_GRID_Y;
            w = 1 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;

            colorBackground[] = {1, 0, 0, 1}; // opaque red
        };

        class Pos4: RscText
        {
            idc = 9004;

            x = 39 * GUI_GRID_W + GUI_GRID_X;
            y = 24 * GUI_GRID_H + GUI_GRID_Y;
            w = 1 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;

            colorBackground[] = {1, 0, 0, 1}; // opaque red
        };
	};
};

/* ================================================================================ */