#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "usrdata.h"

int createsave()
{
FILE *fp;
  fp = fopen("../usr/saves/save.txt", "w");
  fclose(fp);
return 0;
}


int savename()
{
FILE *fp;
  fp = fopen("../usr/saves/save.txt", "w");
  fprintf(fp, "%s", PLAYER_NAME);
  fclose(fp);
return 0;
}
