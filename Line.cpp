#include "Line.h"
#include <iostream>
using namespace std;

Line::Line(Point s, Point e) {
  start = s;
  end = e;
}

void Line::print() {
  cout << " Start";
  start.print();
  cout << " End";
  end.print();
  cout << endl;
}

double Line::lineLength() {
    double distance = start.calcDistance(end);
    return distance;
  }