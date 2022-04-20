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
  std::cout << '\n';
}

int getChoice(int max)
{
  int choice = 0;
  std::cout << ">> ";
  std::cin >> choice;

  return choice;
}

int mainMenu()
{
  clearScreen();
  printTitle();
  printMenu(mainMenuPrompts);
  int choice = getChoice(4);
  return choice;
}

int main()
{
  mainMenu();
  return 0;
}
