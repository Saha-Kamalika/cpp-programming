#include<bits/stdc++.h>
using namespace std;
string removeVow(string &s){
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' or s[i]=='o' or s[i]=='e' or s[i]=='i' or s[i]=='u') continue;
        else ans+=s[i];
    }
    return ans;
}
int main(){
    string s;
    getline(cin,s);
    string ans=removeVow(s);
    cout<<ans<<endl;
    return 0;
}