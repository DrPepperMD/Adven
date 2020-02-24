/*
  Copyright (c) 2019, 2020 Dr Pepper

  This file contains all the data for the start screen/main menu
*/

#ifndef STARTSCREEN_H
#define STARTSCREEN_H

const char MAIN_MENU [3] [28] =
  {
   "[NEW] to start a new game",
   "[LOAD] to load a save file",
   "[EXIT] to exit...\n"
  };

#define STARTSCR_MENU_MAIN printf("%s%s%s", STARTSCR_MENU1, STARTSCR_MENU2, STARTSCR_MENU3);
#define STARTSCR_DEBUG printf("[DEBUG] try out experimental freatures!\n\n");

const char CREDITS [4] [20] =
  {
   "\nDirector:\nDrPepperMD",
   "\nLead Game Designer:\nDrPepperMD",
   "\nLead Programmer:\nDrPepperMD",
   "\nLead writer:\nDrPepperMD"
  };
#define STARTSCR_CREDITS_MAIN printf("%s%s%s%s", STARTSCR_CREDITS_DIRECTOR, STARTSCR_CREDITS_LEADGAMEDES, STARTSCR_CREDITS_LEADPROGRAMMER, STARTSCR_CREDITS_LEADWRITER);
#define STARTSCR_PLAYER_CONFIG printf("[CONFIG] edit player config for game (FOR TESTING ONLY)\n\n");

const char ADVEN_LOGO [6] [55] =
  {
   "             _____   __      __  ______   _   _ ",
   "     /\\     |  __ \\  \\ \\    / / |  ____| | \\ | |",
   "    /  \\    | |  | |  \\ \\  / /  | |__    |  \\| |",
   "   / /\\ \\   | |  | |   \\ \\/ /   |  __|   | . ` |",
   "  / ____ \\  | |__| |    \\  /    | |____  | |\\  |",
   " /_/    \\_\\ |_____/      \\/     |______| |_| \\_|\n"
  };

#define STARTSCR_GAME_CONFIG_VERSION "ADVEN pre-alpha Version 0.1.2 " // this is to be changed whenever there is a update

const char LICENSE [4] [76] =
  {
   "Copyright (C) 2019, 2020 Dr Pepper",
   "This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.",
   "This is free software, and you are welcome to redistribute it",
   "under certain conditions; type `show c' for details.\n"
  };

// dev console \/

#define DEV_CONSOLE_STARTSCR printf("\n\n\nADVEN DEV CONSOLE [EXPERIMENTAL]\n%s\n%s\n", STARTSCR_GAME_CONFIG_VERSION, STARTSCR_MENU_LICENSE1);
#define DEV_HELP_TEXT1 "List of possible commands:\n"
#define DEV_HELP_TEXT2 "[STARTSCR] To show everything defined under startscr\n\n"
#define DEV_HELP_MAIN printf("%s%s", DEV_HELP_TEXT1, DEV_HELP_TEXT2);

// game sprites

#define TUTORIAL_CHARACTER "  o\n /|\\\n / \\\n"

// basic about box, I decided to make this a function instead of a macro

int aboutpr()
{
  printf("\n\tAdven (c) 2019\n\n");
  printf("\tBy Dr Pepper MD\n");
  printf("\tProper about box is still in development...\n\n");
  return 0;
}

int startscrall()
{   

}

int printmainmenu()
{
  for (int temp = 0; temp < 6; temp++)
    {
      printf("%s\n", ADVEN_LOGO[temp]);
    }
  for (int temp = 0; temp < 4; temp++)
    {
      printf("%s\n", LICENSE[temp]);
    }
  for (int temp = 0; temp < 3; temp++)
    {
      printf("%s\n", MAIN_MENU[temp]);
    }
  return 0;
}

#endif
