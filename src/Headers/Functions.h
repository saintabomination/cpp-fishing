#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "../Headers.h"
#include "../Constants.h"

void clearScreen();
void printTitle();
void printMenu(std::vector<std::string> prompts);
int getChoice(int max);

#endif // FUNCTIONS_H
