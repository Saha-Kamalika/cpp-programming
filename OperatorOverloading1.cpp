#include <iostream>
using namespace std;
// Overloading binary operators +,-
class Point {
  int x, y;

public:
  Point(int x = 0, int y = 0) : x{x}, y{y} {}
  void print() { cout << "x: " << x << " y: " << y << endl; }
  Point operator+(Point &r) { // Similarly Point operator-(Point& r){}...for
                              // overloading - operator
    Point p;
    p.x = x + r.x;
    p.y = y + r.y;
    return p;
  }
};

int main() {
  Point p1(1, 1), p2;
  p1.print();
  p2.print();
  Point p3 = p1 + p2;
  p3.print();
  return 0;
}