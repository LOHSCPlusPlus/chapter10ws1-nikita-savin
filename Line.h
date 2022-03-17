#include "Point.h"

class Line {
private:
  Point start;
  Point end;
public:
  void print();
  double lineLength();
  Line(Point s, Point e);
};
