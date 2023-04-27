#include <iostream>
using namespace std;
class c2; // fowward declaration
class c1 {
  int num1;
  friend void swap(c1 &, c2 &);

public:
  void set(int num1) { this->num1 = num1; }
  void display() { cout << num1 << endl; }
};
class c2 {
  int num2;
  friend void swap(c1 &, c2 &);

public:
  void set(int num2) { this->num2 = num2; }
  void display() { cout << num2 << endl; }
};
void swap(c1 &o1, c2 &o2) {
  int temp = o1.num1;
  o1.num1 = o2.num2;
  o2.num2 = temp;
}
int main() {
  c1 o1;
  o1.set(155);
  c2 o2;
  o2.set(156);
  swap(o1, o2);
  cout << "Value of the object of class c1 after swapping ";
  o1.display();
  cout << "Value of the object of class c2 after swapping ";
  o2.display();
}