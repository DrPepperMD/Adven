/*
  ADVEN is a text based adventure game created in C and C++
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
#include <sys/types.h>
#include <sys/stat.h>
#include "../../lib/saveio.h"
#include "../../lib/startscreen.h"
#include "../../lib/player.h"
#include "../../lib/commands.h"
// #include "src\data\world\locations.h"

int main()
{
  FILE *fp;
  STARTSCR_MENU_ADVEN_LOGO_MAIN
    STARTSCR_MENU_LICENSE_MAIN
    
    STARTSCR_MENU_MAIN
    STARTSCR_DEBUG
    
    STARTSCR_PLAYER_CONFIG
    MAIN:
    printf(">");	// <-- is sad but prevents a big bug!
  scanf("%20s", STARTSCR_COM);
  if (strcmp(STARTSCR_COM, NEW_GAME) == 0)
    {
      printf("Please type in your name (can only be one word): ");
      scanf("%s", PLAYER_NAME);
    REDO_NAME:
      printf("Are you sure you want '%s' to be your name? [Y/n]\n>", PLAYER_NAME);
      bool NEWGAME_NAME = false;
      YES_OR_NO_PROMPT 
	if (YES_OR_NO == YES)
	  {
	    NEWGAME_NAME = true;
	    printf("That is gonna be your name for now on\n");
	  NEWGAME_TUTORIAL:
	    printf("anyway would you like to take the tutorial? [Y/n]\n>");
	    YES_OR_NO_PROMPT
	      if (YES_OR_NO == YES)
		{
		  printf("Welcome to the tutorial!\n\nPart 1: Basic movement:\n");
		  printf("To move in this game you will first need to know where you are and which direction you want go\n");
		  printf("to find out where you are type 'location'\n");
		  //LOCATION = LOCATIONS_NOT_GAME_TUTORIAL1;
		TUTORIAL_COM:
		  printf(">");
		  scanf("%s", TUTORIAL_COM);
		  if (strcmp(TUTORIAL_COM, LOCATE_ME) == 0)
		    {
		      printf("something...\n");
		    }
		  else
		    {
		      COMMAND_NOT_FOUND
			goto TUTORIAL_COM;
		    }
		}
	      else if (YES_OR_NO == NO)
		{
		  printf("Ok then...\nYour choice...\n");
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
      printf("sdsd");
    }
  else if (strcmp(STARTSCR_COM, DEV) == 0)
    {
      goto DEVCONSOLE;
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
     printf("\nThis may look buggy but these are the raw macros:\n\n");

     printf("%s\n%s\n%s\n", STARTSCR_MENU1, STARTSCR_MENU2, STARTSCR_MENU3);

     STARTSCR_MENU_MAIN
       STARTSCR_DEBUG

       printf("%s\n%s\n%s\n%s\n", STARTSCR_CREDITS_DIRECTOR, STARTSCR_CREDITS_LEADGAMEDES, STARTSCR_CREDITS_LEADPROGRAMMER, STARTSCR_CREDITS_LEADWRITER);
     STARTSCR_CREDITS_MAIN

       STARTSCR_CREDITS_MAIN
       STARTSCR_PLAYER_CONFIG

       printf("%s\n%s\n%s\n%s\n%s\n%s\n", STARTSCR_MENU_ADVEN_LOGO1, STARTSCR_MENU_ADVEN_LOGO2, STARTSCR_MENU_ADVEN_LOGO3, STARTSCR_MENU_ADVEN_LOGO4, STARTSCR_MENU_ADVEN_LOGO5, STARTSCR_MENU_ADVEN_LOGO6);
     STARTSCR_MENU_ADVEN_LOGO_MAIN

       printf("%s\n%s\n%s\n%s\n", STARTSCR_MENU_LICENSE1, STARTSCR_MENU_LICENSE2, STARTSCR_MENU_LICENSE3, STARTSCR_MENU_LICENSE4);
     STARTSCR_MENU_LICENSE_MAIN
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
}	// im bored
