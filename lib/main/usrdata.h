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
#include <stdio.h>
#include <string.h>

#ifndef USRDATA_H
#define USRDATA_H

// config for player i.e. health, gold, etc
#define PLAYER_CONFIG_TEXT printf("\n>Edit these to your need:\n\n");

// Avalible directions, these will change according to your location
extern int DIR0 = 0; // North
extern int DIR1 = 0; // East
extern int DIR2 = 0; // South
extern int DIR3 = 0; // West

extern int	LOCATION =	0;
extern char	PLAYER_NAME[50] =	"null";
extern int	health =	0;

#endif
