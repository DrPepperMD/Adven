/*
  ADVEN is a text based adventure game created in C and C++ and maybe a bit Assembly
  Copyright (C) 2019  DrPepperMD or rjb
  
  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
  
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "../../lib/com/comlist.h"
#include "../../lib/com/comprompt.h"

#include "../../lib/etc/"

#include "../../lib/main/locations.h"
#include "../../lib/main/startscreen.h"
#include "../../lib/main/usrdata.h"

int main()
{
  // Can't wait to get rid of this all, I will miss it though :-(
  STARTSCR_MENU_ADVEN_LOGO_MAIN
  STARTSCR_MENU_LICENSE_MAIN
    
  STARTSCR_MENU_MAIN
  STARTSCR_DEBUG
    
  MAIN:
  printf(">");	// <-- This is sad but prevents a big bug! DEC 16 2019: I'm gonna clarify why I did this,
  /* if I were to put this in the scanf function then it would assume(?) that it's input and because ">"
     is not a valid command it will say it's not recognized then loop back to the scanf which would
     still have the arrow and it will loop forever DEC 17 2019: Why did I put this comment in here?*/
  scanf("%20s", STARTSCR_COM);
  if (strcmp(STARTSCR_COM, NEW_GAME) == 0)
    {
      printf("Do you have an already existing file called 'save.txt' located in Adven/usr/saves? [Y/n]\n");
      YES_OR_NO_PROMPT
	if (YES_OR_NO == YES)
	  {
	    printf("Then could you delete that and reboot the game?");
	    return 0;
	  }
	else
	  printf("Carry on then!\n");
    REDO_NAME:
      printf("Please type in your name (can only be one word): ");
      scanf("%s", PLAYER_NAME);
      printf("Are you sure you want '%s' to be your name? [Y/n]\n>", PLAYER_NAME);
      bool NEWGAME_NAME = false;
      YES_OR_NO_PROMPT 
	if (YES_OR_NO == YES)
	  {
	    NEWGAME_NAME = true;
	    printf("That is gonna be your name for now on\n");
	    // These are custom functions that I wrote, they can be found in lib/save.h (if you are using the pull request version)
	    createsave();
	    savename();
	  NEWGAME_TUTORIAL:
	    printf("anyway would you like to take the tutorial? [Y/n]\n>");
	    YES_OR_NO_PROMPT
	      if (YES_OR_NO == YES)
		{
		  printf("Welcome to the tutorial!\n\nPart 1: Basic movement:\n");
		  printf("To move in this game you will first need to know where you are and which direction you want go\n");
		  printf("to find out where you are type 'location'\n");
		  LOCATION = LOCATIONS_NOT_GAME_TUTORIAL1;
		TUTORIAL_COM:
		  printf(">");
		  scanf("%s", TUTORIAL_COM);
		  if (strcmp(TUTORIAL_COM, LOCATE_ME) == 0)
		    {
		      getloc(LOCATION);
		      printf("As you can see when you typed that it found where you are\n");
		      return 0;
		    }
		  else
		    {
		      COMMAND_NOT_FOUND
		      goto TUTORIAL_COM;
		    }
		}
	      else if (YES_OR_NO == NO)
		{
		  printf("insert text here :P\n");
		  return 0;
		}
	      else
		{
		  goto COM_NOT_FOUND_NEWGAME;
		}
	  }
	else if (YES_OR_NO == NO)
	  {
	    goto REDO_NAME;
	  }
	else
	  {
	  COM_NOT_FOUND_NEWGAME:
	  COMMAND_NOT_FOUND
	    if (NEWGAME_NAME == false)
	      {
		goto REDO_NAME;
	      }
	    else
	      {
		goto NEWGAME_TUTORIAL;
	      }
	  }

      // SEPARATION OF NEW GAME AND EVERYTHING ELSE FOR READABILITY!
      
    }
  else if (strcmp(STARTSCR_COM, LOAD_GAME) == 0)
    {
      goto LOADGAME;
    }
  else if (strcmp(STARTSCR_COM, EXIT_GAME) == 0)
    {
      return 0;
    }
  else if (strcmp(STARTSCR_COM, STARTSCR_LICENSE_WARRENTY) == 0)
    {
      printf("\nfor more details of the lack of a warranty,\n");
      printf("goto section 15 of https://www.gnu.org/licenses/gpl-3.0.html \n\n");
      goto MAIN;
    }
  else if (strcmp(STARTSCR_COM, STARTSCR_LICENSE_DISTRO) == 0)
    {
      printf("\nfor more details of redistributing this,\n");
      printf("goto section 5 of https://www.gnu.org/licenses/gpl-3.0.html \n\n");
      goto MAIN;
    }
  else if (strcmp(STARTSCR_COM, STARTSCR_CREDITS_COM) == 0)
    {
      STARTSCR_CREDITS_MAIN
      goto MAIN;
    }
  else if (strcmp(STARTSCR_COM, DEBUG) == 0)
    {
      testfile();
      return 0;
    }
  else if (strcmp(STARTSCR_COM, DEV) == 0)
    {
      goto DEVCONSOLE;
    }
  else if (strcmp(STARTSCR_COM, ABOUT) == 0)
    {
      aboutpr();
      goto MAIN;
    }
  else
    {
      COMMAND_NOT_FOUND
      goto MAIN;
    }
LOADGAME:
  printf("\nThis function is under development :(\n\n");
  goto MAIN;
  /*
    Down here is the dev console,
    this is used for test macros.
    Everything that is used here can be found in either commands.h or startscreen.h.
  */
DEVCONSOLE:
  DEV_CONSOLE_STARTSCR
DEVCONSOLECOM:
  printf(">");
  scanf("%20s", DEV_CONSOLE);
  if (strcmp(DEV_CONSOLE, DEV_HELP) == 0)
    {
      DEV_HELP_MAIN
      goto DEVCONSOLECOM;
    }
  else if (strcmp(DEV_CONSOLE, DEV_STARTSCR_COM) == 0)
    {
      // reduced to a function because screw this pile of peepee poopoo
      startscrall();
    }
  else if (strcmp(DEV_CONSOLE, DEV_EXIT) == 0)
    {
    DEVCONSOLEEXITCOM:
      printf("\nExit dev console or game?\n[DEV]\t[game]\n\n>");
      scanf("%s", DEV_EXIT_CHAR);
      if (strcmp(DEV_EXIT_CHAR, DEV_EXIT_DEV) == 0)
	{
	  goto MAIN;
	}
      else if (strcmp(DEV_EXIT_CHAR, DEV_EXIT_GAME) == 0)
	{
	  printf("Bye!\n");
	  return 0;
	}
      else
	{
	  COMMAND_NOT_FOUND
	  goto DEVCONSOLEEXITCOM;
	}
    }
  else if (strcmp(DEV_CONSOLE, DEV_GAME_VERSION) == 0)
    {
      printf("\n%s\n%s\n\n", STARTSCR_GAME_CONFIG_VERSION, STARTSCR_GAME_CONFIG_CODENAME_VERSION);
      goto DEVCONSOLECOM;
    }
  else
    {
      COMMAND_NOT_FOUND
      goto DEVCONSOLECOM;
    }
}
