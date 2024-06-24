#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> mp;
    string s="my name is kamalika is saha name";
    stringstream ss(s);
    string token;
    while(ss>>token){
        mp[token]++;
    }
    for(auto e: mp){
        if(e.second>1){
            cout<<e.first<<" "<<e.second<<endl;
        }
    }
}