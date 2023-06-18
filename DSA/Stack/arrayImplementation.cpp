#include <iostream>
using namespace std;
class Stack {
  int top;
  int size;
  int *arr;

public:
  Stack(int size) {
    this->size = size;
    arr = new int[size];
    top = -1;
  }
  void push(int x) {
    if (top == size - 1) {
      cout << "Stack Overflow" << endl;
      return;
    }
    arr[++top] = x;
  }
  void pop() {
    if (top == -1) {
      cout << "Stack Underflow cannot pop" << endl;
      return;
    }
    cout << "Popped: " << arr[top] << endl;
    top--;
  }
  void peek() {
    if (top == -1) {
      cout << "Stack Empty nothing to peek" << endl;
      return;
    }
    cout << "Peeking: " << arr[top] << endl;
  }

  void isFull() {
    if (top == size - 1)
      cout << "Stack Full" << endl;
    else
      cout << "Stack not full" << endl;
  }
  int isEmpty() {
    if (top == -1) {
      cout << "Stack Empty" << endl;
      return 1;
    } else {
      cout << "Stack not empty" << endl;
      return 0;
    }
  }
  void sizee() { cout << "Stack size is " << top + 1 << endl; }
  void print() {
    cout << "Stack is: ";
    for (int i = 0; i <= top; i++)
      cout << arr[i] << " ";
    cout << endl;
  }
};
int main() {
  Stack s(5);
  s.push(1);
  s.push(2);
  s.push(5);
  s.print();
  s.pop();
  s.isEmpty();
  s.isFull();
  s.sizee();
  s.peek();
  s.pop();
  s.sizee();
  s.print();

  return 0;
}
