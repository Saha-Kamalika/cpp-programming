#include<iostream>
using namespace std;

struct Node{
int data;
Node *next;
};

Node* insert(Node* head,int data){
  Node* temp=new Node;
  temp->data=data;
  if(head==NULL){
    temp->next=NULL;
    head=temp;
    return head;
  }
  Node* temp2=head;
  while(temp2->next!=NULL){
    temp2=temp2->next;
  }
  temp2->next=temp;
  temp->next=NULL;
  return head;
}
void print(Node* ptr){
  if(ptr==NULL)
    return;
  cout<<ptr->data<<" ";  //not efficient
  print(ptr->next);
  //reverse traversal using recursion   //efficient for reversal
  /*print(ptr->next);
  cout<<ptr->data<<" ";
  */
}
int main(){
  Node* head=NULL;
  head=insert(head,1);
  head=insert(head,2);
  head=insert(head,3);
  head=insert(head,4);
  head=insert(head,5);
  cout<<"The list is: ";
  print(head);
  return 0;
}