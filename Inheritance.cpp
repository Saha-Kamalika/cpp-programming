#include <iostream>
using namespace std;
class Employee {
public:
  int id;
  float salary;
  Employee(int id) {
    this->id = id;
    salary = 0;
  }
  Employee() {}
  void show() {
    cout << "The Employee has id " << id << " and salary " << salary << endl;
    ;
  }
};
/*
Derived class syntax:
class {{derived_class_name}} : {{visibility_mode}} {{base_class_name}}
-- Default visibility mode is private
-- Public visibility mode: Public members of the basde class becomes public
members of the derived class
-- Private visibility mode: Public members of the basde class becomes private
members of the derived class
*/
class Student : Employee {
public:
  int roll;
  Student(int id) {
    this->id = id;
    roll = 155;
  }
  void show() {
    cout << "The Student has id " << id << " and roll " << roll << endl;
  }
};
int main() {
  Employee emp(156);
  emp.show();
  Student stu(100);
  stu.show();
  return 0;
}