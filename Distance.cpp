#include <cmath>
#include <iostream>
using namespace std;
class Point {
  int x, y;
  friend float calculate(Point, Point);

public:
  Point(int a, int b) {
    x = a;
    y = b;
  }
  void display() { cout << "(" << x << ", " << y << ")" << endl; }
};
float calculate(Point p1, Point p2) {
  float d, x1, y1;
  x1 = p2.x - p1.x;
  y1 = p2.y - p1.y;
  d = sqrt(pow(x1, 2) + pow(y1, 2));
  return d;
}
int main() {
  Point p(0, 0);
  cout << "Point 1 is ";
  p.display();
  Point q(70, 0);
  cout << "Point 2 is ";
  q.display();
  float dis = calculate(p, q);
  cout << "Distance between P1 and P2 is " << dis << " units" << endl;
}