#include <stdio.h>
#include <stdlib.h>

// Yea I use legacy standard include gaurds :-)
#ifndef MISC_H
#define MISC_H

// This contains all the funky stuff like the help command

#define COM_VERSION_NUM "0.1"

int about()
{
  // I know this breaks the column 80 rule but I don't care!
  printf("Comprompt %s Copyright (C) 2019-2020 DrPepperMD\n", COM_VERSION_NUM);
  printf("This program comes with ABSOLUTLEY NO WARRENTY; for details type `show w'\n");
  printf("This is free software, and you are welcome to redistribute it\n");
  printf("under certain conditions; type `show c' for details.\n");
  return 0;
}

int help()
{
  /* not in comprompt.h because that is dedicated to the IO part of this
     though if you add a your own command you should add an entry to this
     function so whoever uses knows that it exists and how to use it properly

     also this will be updated to be more robust and better to look at for now
     it will just be a bunch of printf's but if you find a better way of doing
     this just hit me up
  */
  printf("\nfoo, bar and foobar are all metasyntactical commands, they just ls.\n");
  printf("show w and show c show info regarding the GNU GPL license.\n");
  printf("edit brings up an interface to select an editor.\n");
  printf("clear clears the screen.\n");
  printf("about shows some misc info.\n");
  printf("help shows help and that is how you got here.\n");
  printf("and finally exit will exit the prompt or shell or whatever!\n\n");
  return 0;
}

#endif
