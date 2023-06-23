#include <iostream>
#include <queue>
using namespace std;
struct Node {
  char data;
  Node *left;
  Node *right;
};
Node *create(char data) {
  Node *getNode = new Node;
  getNode->data = data;
  getNode->left = NULL;
  getNode->right = NULL;
  return getNode;
}
Node *insertLeft(Node *root, char data) {
  root->left = create(data);
  return root->left;
}
Node *insertRight(Node *root, char data) {
  root->right = create(data);
  return root->right;
}
void Preorder(Node* root){
  if(root==NULL) return;
  cout<<root->data<<" ";
  Preorder(root->left);
  Preorder(root->right);
}
void Inorder(Node* root){
  if(root==NULL) return; 
  Inorder(root->left);
  cout<<root->data<<" ";
  Inorder(root->right);
}
void Postorder(Node* root){
  if(root==NULL) return;
  Postorder(root->left);
  Postorder(root->right);
  cout<<root->data<<" ";
}
int main() {
  Node *root = create('F');
  insertLeft(root, 'D');
  insertRight(root, 'J');
  insertLeft(root->left, 'B');
  insertRight(root->left, 'E');
  insertLeft(root->right, 'G');
  insertRight(root->right, 'K');
  insertLeft(root->left->left, 'A');
  insertRight(root->left->left, 'C');
  insertRight(root->right->left, 'I');
  insertLeft(root->right->left->right, 'H');
  cout<<"Preorder Traversal: ";
  Preorder(root);
  cout<<endl;
  cout<<"Inorder Traversal: ";
  Inorder(root); //inorder traversal of a bst gives the nodes in ascending order
  cout<<endl;
  cout<<"Postorder Traversal: ";
  Postorder(root);
  cout<<endl;
  return 0;
}
/*
Time complexity: O(n)
Space complexity: O(log n)-best/avg
                  O(n)-worst
*/