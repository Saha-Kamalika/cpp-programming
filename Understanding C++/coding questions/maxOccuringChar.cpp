#include<bits/stdc++.h>
using namespace std;
void maxOcc(string s){
    unordered_map<char,int> mp;
    for(char c: s) mp[c]++;
    int max=INT_MIN;
    char maxC;
    for(auto &e: mp){
        if(e.second>max){
            max=e.second;
            maxC=e.first;
        }
    }
    cout<<"Maximum occuring char is "<<maxC<<endl;
}
int main(){
    string s;
    cin>>s;
    maxOcc(s);
    return 0;
}