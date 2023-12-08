#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) { 
        priority_queue<int,vector<int>,greater<int>> minh;
        for(int i=0;i<n;i++) minh.push(arr[i]);
        long long cost=0;
        while(minh.size()>=2){
            long f=minh.top();
            minh.pop();
            long s=minh.top();
            minh.pop();
            cost+=f+s;
            minh.push(f+s);
        }
        return cost;
    }
};
