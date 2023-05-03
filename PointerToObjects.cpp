#include <iostream>
using namespace std;
class Complex {
  int r, i;

public:
  void set(int r, int i) {
    this->r = r;
    this->i = i;
  }
  void get() {
    cout << "The real part is " << r << endl;
    cout << "The imaginary part is " << i << endl;
  }
};
int main() {
  Complex c1;
  Complex *ptr = &c1;
  (*ptr).set(1, 5);
  (*ptr).get();
  return 0;
}