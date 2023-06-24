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
Node *findMin(Node *root) {
  if (root == NULL)
    return root;
  else {
    while (root->left != NULL)
      root = root->left;
    return root;
  }
}
Node *Delete(Node *root, int data) {
  if (root == NULL)
    return root;
  else if (data < root->data)
    root->left = Delete(root->left, data);
  else if (data > root->data)
    root->right = Delete(root->right, data);
  else {
    if (root->left == NULL && root->right == NULL) {
      delete (root);
      root = NULL;
    } else if (root->left == NULL) {
      Node *temp = root;
      root = root->right;
      delete (temp);
    } else if (root->right == NULL) {
      Node *temp = root;
      root = root->left;
      delete (temp);
    } else {
      Node *temp = findMin(root->right);
      root->data = temp->data;
      root->right = Delete(root->right, temp->data);
    }
  }
  return root;
}
bool search(Node *root, int data) {
  if (root == NULL)
    return false;
  else if (root->data == data)
    return true;
  else if (data <= root->data)
    return search(root->left, data);
  else
    return search(root->right, data);
}
int main() {
  Node *root = NULL;
  int data;
  root = insert(root, 10);
  root = insert(root, 2);
  root = insert(root, 6);
  root = insert(root, 15);
  root = Delete(root, 6);
  cout << "Enter data to be searced: " << endl;
  cin >> data; // 6
  if (search(root, data) == true)
    cout << "data found" << endl;
  else
    cout << "data not found" << endl;
  return 0;
}
