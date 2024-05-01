#include<bits/stdc++.h>
using namespace std;
bool autoBio(string n){
    unordered_map<int,int> mp;
    for(int i=0;i<n.size();i++) mp[n[i]-'0']++;
    
    for(int i=0;i<n.size();i++){
        if((n[i]-'0')!=mp[i]) return false;
    }
    return true;
}
int check(string n){
    set<int> s;
    for(int i=0;i<n.size();i++){
        s.insert(n[i]-'0');
    }
    return s.size();
}
int main(){
    string n;
    cin>>n;
    if(n.size()==0) return 0;
    else{
        if(autoBio(n)){
            cout<<check(n);
        }
        else cout<<0;
    }
}