#include "../Headers/Functions.h"

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

void getEnter(std::string action)
{
  std::cout << "Press ENTER to " << action << ".\n";
  std::cin.get();
  std::cin.get();
}
