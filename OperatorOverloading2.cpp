#include <iostream>
using namespace std;
// Overloading Unary Operator -
class Point {
  int x, y;

public:
  Point(int x = 0, int y = 0) : x{x}, y{y} {}
  Point operator-() { return Point(-x, -y); }
  void print() { cout << "x: " << x << " y: " << y << endl; }
};
int main() {
  Point p(2, 6);
  p.print();
  Point p1 = -p;
  p1.print();
  return 0;
}