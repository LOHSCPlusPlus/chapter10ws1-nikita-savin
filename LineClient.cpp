#include "Line.h"
#include <iostream>
using namespace std;



int main() {
    Point a(67.3, 9786.3);
    Point b(48.6, 34);
    Line L(a, b);
    L.print();
    double Length = L.lineLength();
    cout << "Line length: "<< Length << endl;
    return 0;
}
