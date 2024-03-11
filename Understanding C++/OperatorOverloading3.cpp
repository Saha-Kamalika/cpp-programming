#include <iostream>
using namespace std;
// Overloading array subscript operator []
class Point {
  int a[2];

public:
  Point(int x, int y) {
    a[0] = x;
    a[1] = y;
  }
  void print() { cout << "x: " << a[0] << " y: " << a[1] << endl; }
  int &operator[](int pos) {
    if (pos == 0)
      return a[0];
    else if (pos == 1)
      return a[1];
    else {
      cout << "Array Out of Bound.." << endl;
      exit(0);
    }
  }
};
int main() {
  Point p(2, 4);
  p.print();
  p[0] = 6;
  p[1] = 9;
  p.print();
  p[2] = 69;
  return 0;
}