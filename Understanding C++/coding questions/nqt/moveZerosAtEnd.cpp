#include<bits/stdc++.h>
using namespace std;
void moveZeros(int arr[],int n){
    vector<int> v(n,0);
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            v[k++]=(arr[i]);
        }
    }
    for(int i: v) cout<<i<<" ";
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    moveZeros(arr,n);
    return 0;
}