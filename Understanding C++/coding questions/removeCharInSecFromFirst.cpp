#include<bits/stdc++.h>
using namespace std;
void rem(string s1,string s2){
    unordered_map<char, int> mp;
    string ans;
    for(char c: s2) mp[c]=1;
    for(char c: s1){
        if(mp[c]!=1) ans+=c;
    }
    cout<<ans<<endl;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    rem(s1,s2);
    return 0;
}