#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>

const std::string GAME_TITLE = "CPP Fishing";
const std::string GAME_VERSION = "0.1";

std::vector<std::string> mainMenuPrompts = {
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

void printMenu(std::vector<std::string> prompts)
{
  for (int i = 0; i < prompts.size(); i++)
  {
    std::cout << i + 1 << ") " << prompts[i] << '\n';
  }
  std::cout << '\n';
}

int getChoice(int max)
{
  int choice = 0;

  while (choice <= 0 || choice > max)
  {
    std::cout << ">> ";
    std::cin >> choice;
  }

  return choice;
}

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
