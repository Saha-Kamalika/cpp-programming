#include <iostream>
using namespace std;
// Overloading stream insertion >> & stream extraction << operator
class Test {
  int x;

public:
  Test(int x = 0) : x{x} {}
  friend istream &operator>>(istream &input, Test &obj);
  friend ostream &operator<<(ostream &output, Test &obj);
};
istream &operator>>(istream &input, Test &obj) {
  input >> obj.x;
  return input;
}
ostream &operator<<(ostream &output, Test &obj) {
  output << obj.x << endl;
  return output;
}

int main() {
  Test t;
  cin >> t;
  cout << t;
}