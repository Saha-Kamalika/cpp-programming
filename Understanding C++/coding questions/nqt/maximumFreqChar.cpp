#include<bits/stdc++.h>
using namespace std;
void maxFreq(string s){
    unordered_map<char,int> mp;
    int maxC=INT_MIN;
    char ch;
    for(char c: s) mp[c]++;
    for(auto &e: mp){
        if(e.second>maxC){
            maxC=e.second;
            ch=e.first;
        }
    }
    cout<<ch<<endl;
}
int main(){
    string s;
    cin>>s;
    maxFreq(s);
    return 0;
}