#include<iostream>
using namespace std;

struct Node{
int data;
Node* next;
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
void print(Node* head){
  Node* temp=head;
  cout<<"List is: ";
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
Node* reverse(Node* head){
  Node* current,*prev,*next;
  current=head;
  prev=NULL;
  while(current!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
  }
  head=prev;
  return head;
}
int main(){
  Node* head=NULL;
  head=insert(head,1);
  head=insert(head,2);
  head=insert(head,3);
  head=insert(head,4);
  head=insert(head,5);
  print(head);
  head=reverse(head);
  cout<<"After reversal...."<<endl;
  print(head);
  return 0;
}