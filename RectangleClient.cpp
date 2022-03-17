#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {
    Point a(73, 56);
    Point b(46, 90);
    Line L(a, b);
  
    Point c(67.3, 9786.3);
    Point d(48.6, 34);
    
  Line F(c, d);
  rectangle G(F, L);

  G.print();
  cout << G.calcArea();
  
  return 0;
}
