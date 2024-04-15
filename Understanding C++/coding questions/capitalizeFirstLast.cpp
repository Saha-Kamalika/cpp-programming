#include<bits/stdc++.h>
using namespace std;
string modify(string &s){
    for(int i=0;i<s.size();i++){
        if(i==0 or i==s.size()-1) s[i]=toupper(s[i]);
        else if(s[i]==' '){
            s[i-1]=toupper(s[i-1]);
            s[i+1]=toupper(s[i+1]);
        }
    }
    return s;
}
int main(){
    string s;
    getline(cin,s);
    cout<<modify(s)<<endl;
    return 0;
}