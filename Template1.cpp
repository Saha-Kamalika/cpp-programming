#include <iostream>
using namespace std;

template <class T> // here the custom datatype is T

class vector {
public:
  T *arr; // replacing int->T
  int size;
  vector(int s) {
    size = s;
    arr = new T[size];
  }
  T dotProduct(vector &v) {
    T d = 0;
    for (int i = 0; i < size; i++)
      d += this->arr[i] * v.arr[i];
    return d;
  }
};
int main() {
  vector<float> v1(3); // type of vector must be specified here
  v1.arr[0] = 4.2;
  v1.arr[1] = 3.1;
  v1.arr[2] = 1;
  vector<float> v2(3);
  v2.arr[0] = 1.3;
  v2.arr[1] = 0;
  v2.arr[2] = 1.5;
  float dot = v1.dotProduct(v2);
  cout << "Dot product of the 2 vectors is " << dot << endl;
  return 0;
}
/*
Why to use Templates?
-> Follows Don't Repeat Yourself(DRY) Principle
-> Generic Programming (we can build multiple datatype based classes using
templates)
*/
