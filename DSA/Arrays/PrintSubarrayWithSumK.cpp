#include<bits/stdc++.h>
using namespace std;
void printSubarray(int arr[],int n,int target){
    map<vector<int>,int> mp;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==target){
                vector<int> v;
                for(int k=i;k<=j;k++){
                    v.push_back(arr[k]);
                }
                mp[v]=v.size();
            }
        }
    }
    for(auto e: mp){
        for(int i=0;i<e.first.size();i++){
            cout<<e.first[i]<<" ";
        }
        cout<<e.second;
        cout<<endl;
    }
}
int main(){
    int arr[]={3,4,1,-3,1,4,3,-3,2,5};
    printSubarray(arr,10,7);
}

/*
1 4 3 -3 2 5
2 5 2
3 -3 2 5 4
3 4 2
4 1 -3 1 4 5
4 1 -3 1 4 3 -3 7
4 3 2
*/