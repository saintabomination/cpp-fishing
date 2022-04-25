#include "../Headers/Menus.h"
#include "../Headers/Functions.h"

extern Player player;

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

  switch (choice)
  {
    case 2:
      Menus::statsMenu();
  }
}

void Menus::statsMenu()
{
  clearScreen();
  printTitle();
  std::cout << player.name << '\n';
  std::cout << "Money: " << player.money << " $\n\n";
  getEnter();
}
