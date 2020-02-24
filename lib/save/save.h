#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "usrdata.h"

#define DEFAULT_USER_DATA_VALUE "NULL"

char userdata[10] [25] =
  {
   "", // Name
   "", // something
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   ""
  };

int setuserdata()
{
  for (int setuserdataloop = 0; setuserdataloop < 10; setuserdataloop++)
    {
      userdata[setuserdataloop] = DEFAULT_USER_DATA_VALUE;
    }
  return 0;
}

int createsave()
{
FILE *fp;
  fp = fopen("../usr/saves/save.txt", "w");
  fclose(fp);
return 0;
}

int initfile()
{
  FILE *fp;
  return 0;
}

int savename() // This needs to be changed!
{
FILE *fp;
  fp = fopen("../usr/saves/save.txt", "w");
  fprintf(fp, "NAME: %s", PLAYER_NAME);
  fclose(fp);
return 0;
}

// DEV TEST
int testfile()
{
  // Requires existing file
  FILE *fp;
  fp = fopen("../usr/saves/save.txt", "w");
  for (int floop = 0; floop < 10; floop++)
    {
      fprintf(fp, "test %d\n", floop);
    }
  fclose(fp);
return 0;
}
