#include <iostream>
#include<limits.h>
using namespace std;
struct Node {
  int data;
  Node *left;
  Node *right;
};
Node *create(int data) {
  Node *getNode = new Node;
  getNode->data = data;
  getNode->left = NULL;
  getNode->right = NULL;
  return getNode;
}
Node *insertLeft(Node *root, int data) {
  root->left = create(data);
  return root->left;
}
Node *insertRight(Node *root, int data) {
  root->right = create(data);
  return root->right;
}
bool isBin(Node* root,int min,int max){
  if(root==NULL) return true;
  if(root->data<min && root->data>max && isBin(root->left,min,root->data) && isBin(root->right,root->data,max)) return true;
  else return false;
}
bool isBinarySearchTree(Node* root){
  return isBin(root,INT_MIN,INT_MAX);
}

int main(){
  Node* root=create(7);
  insertLeft(root,4);
  insertRight(root,9);
  insertLeft(root->left,1);
  insertRight(root->left,6);
  if(isBinarySearchTree(root)) cout<<"It is a BST"<<endl;
  else cout<<"Not a BST"<<endl;
}