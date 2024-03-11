#include <iostream>
using namespace std;
class Base {
  int d1;

public:
  int d2;
  void setData();
  int get1();
  int get2();
};
void Base::setData() {
  d1 = 155;
  d2 = 156;
}
int Base::get1() { return d1; }
int Base::get2() { return d2; }
class Derived
    : public Base { // if the visibility is made private, then the data members
                    // of the base class become private and cannot be accessed
                    // from outside the derived class
  int d3 = 143;

public:
  void cal();
  void show();
};
void Derived::cal() {
  // setData(); when visibility is private
  d3 = d2 * get1();
}
void Derived::show() {
  cout << "This is the Base Class private data \nValue of data 1 is " << get1()
       << endl;
  cout << "This is the Base Class public data \nValue of data 2 is " << d2
       << endl;
  cout << "This is the Derived Class private data \nValue of data 3 is " << d3
       << endl;
}
int main() {
  Derived d;
  d.setData();
  d.cal();
  d.show();
}