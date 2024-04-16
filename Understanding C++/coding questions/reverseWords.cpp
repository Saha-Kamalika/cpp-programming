#include<bits/stdc++.h>
using namespace std;
void modify(string &s){
    int l=0,r=s.size()-1;
    string ans="", temp="";
    while(l<=r){
        if(s[l]!=' ') temp+=s[l];
        else{
            if(ans!="") ans=temp+" "+ans;
            else ans=temp;
            temp="";
        }
        l++;
    }
    if(temp!=""){
        if(ans!="") ans=temp+" "+ans;
        else ans=temp;
    }
    cout<<ans<<endl;
}
int main(){
    string s;
    getline(cin,s);
    modify(s);
    return 0;
}