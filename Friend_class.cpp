#include <iostream>
using namespace std;
// Forward Declaration
class Complex;
class Calculator {
public:
  int sumReal(Complex, Complex);
  int sumImg(Complex, Complex);
};

class Complex {
  int a, b;
  friend class Calculator;

public:
  void setData(int a, int b) {
    this->a = a;
    this->b = b;
  }
};
int Calculator::sumReal(Complex c1, Complex c2) { return (c1.a + c2.a); }
int Calculator::sumImg(Complex c1, Complex c2) { return (c1.b + c2.b); }
int main() {
  Complex c1, c2;
  int sum, sumr;
  c1.setData(1, 1);
  c2.setData(2, 2);
  Calculator cal;
  sum = cal.sumReal(c1, c2);
  cout << "The sum of the real parts is " << sum << endl;
  sumr = cal.sumImg(c1, c2);
  cout << "The sum of the imaginary parts is " << sumr << endl;
  return 0;
}
