#include<bits/stdc++.h>
using namespace std;
int findLongestSubstr(string s){
    int n=s.size();
    int st=0, end=0, maxLen=0;
    unordered_map<char,int> indexes;
    while(end<n){
        char curr=s[end];
        if(indexes.find(curr)!=indexes.end() and indexes[curr]>=st) st=indexes[curr]+1;
        indexes[curr]=end;
        maxLen=max(maxLen, end-st+1);
        end++;
    }
    return maxLen;
}
int main(){
    string s;
    cin>>s;
    cout<<findLongestSubstr(s)<<endl;
    return 0;
}