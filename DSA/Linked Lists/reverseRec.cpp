#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};
Node *insert(Node *head, int data) {
  Node *temp = new Node;
  temp->data = data;
  if (head == NULL) {
    temp->next = NULL;
    head = temp;
    return head;
  }
  Node *temp2 = head;
  while (temp2->next != NULL) {
    temp2 = temp2->next;
  }
  temp2->next = temp;
  temp->next = NULL;
  return head;
}
Node *reverse(Node *ptr) {
  Node *head;
  if (ptr->next == NULL) {
    head = ptr;
    return head;
  }
  reverse(ptr->next);

  Node *q = ptr->next;
  q->next = ptr;
  ptr->next = NULL;
  return head;
}
void print(Node *ptr) {
  if (ptr == NULL)
    return;
  cout << ptr->data << " ";
  print(ptr->next);
}
int main() {
  Node *head = NULL;
  head = insert(head, 1);
  head = insert(head, 2);
  head = insert(head, 3);
  head = insert(head, 4);
  head = insert(head, 5);
  print(head);
  head = reverse(head);
  cout << endl;
  print(head);
  return 0;
}
