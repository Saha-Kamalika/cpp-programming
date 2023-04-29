#include <iostream>
using namespace std;
class Copy {
  int num;

public:
  Copy() { num = -1; }
  Copy(int num) { this->num = num; }
  // compiler creates its own copy constructor if the user doesn't provide one
  Copy(Copy &obj) { // copy constructor defined
    cout << "Copy Constructor called" << endl;
    this->num = obj.num;
  }
  void show() { cout << "The number is " << num << endl; }
};
int main() {
  Copy c1(10), c2, c3;
  c2.show();
  c1.show();
  Copy c4 = c1; // copy constructor called
  c4.show();
  c2 = 20;
  c2.show();
  c3 = c1; // no copy constructor called
  return 0;
}