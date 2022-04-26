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
    case 1:
      Menus::fishingMenu();
      break;

    case 2:
      Menus::statsMenu();
      break;
  }
}

void Menus::fishingMenu()
{
  clearScreen();
  printTitle();
  std::cout << "Fishing";

  // Typing dots
  for (int i = 0; i < 3; i++)
  {
    std::cout << '.' << std::flush;
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }

  std::cout << "\n\nWIP\n";
  getEnter("go back");
  mainMenu();
}

void Menus::statsMenu()
{
  clearScreen();
  printTitle();
  std::cout << player.name << '\n';
  std::cout << "Money: " << player.money << " $\n\n";
  getEnter("go back");
  Menus::mainMenu();
}
