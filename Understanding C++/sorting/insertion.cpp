#include<bits/stdc++.h>
using namespace std;
void insert(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[]={5,4,2,3,1};
    insert(arr,5);
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
}