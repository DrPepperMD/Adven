/*
  Header that handles player data and stuff
*/

#ifndef USRDATA_H
#define USRDATA_H

#include <stdio.h>
#include "../com/repl.h"

// Massive array that sorts stuff
char playerinfo[10] [25];

void playersetup()
{
  printf("Before we get to the game, what do you want to be called?\n> ");
 nameinput:
  scanf(" %[^\n]s", playerinfo[0]);
  for (;;)
    {
      printf("Are you sure you want your name to be '%s' [Yes/no]\n", playerinfo[0]);
      char choice[4];
      printf("> ");
      scanf("%s", choice);
      if (strcmp(choice, "yes") == 0)
	{
	  goto exitloop;
	}
      else if (strcmp(choice, "no") == 0)
	{
	  goto nameinput;
	}
      else
	{
	  printf("Please answer in yes or no\n");
	}
    }
 exitloop:
  printf("Now we can get to the game!\n");
  return;
}

#endif
