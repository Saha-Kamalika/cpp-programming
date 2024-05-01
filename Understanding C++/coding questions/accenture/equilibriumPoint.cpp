#include<bits/stdc++.h>
using namespace std;
int equi(vector<int> &arr,int n){
    int total=0;
    for(int i=0;i<n;i++) total+=arr[i];
    
    int leftSum=0;
    for(int i=0;i<n;i++){
        int rightSum=total-leftSum-arr[i];
        if(leftSum==rightSum) return i;
        leftSum+=arr[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<equi(arr,n);
    return 0;
}