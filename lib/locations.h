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
// list of all locations in the game

// this is used so the game knows where you are and so you know where you are

/*
  Less than 20 = non game locations i.e. The main menu (for some reason)
 */
#define LOCATIONS_NOT_GAME_STARTSCR	0 // un-used
#define LOCATIONS_NOT_GAME_DEVCONSOLE	1 // un-used
#define LOCATIONS_NOT_GAME_TUTORIAL1	2
#define LOCATIONS_NOT_GAME_TUTORIAL2	3

int getloc(int LOCATION)
{
  // This entire function is just bloat, so if anyone finds a way to make this more efficient please contact me!
if (LOCATION < 20)
  {
    if (LOCATION < 10)
      {
	if (LOCATION == 2)
	  {
	    printf("You're located in Tutorial part 1\navalible directions: North\n");
	  }
      }
  }
}
