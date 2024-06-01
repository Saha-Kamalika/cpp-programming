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
int getNode(int n){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==n) return temp->data;
        temp=temp->next;
    }
    return -1;
}
int main(){
    head=NULL;
    push(head,1);
    push(head,2);
    push(head,3);
    int n;
    cin>>n;
    cout<<getNode(n)<<endl;
}