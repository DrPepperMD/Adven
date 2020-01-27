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
#include "usrdata.h"
#include "commands.h"

#ifndef LOCATIONS_H
#define LOCATIONS_H

// list of all locations in the game

// this is used so the game knows where you are and so you know where you are

/*
  Less than 20 = non game locations i.e. The main menu (for some reason)
 */
#define LOCATIONS_NULL                  0
#define LOCATIONS_NOT_GAME_STARTSCR	1 // un-used
#define LOCATIONS_NOT_GAME_DEVCONSOLE	2 // un-used
#define LOCATIONS_NOT_GAME_TUTORIAL1	3
#define LOCATIONS_NOT_GAME_TUTORIAL2	4

// Directions to help with navigation
#define NULLDIR  0
#define NORTH    1
#define EAST     1
#define SOUTH    1 
#define WEST     1

extern int LOCATION = 0;

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
