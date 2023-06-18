#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

Node *top = NULL, *head = NULL;
void push(int data) {
  Node *temp = new Node;
  cout << "Pushing: " << data << endl;
  temp->data = data;
  if (head == NULL)
    head = temp;
  temp->next = top;
  top = temp;
}
void pop() {
  Node *temp = top;
  if (top == NULL) {
    cout << "Nothing in stack" << endl;
    return;
  }
  cout << "Popping: " << temp->data << endl;
  top = top->next;
  delete (temp);
}
void peek() {
  if (top == NULL) {
    cout << "Nothing in stack" << endl;
    return;
  }
  cout << "Peeking: " << top->data << endl;
}
void size() {
  Node *temp = top;
  int size = 0;
  while (temp != NULL) {
    size++;
    temp = temp->next;
    ;
  }
  cout << "Size of stack is " << size << endl;
}
void print() {
  Node *temp = top;
  cout << "Stack is: ";
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
    ;
  }
  cout << endl;
}
int main() {
  push(1);
  push(2);
  push(1);
  pop();
  print();
  size();
  pop();
  peek();
  pop();
  peek();
  print();
}