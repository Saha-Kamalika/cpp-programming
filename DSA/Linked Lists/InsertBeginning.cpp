#include <iostream>
using namespace std;
struct Node {
  int data;
  Node *next;
};
Node *head;
void insert(int x) {
  Node *temp = new Node;
  temp->data = x;
  temp->next = head;
  head = temp;
}
void print() {
  Node *temp = head;
  cout << "The list is: ";
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
int main() {
  head = NULL; // empty list
  int n, x;
  cout << "Enter no of elements: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Enter element: ";
    cin >> x;
    insert(x);
    print();
  }
  return 0;
}