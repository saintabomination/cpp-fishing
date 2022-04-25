#include "../Headers/Menus.h"
#include "../Headers/Functions.h"

std::vector<std::string> mainMenuPrompts = {
  "Go fishing",
  "Stats",
  "Shop",
  "Quit"
};

// Functions

void Menus::mainMenu()
{
  clearScreen();
  printTitle();
  printMenu(mainMenuPrompts);
  int choice = getChoice(mainMenuPrompts.size());
}
