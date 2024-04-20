/*find uncommon chars in s1 and s2. 
digital ninja
dgjlnt*/
#include<bits/stdc++.h>
using namespace std;
string findUncommon(string &s1, string &s2){
    unordered_map<char,bool> mp1,mp2;
    string ans="";
    set<char> st;
    for(char c: s1) mp1[c]=true;
    
    for(char c: s2){
        if(mp1[c]!=true) st.insert(c);
        mp2[c]=true;
    }
    for(char c: s1){
        if(mp2[c]!=true) st.insert(c);
    }
    for(auto i: st) ans.push_back(i);
    return ans;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string ans=findUncommon(s1,s2);
    cout<<ans<<endl;
    return 0;
}