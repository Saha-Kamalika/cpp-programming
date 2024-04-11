#include<bits/stdc++.h>
using namespace std;
void insertAtBegin(int *arr, int &n, int val){
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=val;
    n++;
}
void insertAtEnd(int *arr, int &n, int val){
    arr[n]=val;
    n++;
}
void insertAtPos(int *arr,int &n,int pos,int val){
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=val;
    n++;
}
void printArr(int *arr,int n){
    cout<<"Printing array... ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int value;
    cin>>value;
    insertAtBegin(arr,n,value);
    printArr(arr,n);
    
    cin>>value;
    insertAtEnd(arr,n,value);
    printArr(arr,n);
    
    int pos;
    cin>>pos>>value;
    insertAtPos(arr,n,pos,value);
    printArr(arr,n);
    return 0;
}