#include <iostream>
#include <stdlib.h>
#include <string>

const std::string GAME_TITLE = "CPP Fishing";
const std::string GAME_VERSION = "0.1";

std::string mainMenuPrompts[4] = {
  "Go fishing",
  "Stats",
  "Shop",
  "Quit"
};

void clearScreen()
{
  system("clear");
}

void printTitle()
{
  std::cout << GAME_TITLE << " " << GAME_VERSION << "\n\n";
}

void printMenu(std::string prompts[4])
{
  for (int i = 0; i < 4; i++)
  {
    std::cout << i + 1 << ") " << prompts[i] << '\n';
  }
}

int mainMenu()
{
  clearScreen();
  printTitle();
  printMenu(mainMenuPrompts);
  return 1;
}

int main()
{
  mainMenu();
  return 0;
}
