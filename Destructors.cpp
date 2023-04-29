#include <iostream>
using namespace std;
int count = 0;
class Destructor {
public:
  Destructor() {
    count++;
    cout << "Constructor called for object " << count << endl;
  }
  ~Destructor() {
    cout << "Destructor called for object " << count << endl;
    count--;
  }
};
int main() {
  cout << "Entered main function" << endl;
  cout << "Creating one object d1" << endl;
  Destructor d1;
  {
    cout << "Entered the block" << endl;
    cout << "Creating two more objects d2 & d3" << endl;
    Destructor d2, d3;
    cout << "Exiting the block" << endl;
  }
  cout << "Back to main function" << endl;
  return 0;
}