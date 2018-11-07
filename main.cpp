#include<iostream>
#include "Box.h"

int main() {
  Box b1();
  Box b2;
  b2.Setlength(1);
  b2.Setwidth(2);
  b2.Setheight(3);
  b2.Setvolume();

  std::cout << "length =" << b2.Getlength() << '\n';
  std::cout << "width =" << b2.Getwidth() << '\n';
  std::cout << "height =" << b2.Getheight() << '\n';

  std::cout << " volume is: " << b2.Getvolume() << '\n';
  return 0;
}
