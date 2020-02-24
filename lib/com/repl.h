
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
const char MAIN_MENU_COMLIST[6][8] =
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
  printf("> ");
  scanf(" %[^\n]s", command);
  
  switch(MAGICNUMTWO)
    {
    case 0:
      for (int REPLLOOP = 0; REPLLOOP < MAIN_MENU_AMOUNT; REPLLOOP++)
	{
	  // I don't like using strcmp because it feels dirty
	  if (strcmp(command, MAIN_MENU_COMLIST[REPLLOOP]) == 0)
	    {
	      MAGICNUMONE = REPLLOOP;
	      execute(MAGICNUMONE, MAGICNUMTWO, command);
	      return 0;
	    }
	}
      printf("aaaaaaaaaaa\n");
      return 0;
      break;
      /*case 1:
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
	break; */
    default:
      printf("ERROR: MAGICNUMTWO is invalid!\n");
      return 1;
      break;
    }
  return 0;
}

int execute(MAGICNUMONE, MAGICNUMTWO, command)
{
  switch(MAGICNUMTWO)
    {
    case 0:
      switch(MAGICNUMONE)
	{
	case 0:
	  printf("NEU!\n");
	  break;
	case 1:
	  printf("Nothing to load :-(\n");
	  break;
	case 2:
	  printf("I forgot what to write for show w\n");
	  break;
	case 3:
	  printf("I forgot what to write for show c\n");
	  break;
	case 4:
	  printf("There is no help here!\n");
	  break;
	case 5:
	  printf("Okie dokie!\n");
	  exitprompt = true;
	  break;
    	}
      return 0;
      break;
      /* case 1:
      switch(MAGICNUMONE)
	{
	}
      break;
    case 2:
      switch(MAGICNUMONE)
	{
	}
	break; */
    default:
      printf("ERROR: H-how?");
      break;
    }
  return 0;
}

#endif
