// A sort of read-eval-print-loop but for my game

#include <stdlib.h>
#include <stdbool.h>

#ifndef REPL_H
#define REPL_H

bool exitprompt;

// 50 just to be safe
char command[50];

/* This is used in a switch statement later,
   why are there two magic numbers?
 */
int COMNUMBER, MAGICNUMONE, MAGICNUMTWO;

// Every time you enter an area where you can input commands it will change
// the list of commands will change
char MAIN_MENU_COMLIST[6][10] =
  {
   "new",
   "load",
   "show w",
   "show c",
   "help",
   "exit"
  };

char DEV_CONSOLE_COMLIST[7] [15] =
  {
   "dev console",
   "help",
   "startscr",
   "exit",
   "dev",
   "game",
   "game version"
  };

char IN_GAME_COMLIST[5] [20] =
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
  compare(command);
  return 0;
}

int compare(command)
{
  for (int loopmax = 0; loopmax < COM_AMOUNT; loopmax++)
    {
      if (strcmp(command, comlist[loopmax]) == 0)
	{
	  magicnum = loopmax;
	  execute(magicnum);
	}
    }
  return 0;
}

int execute(magicnum)
{
  switch(magicnum)
    {
    case 0:
      printf("foo\n");
      break;
    case 1:
      printf("bar\n");
      break;
    case 2:
      printf("foobar\n");
      break;
    case 3:
      printf("corge\n");
      break;
    case 4:
      printf("xyzzy\n");
      break;
    case 5:
      for (int helploop = 0; helploop < COM_AMOUNT; helploop++)
	{
	  printf("%s\n", comlist[helploop]);
	}
      break;
    case 6:
      exitprompt = true;
      break;
    default:
      printf("Uh oh\n");
      break;
    }
  return 0;
}

#endif
