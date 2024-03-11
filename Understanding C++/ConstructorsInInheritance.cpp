#include <iostream>
using namespace std;
class Base1 {
  int data1;
 
public:
  Base1(int d1) {
    data1 = d1;
    cout << "Base1 Class Constructor called" << endl;
  }
  void printdata1(void) { cout << "The value of data1 is " << data1 << endl; }
};
class Base2 {
  int data2;

public:
  Base2(int d2) {
    data2 = d2;
    cout << "Base2 Class Constructor called" << endl;
  }
  void printdata2(void) { cout << "The value of data2 is " << data2 << endl; }
};
class Derived : public Base1,
                public Base2 { // constructor called a/c order of declaration
  int der1, der2;

public:
  Derived(int a, int b, int c, int d) : Base1(a), Base2(b) { // special syntax
    der1 = c;
    der2 = d;
    cout << "Derived Class Constructor called" << endl;
  }
  void printDer(void) {
    cout << "The value of derived1 and derived2 is " << der1 << " and " << der2
         << endl;
  }
};
int main() {
  Derived r(154, 155, 156, 157);
  r.printdata1();
  r.printdata2();
  r.printDer();
  return 0;
}
