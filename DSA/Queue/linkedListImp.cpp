#include <iostream>
using namespace std;
struct Node {
  int data;
  Node *next;
};
Node *front = NULL;
Node *rear = NULL;
void enqueue(int data) {
  Node *temp = new Node;
  temp->data = data;
  temp->next = NULL;
  cout << data << " successfully enqueued" << endl;
  if (front == NULL && rear == NULL) {
    front = rear = temp;
    return;
  }
  rear->next = temp;
  rear = temp;
}
void dequeue() {
  Node *temp = front;
  if (front == NULL)
    return;
  if (front == rear) {
    front = rear = NULL;
  } else
    front = front->next;
  cout << "Dequeued " << temp->data << " successfully" << endl;
  delete (temp);
}

int peek() { return front->data; }
void print() {
  Node *temp = front;
  cout << "The Queue is: ";
  while (temp != rear) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << temp->data;
  cout << endl;
}
int main() {
  enqueue(10);
  enqueue(5);
  enqueue(20);
  print();
  dequeue();
  print();
  return 0;
}
