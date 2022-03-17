#include "Line.h"

class rectangle {
    private:
      Line Length;
      Line Height;
    public:
      rectangle(Line a, Line b);
      void print();
      double calcArea();
};