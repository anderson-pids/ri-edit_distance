#include <iostream>
#include "editDistance.h"

int main(int argc, char const *argv[]) {
  ed_classic::editDistance ed("abcd","xad", 1);
  std::cout << ed.process() << '\n';

  return 0;
}
