#include <iostream>
using namespace std;
class Items {
  int id;
  float price;

public:
  void set(int id, float price) {
    this->id = id;
    this->price = price;
  }
  void get() {
    cout << "Item number of the item: " << id << endl;
    cout << "Price of this item: " << price << endl;
  }
};
int main() {
  int size = 5, p;
  float q;
  Items *ptr = new Items[size];
  for (int i = 0; i < size; i++) {
    cout << "Enter the id and price of the item " << (i + 1) << " ";
    cin >> p >> q;
    (ptr + i)->set(p, q);
  }
  cout << "Shopping list: " << endl;
  for (int i = 0; i < size; i++)
    (ptr + i)->get();
  return 0;
}