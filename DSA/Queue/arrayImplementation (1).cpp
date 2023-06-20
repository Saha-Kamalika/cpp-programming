#include <iostream>
using namespace std;
class Stack {
  int front, rear, size;
  int *arr;

public:
  Stack(int size) {
    front = -1;
    rear = -1;
    this->size = size;
    arr = new int[size];
  }
  int isFull() {
    if (rear == size - 1)
      return 1;
    else
      return 0;
  }
  int isEmpty() {
    if (front == -1 && rear == -1)
      return 1;
    else
      return 0;
  }
  void enQueue(int data) {
    if (isFull())
      return;
    else if (isEmpty()) {
      front = 0;
      rear = 0;
    } else
      rear = rear + 1;
    arr[rear] = data;
  }
  void deQueue() {
    if (isEmpty())
      return;

    else if (front == rear) {
      cout << "Successfully Dequeued " << arr[front] << endl;
      front = -1;
      rear = -1;
    } else {
      cout << "Successfully Dequeued " << arr[front] << endl;
      front = front + 1;
    }
  }
  void print() {
    for (int i = front; i <= rear; i++)
      cout << arr[i] << " ";
    cout << endl;
  }
  int sizee() {
    int c = 0;
    while (front <= rear) {
      c++;
      front++;
    }
    return c;
  }
};
int main() {
  Stack s(5);
  s.enQueue(10);
  s.enQueue(5);
  s.enQueue(3);
  s.print();
  cout << "Is Queue Full?: " << s.isFull() << endl;
  cout << "Is Queue Empty?: " << s.isEmpty() << endl;
  s.deQueue();
  s.print();
  cout << "Size of the queue is: " << s.sizee() << endl;

  return 0;
}