#include<iostream>
using namespace std;

struct Node{
int data;
Node* next;
};
Node* head;
void insert(int data){
  Node* temp=new Node;
  temp->data=data;
  if(head==NULL){
    temp->next=NULL;
    head=temp;
    return;
  }
  Node* tempp=head;
  while(tempp->next!=NULL){
    tempp=tempp->next;
  }
  tempp->next=temp;
  temp->next=NULL;
}
void print(){
  Node* temp1=head;
  cout<<"List is: ";
  while(temp1!=NULL){
    cout<<temp1->data<<" ";
    temp1=temp1->next;
  }
  cout<<endl;
}
void del(int pos){
  Node* ptr=head;
  if(pos==1){
    head=ptr->next;
    delete ptr;
    return;
  }
  for(int i=0;i<pos-2;i++){
    ptr=ptr->next;
  }
  Node* ptr1=ptr->next;
  ptr->next=ptr1->next;
  delete ptr1;
}
int main(){
  head=NULL;
  insert(2);
  insert(3);
  insert(1);
  insert(5);
  print();
  del(1);
  print();
  del(3);
  print();
  return 0;
}