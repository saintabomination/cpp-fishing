#ifndef STRUCTS_H
#define STRUCTS_H

#include "../Headers.h"

struct Fish {
  std::string name;
  int price;

  Fish(std::string name, int price) {
    this->name = name;
    this->price = price;
  }
};

struct Player {
  int money;
};

#endif // STRUCTS_H
