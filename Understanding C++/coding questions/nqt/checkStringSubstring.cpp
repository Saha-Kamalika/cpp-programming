#include<bits/stdc++.h>
using namespace std;
bool checkStrings(string &s1, string &s2){
    if(s1.size()<s2.size()) return false;
    int st=0, ed=s2.size()-1;
    
    while(ed<=s1.size()){
        string temp="";
        for(int i=st;i<=ed;i++){
            temp+=s1[i];
        }
        if(temp==s2) return true;
        ed++;
        st++;
    }
    return false;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<checkStrings(s1,s2)<<endl;
    return 0;
}
/*
check whether s2 is substring of s1
*/