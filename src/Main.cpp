#include "Headers.h"
#include "Headers/Functions.h"

std::vector<std::string> mainMenuPrompts = {
  "Go fishing",
  "Stats",
  "Shop",
  "Quit"
};

int mainMenu()
{
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
