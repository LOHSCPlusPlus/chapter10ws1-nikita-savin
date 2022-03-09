#include <iostream>
#include "Point.h"
using namespace std;
#include <math.h>

// Notice how when we use field names in the functions that
// belong to Point, we can just use the name without a dot operator.
Point::Point(double xVal, double yVal) {
    x = xVal;
    y = yVal;
}

Point::Point() {
    x = 0.0;
    y = 0.0;
  }

void Point::print() {
  cout << "x: " << x << "y: " << y << endl;
}

double Point::calcDistance(Point other) {
  double xVal = pow(x - other.x,2);
  double yVal = pow(y - other.x,2);
  double dist = sqrt(xVal + yVal);
  return dist;
}

