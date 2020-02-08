#include <stdlib.h>
#include <stdbool.h>

#ifndef REPL_H
#define REPL_H

#define COM_AMOUNT 7

bool exitprompt;
char command[8];

// this is used in a switch statement later
int magicnum;

// This would be stored in comlist.h for adven
char comlist[COM_AMOUNT][10] =
  {
   "foo",
   "bar",
   "foobar",
   "corge",
   "xyzzy",
   "help",
   "exit"
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
