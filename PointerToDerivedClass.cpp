#include <iostream>
using namespace std;
class Base {
public:
  int varB;
  void show() {
    cout << "Base Class called" << endl;
    cout << "The value of base class variable is " << varB << endl;
  }
};
class Derived : public Base {
public:
  int varD;
  void show() {
    cout << "Derived Class called" << endl;
    cout << "The value of base class variable is " << varB << endl;
    cout << "The value of derived class variable is " << varD << endl;
  }
};
int main() {
  Base *base_ptr;
  Base baseObj;
  Derived derObj;
  base_ptr = &derObj; // base class pointer pointing to derived class object
  base_ptr->varB = 155;
  base_ptr->show();
  // base_ptr->varD; //not allowed
  Derived *der_ptr;
  der_ptr = &derObj;
  der_ptr->varB = 155;
  der_ptr->varD = 156;
  der_ptr->show();
  return 0;
}