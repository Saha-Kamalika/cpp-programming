#include <iostream>
using namespace std;
class Amt {
  int principal, y, returnVal, R;
  float r, interest;

public:
  Amt(){};
  Amt(int p, int y, float r);
  Amt(int p, int y, int R);
  void show() {
    cout << "The principal amount " << principal << " has a return value of "
         << returnVal << " after " << y << " years" << endl;
  }
};
Amt::Amt(int p, int y, float r) {
  principal = p;
  this->y = y;
  interest = r;
  returnVal = principal;
  for (int i = 0; i < y; i++)
    returnVal = returnVal * (1 + interest);
}
Amt::Amt(int p, int y, int R) {
  principal = p;
  this->y = y;
  interest = float(R) / 100;
  returnVal = principal;
  for (int i = 0; i < y; i++)
    returnVal = returnVal * (1 + interest);
}
int main() {
  int p, y, R;
  float r;
  cout << "Enter the value of p,q and r: " << endl;
  cin >> p >> y >> r;
  Amt a1(p, y, r); // dynamic initialization
  a1.show();
  cout << "Enter the value of p,q and R: " << endl;
  cin >> p >> y >> R;
  Amt a2(p, y, R);
  a2.show();
}