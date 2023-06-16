#include<iostream>
using namespace std;
struct Node{
int data;
Node* next;
Node* prev;
};

Node* head;
Node* getNew(int data){
  Node* newNode=new Node;
  newNode->data=data;
  newNode->prev=NULL;
  newNode->next=NULL;
  return newNode;
}
void insertBeg(int data){
  Node* temp=getNew(data);
  if(head==NULL){
    head=temp;
    return;
  }
  head->prev=temp;
  temp->next=head;
  head=temp;
}
void insertEnd(int data){
  Node* temp=getNew(data);
  if(head==NULL){
    head=temp;
    return;
  }
  Node* temp1=head;
  while(temp1->next!=NULL)
    temp1=temp1->next;
  temp1->next=temp;
  temp->prev=temp1;
}
void print(){
  Node* temp=head;
  cout<<"Forward: ";
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
void revprint(){
  Node* temp=head;
  while(temp->next!=NULL)
    temp=temp->next;
  cout<<endl;
  cout<<"Reverse: ";
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->prev;
  }
}
int main(){
  head=NULL;
  cout<<"Inserting at beginning"<<endl;
  insertBeg(100);
  insertBeg(200);
  insertBeg(50);
  print();
  revprint();
  cout<<endl;
  cout<<"Inserting at end"<<endl;
  insertEnd(100);
  insertEnd(200);
  insertEnd(50);
  print();
  revprint();
  return 0;
}