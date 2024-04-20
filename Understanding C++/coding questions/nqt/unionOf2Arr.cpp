#include<bits/stdc++.h>
using namespace std;
void findUnion(int arr1[], int arr2[], int m,int n){
    set<int> s1;
    for(int i=0;i<m;i++) s1.insert(arr1[i]);
    for(int i=0;i<n;i++) s1.insert(arr2[i]);
    for(int i: s1) cout<<i<<" ";
    cout<<endl;
}
int main(){
    int m,n;
    cin>>m>>n;
    int arr1[m], arr2[n];
    for(int i=0;i<m;i++) cin>>arr1[i];
    for(int i=0;i<n;i++) cin>>arr2[i];
    findUnion(arr1,arr2,m,n);
    return 0;
}