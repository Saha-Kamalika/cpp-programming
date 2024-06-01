#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* head;
void push(Node* &head, int data){
    Node* nn=new Node(data);
    if(head==NULL){
        head=nn;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=nn;
    //return head;
}
void printt(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void reverse(Node* &head){
    Node *curr=head, *prev=NULL, *next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
int main(){
    head=NULL;
    push(head,1);
    push(head,2);
    push(head,3);
    printt(head);
    reverse(head);
    printt(head);
}