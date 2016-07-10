#include "Container.h"

int main(int argc, char const *argv[]) {
  Container<int> cont;
  cont.pushFirst(0);
  cont.print();
  return 0;
}
