/*
process the string such that no characters of s2 is present in s1

tiger
ti    //op: ger


*/

#include<bits/stdc++.h>
using namespace std;
string processString(string &s1, string &s2){
    unordered_map<char,int> mp;
    for(char c: s2) mp[c]++;
    string ans="";
    for(char c: s1){
        if(mp[c]==0) ans+=c;
    }
    return ans;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string ans=processString(s1,s2);
    cout<<ans<<endl;
    return 0;
}