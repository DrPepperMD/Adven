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

int X, Y, MAP;

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

// The map seen when you type the command "map" (Work in progress)
const char displaymap[5] [5] =
  {
   ""
   ""
   ""
   ""
   ""
  }

// Coming soon
const int mainmap[80] [80];

// This needs to be updated
int getloc()
{
  switch (MAP)
    {
    case 0:
      printf("You're at coordinates X: %d, Y: %d in the demo map\n", X, Y);
      break;
    default:
      printf("You currently cannot be located!\n");
      break;
    }
}

#endif
