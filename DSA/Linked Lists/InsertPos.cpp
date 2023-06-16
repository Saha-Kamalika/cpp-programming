#include<iostream>
using namespace std;
struct Node{
int data;
Node* next;
};
Node* head;
void insert(int data,int pos){
  Node* temp1=new Node;
  temp1->data=data;
  temp1->next=NULL;
  if(pos==1){
    temp1->next=head;
    head=temp1;
    return;
  }
  Node* temp2=head;
  for(int i=0;i<pos-2;i++)
    temp2=temp2->next;
  temp1->next=temp2->next;
  temp2->next=temp1;
}
void print(){
  Node* temp=head;
  cout<<"List is: ";
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
int main(){
  head=NULL;
  insert(2,1); //2
  insert(3,2); //2 3 
  insert(6,3); //2 3 6
  insert(1,2); //2 1 3 6
  insert(0,1); //0 2 1 3 6
  print();
  return 0;
}