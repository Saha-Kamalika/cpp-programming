#include<iostream>
#include<stack>
using namespace std;

struct Node{
int data;
Node* next;
};

Node* head=NULL;
void insert(int data){
  Node* temp=new Node;
  temp->data=data;
  if(head==NULL){
    head=temp;
    temp->next=NULL;
    return;
  }
  Node* temp2=head;
  while(temp2->next!=NULL){
    temp2=temp2->next;
  }
  temp2->next=temp;
  temp->next=NULL;
}
void print(Node* ptr){
  
  if(ptr==NULL) return;
  cout<<ptr->data<<" ";
  print(ptr->next);
}
void Reverse(){
  if(head==NULL) return;
  stack<Node*> s;
  Node* temp=head;
  while(temp!=NULL){
    s.push(temp);
    temp=temp->next;
  }
  temp=s.top();
  head=temp;
  s.pop();
  while(!s.empty()){
    temp->next=s.top();
    s.pop();
    temp=temp->next;
  }
  temp->next=NULL; //last node
}
int main(){
  insert(1);
  insert(2);
  insert(4);
  insert(8);
  insert(0);
  cout<<"The list is: ";
  print(head);
  Reverse();
  cout<<"The reverse list is: ";
  print(head);
  return 0;
}