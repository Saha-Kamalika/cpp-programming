#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second) return a.first<b.first;
    return a.second>b.second;
}
void sortElem(int arr[],int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) mp[arr[i]]++;
    vector<pair<int,int>> v;
    for(auto &i: mp){
        v.push_back({i.first,i.second});
    }
    sort(v.begin(), v.end(), comp);
    for(auto &p: v){
        while(p.second>0){
            cout<<p.first<<" ";
            p.second--;
        }
    }
    cout<<endl;
}
int main(){
    int arr[]={3, 3, 5, 2, 1, 1, 2};
    int n=7;
    sortElem(arr,n);
    return 0;
}
/*
Sort Elements of an Array by Frequency

Problem Statement: Given an array of integers, having some duplicate elements, sort the array by frequency.

Examples:

Example 1:
Input: N = 8, array[] = {1,2,3,2,4,3,1,2}
Output: 2 2 2 1 1 3 3 4 
Explanation: Since  2 is present 3 times in an array , so print it 3 times ,then print ‘1’ 2 times and then ‘3’ 2 times and 4 has least frequency, it will be printed at last.*/