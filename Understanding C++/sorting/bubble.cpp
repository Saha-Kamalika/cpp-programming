#include<bits/stdc++.h>
using namespace std;
void bsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(flag==false) break;
    }
}
int main(){
    int arr[]={5,3,4,1,2};
    bsort(arr,5);
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
}