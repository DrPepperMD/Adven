#include <string.h>

#ifndef COMLIST_H
#define COMLIST_H

// this header defines all of the commands use in main because I am annoying
// by the way COM is just short command because MS-DOS had stuff end in .COM

extern char STARTSCR_COM[20] =	"null";
extern char DEV_CONSOLE[20] =	"null";
extern char DEV_EXIT_CHAR[10] =	"null";
extern char TUTORIAL_COM[20] =	"null";
extern char KEY_CON =	'n';		// for press any key to continues prompts, short for key-continue
extern char YES_OR_NO =	'n';		// yes or no

extern char YES =		'y';
extern char NO =		'n';

// because I didn't want to use a non-standard header (conio.h)
// I made my own version of 'getch();' could be better but it will do
#define YES_OR_NO_PROMPT	scanf(" %c", &YES_OR_NO);

#define STARTSCR_LICENSE_WARRENTY	"show_w"
#define STARTSCR_LICENSE_DISTRO		"show_c"
#define STARTSCR_CREDITS_COM		"credits"
#define DEBUG		      			"debug"
#define EXIT_GAME		       		"exit"
#define NEW_GAME	       			"new"
#define LOAD_GAME		       		"load"
#define CONFIG_GAME	       			"config"
#define HELP			       		"help"
#define ABOUT "about"

#define COMMAND_NOT_FOUND printf("Command not found...\n");
#define UNABLE_TO_LOCATE_ERROR printf("Function getloc() is unable to locate you...");

// dev console commands
#define DEV					"dev_console"
#define DEV_HELP			"help"
#define DEV_STARTSCR_COM	"startscr"
#define DEV_EXIT			"exit"
#define DEV_EXIT_DEV		"dev"
#define DEV_EXIT_GAME		"game"
#define DEV_GAME_VERSION	"game_version"

// in game commands

#define LOCATE_ME       "location"
#define MOVE_NORTH	"north"
#define MOVE_EAST	"east"
#define MOVE_WEST	"west"
#define MOVE_SOUTH	"south"

#endif
