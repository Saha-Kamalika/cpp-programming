#include<iostream>
using namespace std;
struct Node{
int data;
Node* left;
Node* right;
};
Node* getNode(int data){
  Node* getNode=new Node();
  getNode->data=data;
  getNode->left=getNode->right=NULL;
  return getNode;
}
Node* insert(Node* root,int data){
  if(root==NULL){
    root=getNode(data);
    return root;
  }
  else if(data<=root->data) root->left=insert(root->left,data);
  else root->right=insert(root->right,data);
  return root;
}
bool search(Node* root,int data){
  if(root==NULL) return false;
  else if(root->data==data) return true;
  else if(data<=root->data) return search(root->left,data);
  else return search(root->right,data);
}
int main(){
  Node* root=NULL;
  int data;
  root=insert(root,10);
  root=insert(root,2);
  root=insert(root,6);
  root=insert(root,15);
  cout<<"Enter data to be searced: "<<endl;
  cin>>data;
  if(search(root,data)==true) cout<<"data found"<<endl;
  else cout<<"data not found"<<endl;
  return 0;
  
}