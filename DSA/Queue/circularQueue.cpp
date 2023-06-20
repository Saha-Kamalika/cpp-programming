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
    if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
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
    if ((front == 0 && rear == size - 1) ||
        (rear == (front - 1) % (size - 1))) {
      cout << "\nQueue is Full";
      return;
    }

    else if (front == -1) /* Insert First Element */
    {
      front = rear = 0;
      arr[rear] = data;
    }

    else if (rear == size - 1 && front != 0) {
      rear = 0;
      arr[rear] = data;
    }

    else {
      rear++;
      arr[rear] = data;
    }
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
      front = (front + 1) % size;
    }
  }
  void print() {
    if (rear >= front) {
      for (int i = front; i <= rear; i++)
        cout << arr[i] << " ";
    }

    else {
      for (int i = front; i < size; i++)
        cout << arr[i] << " ";

      for (int i = 0; i <= rear; i++)
        cout << arr[i] << " ";
    }
    cout << endl;
  }
};
int main() {
  Stack s(5);
  s.enQueue(10);
  s.enQueue(5);
  s.enQueue(3);
  s.enQueue(6);
  s.enQueue(1);
  s.print();
  cout << "Is Queue Full?: " << s.isFull() << endl;
  cout << "Is Queue Empty?: " << s.isEmpty() << endl;
  s.deQueue();
  s.enQueue(20);
  s.print();
  return 0;
}
