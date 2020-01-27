#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "misc.h"

#ifndef COMRPOMPT_H
#define COMPROMPT_H

// Whats nessecariy(? I can't spell :P) to make a functional prompt that is
// simple enough for a 3 year old

// Your command
char command[20];

bool exitprompt = false;

int commandinput()
{
  printf("%s@comprompt:~$ ", getenv("USER")); // so it looks cool
  scanf(" %[^\n]s", command);
  cmpcommand(command);
  return 0;
}

int cmpcommand(command)
{
  if (strcmp(command, "foo") == 0)
    {
      system("ls /");
    }
  else if (strcmp(command, "bar") == 0)
    {
      system("ls ~/");
    }
  else if (strcmp(command, "foobar") == 0)
    {
      system("ls ~/ -R");
    }
  else if (strcmp(command, "show w") == 0)
    {
      printf("Please go to section 15 of https://gnu.org/licenses/gpl-3.0.html\n");
    }
  else if (strcmp(command, "show c") == 0)
    {
      printf("Please go to section 5 of https://gnu.org/licenses/gpl-3.0.html\n");
    }
  else if (strcmp(command, "edit") == 0)
    {
      int editor;
      printf("What is your editor of choice?\navalible choices:\n");
      printf("Nano [1] (may not work correctly)\nGNU Emacs [2]\n");
      scanf("%d", &editor);
      switch(editor)
	{
	case 1:
	  system("nano");
	  break;
	case 2:
	  system("emacs");
	  break;
	default:
	  printf("comprompt- \"%d\" is not a valid option...\n\a", editor);
	}
    }
  else if (strcmp(command, "clear") == 0)
    {
      system("clear");
    }
  else if (strcmp(command, "about") == 0)
    {
      about();
    }
  else if (strcmp(command, "help") == 0)
    {
      // Oh may our lord and saviour External Function To Hide The Bloat save us!
      help();
    }
  else if (strcmp(command, "exit") == 0)
    {
      exitprompt = true;
    } 
  else
    {
      // Default result, simple error message with a cute little beep
      // I like the BASH shell a lot so I made it look like it (thx Brian Fox!)
      printf("comprompt- \"%s\" is not a valid command...\n\a", command);
      return 0;
    }
}

#endif
