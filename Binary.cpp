#include <iostream>
#include <string>
using namespace std;
class Binary  {
private:
  string s;

public:
  void get();
  void check();
  void ones();
  void show();
};
void Binary ::get() {
  cout << "Enter the binary number: " << endl;
  cin >> s;
}
void Binary ::check() {
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != '0' && s[i] != '1') {
      cout << "Incorrect binary number" << endl;
      exit(0);
    }
  }
  cout << "Valid" << endl;
}
void Binary ::ones() {
  for (int i = 0; i < s.length(); i++) {
    s[i] = (s[i] == '0') ? '1' : '0';
  }
}
void Binary ::show() {
  cout << "Result = ";
  cout << s << endl;
}

int main() {
  Binary b;
  b.get();
  b.check();
  b.ones();
  b.show();
  return 0;
}
