#include<bits/stdc++.h>
using namespace std;
void rotateRight(int *arr,int k,int n){
    int ans[n];
    for(int i=0;i<n;i++){
        ans[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++) arr[i]=ans[i];
}
void rotateLeft(int *arr,int k,int n){
    int ans[n];
    int j=0;
    for(int i=k;i<n;i++) ans[j++]=arr[i];
    for(int i=0;i<k;i++) ans[j++]=arr[i];
    for(int i=0;i<n;i++) arr[i]=ans[i];
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5,k;
    cin>>k;
    string dir;
    cin>>dir;
    if(dir=="left") rotateLeft(arr,k,n);
    else rotateRight(arr,k,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
