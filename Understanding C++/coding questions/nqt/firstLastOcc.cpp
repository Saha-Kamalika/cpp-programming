/*
first and last occurence of a character
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> findOcc(string &s,char c){
    int st=-1, ed=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]==c and st==-1) st=i;
        if(s[i]==c) ed=i;
    }
    vector<int> ans;
    ans.push_back(st);
    ans.push_back(ed);
    return ans;
}
int main(){
    string s;
    char c;
    cin>>s>>c;
    vector<int> ans=findOcc(s,c);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}