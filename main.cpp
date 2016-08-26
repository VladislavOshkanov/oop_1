#include "Container.h"

int main(int argc, char const *argv[]) {
  Container<int> cont;
  cont.pushLast(1);
  cont.pushLast(2);
  cont.pushLast(3);
  cont.pushLast(4);
  cont.deleteLast();

  cont.print();
  return 0;
}
