/*
  ADVEN is a text based adventure game created in C

  Copyright (C) 2019, 2020 DrPepperMD
  
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
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#include "../../lib/com/repl.h"

// #include "../../lib/etc/"

// #include "../../lib/main/locations.h"
#include "../../lib/main/startscreen.h"
// #include "../../lib/main/usrdata.h"

int main()
{
  MAGICNUMTWO = 5;
  printmainmenu();
  input(command);
  return 0;
  /*
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
  */
}
