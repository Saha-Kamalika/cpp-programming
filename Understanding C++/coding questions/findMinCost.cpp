#include<bits/stdc++.h>
using namespace std;
int minCost(vector<int> &v,int n){
    priority_queue<int,vector<int>,greater<int>> pq; //min heap
    
    for(int i: v) pq.push(i);
    int ans=0;
    while(pq.size()>1){
        int f=pq.top();
        pq.pop();
        int s;
        if(!pq.empty()){
            s=pq.top();
            pq.pop();
        }
        ans+=f+s;
        pq.push(f+s);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<minCost(v,n)<<endl;;
    return 0;
}
/*You are given an array of integers representing the costs of items. You want to minimize the total cost of purchasing all items by following a specific strategy. The strategy is as follows:

1. At each step, choose the two cheapest items from the array.
2. Combine these two items into one and add their cost together.
3. Replace the two chosen items with their combined cost in the array.
4. Repeat steps 1-3 until there is only one item left in the array, which represents the total cost.*/