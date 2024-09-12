#include <iostream>
#include <string>

#include "static/dllist.hpp"
#include "static/greet.h"
using std::string;

int main(void) {
  string name = "Gwen";
  greet(name);
  dllist<int> list;
}