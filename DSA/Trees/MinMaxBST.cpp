#include <iostream>
using namespace std;
struct Node {
  int data;
  Node *left;
  Node *right;
};
Node *getNode(int data) {
  Node *getNode = new Node();
  getNode->data = data;
  getNode->left = getNode->right = NULL;
  return getNode;
}
Node *insert(Node *root, int data) {
  if (root == NULL) {
    root = getNode(data);
    return root;
  } else if (data <= root->data)
    root->left = insert(root->left, data);
  else
    root->right = insert(root->right, data);
  return root;
}
int FindMin(Node *root) {
  if (root == NULL) {
    cout << "Tree is empty" << endl;
    return -1;
  } else if (root->left == NULL)
    return root->data;
  return FindMin(root->left);
}
int FindMax(Node *root) {
  if (root == NULL) {
    cout << "Tree is empty" << endl;
    return -1;
  }
  while (root->right != NULL)
    root = root->right;
  return root->data;
}
int main() {
  Node *root = NULL;
  int data;
  root = insert(root, 15);
  root = insert(root, 10);
  root = insert(root, 20);
  root = insert(root, 8);
  root = insert(root, 12);
  root = insert(root, 17);
  root = insert(root, 25);

  cout << "Min node: " << FindMin(root) << endl;
  cout << "Max node: " << FindMax(root) << endl;
  return 0;
}