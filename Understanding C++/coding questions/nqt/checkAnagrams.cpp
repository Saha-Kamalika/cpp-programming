/*check anagram*/
#include<bits/stdc++.h>
using namespace std;
bool checkAna(string &s1, string &s2){
    if(s1.size()!=s2.size()) return false;
    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());
    // for(int i=0;i<s1.size();i++){
    //     if(s1[i]!=s2[i]) return false;
    // }
    // return true;
    unordered_map<char,int> mp;
    for(char c: s1) mp[c]++;
    for(char c: s2) mp[c]--;
    for(auto &e: mp){
        if(e.second!=0) return false;
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(checkAna(s1,s2)) cout<<"true";
    else cout<<"false";
    return 0;
}