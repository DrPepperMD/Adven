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
#include <string.h>
#include <unistd.h>

#include "../../lib/com/repl.h"
#include "../../lib/main/locations.h"
#include "../../lib/main/startscreen.h"
#include "../../lib/main/usrdata.h"
#include "../../lib/etc/yesno.h"

#define clearscr printf("\033[H\033[2J");

int main()
{
  clearscr;
  MAGICNUMTWO = 0;
  printmainmenu();
  for (;;)
    {
      if (exitprompt == false)
	{
	  if (demomode == true)
	    {
	      demo();
	    }
	  else if (devmode == true)
	    {
	      devconsole();
	    }
	  else
	  input();
	}
      else
	return 0;
    }
  return 0;
}

void devconsole()
{
  MAGICNUMTWO = 1;
  exitprompt = false;
  for (;;)
    {
      if (exitprompt == false)
	{
	  input();
	}
      else
	{
	  devmode = false;
	  exitprompt = false;
	  return;
	}
    }
}

// Actually contains game stuff

void demo()
{
  int yesorno;
  exitprompt = false;
  X = 2;
  Y = 0;
  MAP = 0;
  // shortend version of playersetup(); from usrdata.h
  printf("Before we get to the game, what do you want to be called?\n> ");
  while (yesorno != 0)
    {
      scanf(" %[^\n]s", playerinfo[0]);
      printf("Are you sure you want to be called '%s'", playerinfo[0]);
      yesorno = yesno();
      if (yesorno == 1)
	{
	  printf("Then type in your new name\n> ");
	}
    }
  printf("Now we can get to the game!");
  sleep(2);
  clearscr;
  printf("You appear in the middle of a pathway in the middle of nowhere,\n");
  printf("");
  printf("");
  MAGICNUMTWO = 2;
  for (;;)
    {
      if (exitprompt == false)
	{
	  input();
	}
      else
	return;
    }
  for (;;) {}
}


