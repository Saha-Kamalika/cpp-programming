#include<bits/stdc++.h>
using namespace std;
void find(string s, string &ans){
    int len=s.length();
    int i=0,j=0,maxLen=0, maxSt=0;
    while(j<=len){
        if(j<len and s[j]!=' ') j++;
        else{
            int currLen=j-i;
            if(currLen>maxLen){
                maxLen=currLen;
                maxSt=i;
            }
            j++;
            i=j;
        }
    }
    ans=s.substr(maxSt, maxLen);
}
int main(){
    string s;
    getline(cin,s);
    string ans;
    find(s,ans);
    cout<<ans<<endl;
    return 0;
}