#include<bits/stdc++.h>
using namespace std;
vector<int> removeDupli(int arr[],int n){
    vector<int> v;
    v.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]!=v.back()) v.push_back(arr[i]);
    }
    return v;
}
int main(){
    int n;
    cin>>n;
    int arr[5];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> ans=removeDupli(arr,n);
    for(int e: ans) cout<<e<<" ";
    return 0;
}