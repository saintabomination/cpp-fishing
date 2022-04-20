#include <iostream>
#include <stdlib.h>
#include <string>

const std::string GAME_TITLE = "CPP Fishing";
const std::string GAME_VERSION = "0.1";

void clearScreen()
{
  system("clear");
}

void printTitle()
{
  std::cout << GAME_TITLE << " " << GAME_VERSION << std::endl;
}

int mainMenu()
{
  clearScreen();
  printTitle();
  return 1;
}

int main()
{
  mainMenu();
  return 0;
}
