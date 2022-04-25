#include "Headers.h"
#include "Headers/Functions.h"
#include "Headers/Structs.h"

std::vector<std::string> mainMenuPrompts = {
  "Go fishing",
  "Stats",
  "Shop",
  "Quit"
};

int mainMenu()
{
  Player player;

  clearScreen();
  printTitle();
  printMenu(mainMenuPrompts);
  int choice = getChoice(mainMenuPrompts.size());
  return choice;
}

int main()
{
  mainMenu();
  return 0;
}
