#include<bits/stdc++.h>
using namespace std;
void sortt(string &s,string &key){
    unordered_map<char, int> mp;
    for(char c: s) mp[c]++;
    string ans="";
    for(char c: key){
        while(mp[c]!=0){
            ans+=c;
            mp[c]--;
        }
    }
    cout<<ans<<endl;
}
int main(){
    string s,key;
    cin>>s>>key;
    sortt(s,key);
    return 0;
}
/*
s= welcome 
key= eclmow
ans: eeclmow
*/