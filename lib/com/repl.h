// A sort of read-eval-print-loop but for my game

#include <stdlib.h>
#include <stdbool.h>

#ifndef REPL_H
#define REPL_H

// Constants for the amount of commands in a list
#define MAIN_MENU_AMOUNT 6
#define DEV_CONSOLE_AMOUNT 7
#define IN_GAME_AMOUNT 5

bool exitprompt;

// 50 just to be safe
char command[50];

/* "MAGICNUMONE" is used for the command and "MAGICNUMTWO" is used for the
   list of commands it will scan so if "MAGICNUMONE" was 4 and "MAGICNUMTWO"
   was 5 it will look in list 5 for command 4, it's really simple when you
   get to know it. :-)
 */

int MAGICNUMONE, MAGICNUMTWO;

// List 0 
const char MAIN_MENU_COMLIST[6][10] =
  {
   "new",
   "load",
   "show w",
   "show c",
   "help",
   "exit"
  };

// List 1
const char DEV_CONSOLE_COMLIST[7] [15] =
  {
   "dev console",
   "help",
   "startscr",
   "exit",
   "dev",
   "game",
   "game version"
  };

// List 2
const char IN_GAME_COMLIST[5] [20] =
  {
   "locate me",
   "north",
   "east",
   "west",
   "south"
  };

int input(command)
{
  scanf("%s", command);
  
  switch(MAGICNUMTWO)
    {
    case 0:
      switch(MAGICNUMTWO)
	{
	  for (int REPLLOOP = 0; REPLLOOP < MAIN_MENU_AMOUNT)
	    {
	      // I don't like using strcmp because it feels dirty
	      if (strcmp(command, MAIN_MANU_COMLIST[REPLLOOP]) == 0)
		{
		  MAGICNUMONE = REPLLOOP;
		  execute(command);
		}
	    }
	}
      break;
    case 1:
      switch(MAGICNUMTWO)
	{
	  switch(MAGICNUMTWO)
	    {
	      for (int REPLLOOP = 0; REPLLOOP < DEV_CONSOLE_AMOUNT)
		{
		  if (strcmp(command, DEV_CONSOLE_COMLIST[REPLLOOP]) == 0)
		    {
		      MAGICNUMONE = REPLLOOP;
		      execute(command);
		    }
		}
	    }
	}
      break;
    case 2:
      switch(MAGICNUMTWO)
	{
	  switch(MAGICNUMTWO)
	    {
	      for (int REPLLOOP = 0; REPLLOOP < IN_GAME_AMOUNT)
		{
		  if (strcmp(command, IN_GAME_COMLIST[REPLLOOP]) == 0)
		    {
		      MAGICNUMONE = REPLLOOP;
		      execute(command);
		    }
		}
	    }
	}
      break;
    default:
      printf("ERROR: MAGICNUMTWO is invalid!\n");
      return 1;
      break;
    }
  return 0;
}

int execute(MAGICNUMONE);
{
}

#endif
