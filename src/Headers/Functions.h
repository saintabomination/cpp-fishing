#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "../Headers.h"
#include "../Constants.h"
#include "./Structs.h"

void clearScreen();
void printTitle();
void printMenu(std::vector<std::string> prompts);
int getChoice(int max);
void getEnter();

#endif // FUNCTIONS_H
