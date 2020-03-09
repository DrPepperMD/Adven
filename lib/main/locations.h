/*
  This file is part of ADVEN.

  ADVEN is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  ADVEN is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with ADVEN.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef LOCATIONS_H
#define LOCATIONS_H

#include "usrdata.h"
#include "commands.h"

int X, Y;

/* Map legend:
   0: plain land
   1: path ways
   2: water
   3: village
   4: impassable terrain i.e. mountain
   5: cave
   6: forest
   7: city
 */

// Map used for demo
const int demomap[5] [5] =
  {
   {5, 0, 1, 2, 2},
   {6, 6, 1, 0, 2},
   {1, 1, 1, 0, 0},
   {6, 3, 1, 1, 0},
   {0, 0, 0, 1, 7}
  };

// Coming soon
const int mainmap;

// This needs to be updated
int getloc(int LOCATION)
{
  // This entire function is just bloat, so if anyone finds a way to make this more efficient please contact me!
if (LOCATION < 20)
  {
    if (LOCATION < 10)
      {
	if (LOCATION == 3)
	  {
	    printf("\nYou're located in Tutorial part 1\navalible directions: North\n");
	    return 0;
	  }
	else if (LOCATION == 4)
	  {
	    printf("\nYou're located in Tutorial part 2\navalible directions: South\n");
	    return 0;
	  }
	else
	  goto UNABLE_TO_LOCATE;
      }
  }
 UNABLE_TO_LOCATE:
 UNABLE_TO_LOCATE_ERROR
   return 1;
}

#endif
