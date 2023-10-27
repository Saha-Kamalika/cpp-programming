#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> v = {2, 3, 4, 1, 87};
  for (int i : v) {
    cout << i << " ";
  }
  sort(v.begin(), v.end());
  cout << "After sorting" << endl;
  for (int i : v) {
    cout << i << " ";
  }
  cout << "7 found? -> " << binary_search(v.begin(), v.end(), 7) << endl;
  rotate(v.begin(), v.begin() + 2, v.end());
  cout << "After sorting" << endl;
  for (int i : v) {
    cout << i << " ";
  }
  string name = "kamalika";
  reverse(name.begin(), name.end());
  cout << name << endl;
  ;

  int a = 69, b = 96;
  swap(a, b);
  cout << "a->" << a << " "
       << "b->" << b << endl;
}