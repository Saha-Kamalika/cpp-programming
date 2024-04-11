#include<bits/stdc++.h>
using namespace std;
void removeDupli(int arr[], int n){
    map<int,int> mp;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])==mp.end()){
            cout<<arr[i]<<" ";
            mp[arr[i]]++;
        }
    }
}
int main(){
    int arr[] = {4, 3, 9, 2, 4, 1, 10, 89, 34};
    int n=sizeof(arr)/sizeof(arr[0]);
    removeDupli(arr,n);
    return 0;
}