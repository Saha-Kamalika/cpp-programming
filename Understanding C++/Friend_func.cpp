#include <iostream>
using namespace std;
class Friend {
  int a, b;
  friend Friend sumComplex(Friend c1, Friend c2); // Declaration
public:
  void setData(int a, int b) {
    this->a = a;
    this->b = b;
  }
  // friend Friend sumComplex(Friend c1,Friend c2); //Declaration
  void getData() {
    cout << "The Complex Number is " << a << " + i" << b << endl;
  }
};
Friend sumComplex(Friend c1, Friend c2) {
  Friend c3;
  c3.a = c1.a + c2.a;
  c3.b = c1.b + c2.b;
  return c3;
}
int main() {
  Friend c1, c2, sum;
  c1.setData(1, 1);
  c1.getData();
  c2.setData(2, 2);
  c2.getData();
  sum = sumComplex(c1, c2);
  sum.getData();
  return 0;
}
/* Properties of Friend Function:
  --> Not in the scope of class
  --> As it is not in the scope of the class, it can't be called from the object
  of that class. c1.sumComplex--- invalid
  --> Can be invoked without the help of any object
  --> Contains objects as arguments
  --> Can be declared inside public/private section of the class
  -->It cannot access the members directly by their names , they need
  objectnName.memberName to access any member
*/