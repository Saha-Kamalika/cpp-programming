#include<bits/stdc++.h>
using namespace std;
bool subArr(vector<int> &arr1,vector<int> &arr2,int n,int m){
    if(m>n) return false;
    bool found;
    for(int i=0;i<n-m;i++){
        found=true;
        for(int j=0;j<m;j++){
            if(arr1[i+j]!=arr2[j]){
                found=false;
                break;
            }
        }
    }
    if(found) return true;
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr1(n), arr2(m);
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<m;i++) cin>>arr2[i];
    if(subArr(arr1,arr2,n,m)) cout<<"Its a subarray"<<endl;
    else cout<<"Its not a subarray"<<endl;
    return 0;
}