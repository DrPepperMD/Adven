/*
	This file is part of ADVEN.

	ADVEN is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	ADVEN is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with ADVEN.  If not, see <https://www.gnu.org/licenses/>.

	this header just removes a lot of the printf's by compressing
	them into these #define thingys

	also welcome to #define valley!
*/

#pragma once
#define STARTSCR_MENU1 "[NEW] to start a new game\n"
#define STARTSCR_MENU2 "[LOAD] to load a save file\n"
#define STARTSCR_MENU3 "[EXIT] to exit...\n\n"
#define STARTSCR_MENU_MAIN printf("%s%s%s", STARTSCR_MENU1, STARTSCR_MENU2, STARTSCR_MENU3);
#define STARTSCR_DEBUG printf("[DEBUG] try out experimental freatures!\n\n");

#define STARTSCR_CREDITS_DIRECTOR "\nDirector:\nDrPepperMD\n\n"
#define STARTSCR_CREDITS_LEADGAMEDES "\nLead Game Designer:\nDrPepperMD\n\n"
#define STARTSCR_CREDITS_LEADPROGRAMMER "\nLead Programmer:\nDrPepperMD\n\n"
#define STARTSCR_CREDITS_LEADWRITER "\nLead writer:\nDrPepperMD\n\n"
#define STARTSCR_CREDITS_MAIN printf("%s%s%s%s", STARTSCR_CREDITS_DIRECTOR, STARTSCR_CREDITS_LEADGAMEDES, STARTSCR_CREDITS_LEADPROGRAMMER, STARTSCR_CREDITS_LEADWRITER);
#define STARTSCR_PLAYER_CONFIG printf("[CONFIG] edit player config for game (FOR TESTING ONLY)\n\n");

#define STARTSCR_MENU_ADVEN_LOGO1 "             _____   __      __  ______   _   _ \n"
#define STARTSCR_MENU_ADVEN_LOGO2 "     /\\     |  __ \\  \\ \\    / / |  ____| | \\ | |\n"
#define STARTSCR_MENU_ADVEN_LOGO3 "    /  \\    | |  | |  \\ \\  / /  | |__    |  \\| |\n"
#define STARTSCR_MENU_ADVEN_LOGO4 "   / /\\ \\   | |  | |   \\ \\/ /   |  __|   | . ` |\n"
#define STARTSCR_MENU_ADVEN_LOGO5 "  / ____ \\  | |__| |    \\  /    | |____  | |\\  |\n"
#define STARTSCR_MENU_ADVEN_LOGO6 " /_/    \\_\\ |_____/      \\/     |______| |_| \\_|\n\n"
#define STARTSCR_MENU_ADVEN_LOGO_MAIN printf("%s%s%s%s%s%s", STARTSCR_MENU_ADVEN_LOGO1, STARTSCR_MENU_ADVEN_LOGO2, STARTSCR_MENU_ADVEN_LOGO3, STARTSCR_MENU_ADVEN_LOGO4, STARTSCR_MENU_ADVEN_LOGO5, STARTSCR_MENU_ADVEN_LOGO6);

#define STARTSCR_GAME_CONFIG_VERSION "ADVEN pre-alpha Version 0.0.xx " // this is to be changed whenever there is a update
#define STARTSCR_GAME_CONFIG_CODENAME_VERSION "Codename: 8-Ball version 0.2"

#define STARTSCR_MENU_LICENSE1 "Copyright (C) 2019  DrPepperMD aka rjb\n" 	// the %s in this is for the version
#define STARTSCR_MENU_LICENSE2 "This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.\n"
#define STARTSCR_MENU_LICENSE3 "This is free software, and you are welcome to redistribute it\n"
#define STARTSCR_MENU_LICENSE4 "under certain conditions; type `show c' for details.\n\n"
#define STARTSCR_MENU_LICENSE_MAIN printf("%s%s%s%s%s", STARTSCR_GAME_CONFIG_VERSION, STARTSCR_MENU_LICENSE1, STARTSCR_MENU_LICENSE2, STARTSCR_MENU_LICENSE3, STARTSCR_MENU_LICENSE4);

// dev console \/

#define DEV_CONSOLE_STARTSCR printf("\n\n\nADVEN DEV CONSOLE [EXPERIMENTAL]\n%s\n%s\n", STARTSCR_GAME_CONFIG_VERSION, STARTSCR_MENU_LICENSE1);
#define DEV_HELP_TEXT1 "List of possible commands:\n"
#define DEV_HELP_TEXT2 "[STARTSCR] To show everything defined under startscr\n\n"
#define DEV_HELP_MAIN printf("%s%s", DEV_HELP_TEXT1, DEV_HELP_TEXT2);

// game sprites

#define TUTORIAL_CHARACTER "  o\n /|\\\n / \\\n"