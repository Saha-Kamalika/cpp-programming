#include<bits/stdc++.h>
using namespace std;
int calculateBinaryOp(string &s){
    int n=s.size();
    if(n==0) return -1;
    int result=s[0]-'0';
    for(int i=1;i<n-1;i+=2){
        if(s[i]=='B')
            result|= (s[i+1]-'0');
        else if(s[i]=='A')
            result&= (s[i+1]-'0');
        else if(s[i]=='C')
            result^= (s[i+1]-'0');
    }
    return result;
}
int main(){
    string s;
    cin>>s;
    cout<<calculateBinaryOp(s);
    return 0;
}