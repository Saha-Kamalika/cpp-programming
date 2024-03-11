#include <iostream>
using namespace std;
class Student {
protected:
  int roll;

public:
  void setRoll(int);
  void getRoll(void);
};
void Student::setRoll(int r) { roll = r; }
void Student::getRoll() { cout << "Your roll number is " << roll << endl; }
class Exam : public Student {
protected:
  float oops, dsa;

public:
  void setMarks(float, float);
  void getMarks(void);
};
void Exam::setMarks(float o, float d) {
  oops = o;
  dsa = d;
}
void Exam::getMarks() {
  cout << "Your marks in OOPs is " << oops << endl;
  cout << "Your marks in DSA is " << dsa << endl;
}
class Result : public Exam {
protected:
  float percentage;

public:
  void getResult() {
    cout << "Your result is " << (oops + dsa) / 2 << "%" << endl;
  }
};
int main() {
  Result r;
  r.setRoll(155);
  r.setMarks(98, 98);
  r.getRoll();
  r.getMarks();
  r.getResult();
}
