#include<bits/stdc++.h>
using namespace std;
string findPrefix(vector<string> &s){
    sort(s.begin(),s.end());
    string pre="";
    int n=s.size();
    string first=s[0], last=s[n-1];
    for(int i=0;i<min(first.size(), last.size());i++){
        if(first[i]!=last[i]) return pre;
        pre+=last[i];
    }
    return pre;
}
int main(){
    vector<string> s={"flower","flow","flat"}; //fl
    string ans=findPrefix(s);
    cout<<ans<<endl;
    return 0;
}

/*
find longest common prefix
*/