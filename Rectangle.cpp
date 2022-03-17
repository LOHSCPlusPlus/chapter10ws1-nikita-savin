#include "Rectangle.h"

rectangle::rectangle(Line a, Line b) {
        Length = a;
        Height = b;
      }
void rectangle::print() {
  Length.print();
  Height.print();
}

double rectangle::calcArea() {
  double area = Height.lineLength() * Length.lineLength();
  return area;
}


