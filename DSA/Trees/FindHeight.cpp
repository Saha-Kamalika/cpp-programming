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
int Height(Node* root){
  int leftHt,rightHt;
  if(root==NULL) return -1;
  return max(Height(root->left),Height(root->right))+1;
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
  cout<<"Height of the tree: "<<Height(root)<<endl;
  return 0;
}