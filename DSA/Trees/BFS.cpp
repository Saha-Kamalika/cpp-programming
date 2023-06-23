#include<iostream>
#include<queue>
using namespace std;
struct Node{
char data;
Node* left;
Node* right;
};
Node* create(char data){
  Node* getNode=new Node;
  getNode->data=data;
  getNode->left=NULL;
  getNode->right=NULL;
  return getNode;
}
Node* insertLeft(Node* root,char data){
  root->left=create(data);
  return root->left;
}
Node* insertRight(Node* root,char data){
  root->right=create(data);
  return root->right;
}
void levelOrder(Node* root){
  if(root==NULL) return;
  queue<Node*> q;
  q.push(root);
  while(!q.empty()){
    Node* curr=q.front();
    cout<<curr->data<<" ";
    if(curr->left!=NULL) q.push(curr->left);
    if(curr->right!=NULL) q.push(curr->right);
    q.pop();
  }
  cout<<endl;
}
int main(){
  Node* root=create('F');
  insertLeft(root,'D');
  insertRight(root,'J');
  insertLeft(root->left,'B');
  insertRight(root->left,'E');
  insertLeft(root->right,'G');
  insertRight(root->right,'K');
  insertLeft(root->left->left,'A');
  insertRight(root->left->left,'C');
  insertRight(root->right->left,'I');
  insertLeft(root->right->left->right,'H');
  levelOrder(root);
  return 0;
}