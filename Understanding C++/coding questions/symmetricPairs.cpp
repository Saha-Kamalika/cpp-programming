#include<bits/stdc++.h>
using namespace std;
void symmetric(int arr[][2], int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int v1=arr[i][0];
        int v2=arr[i][1];
        if(mp.find(v2)!=mp.end() and mp[v2]==v1){
            cout<<"("<<v1<<" "<<v2<<")"<<" ";
        }
        else mp[v1]=v2;
    }
}
int main(){
    int n = 5;
	int arr[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    symmetric(arr,n);
    return 0;
}