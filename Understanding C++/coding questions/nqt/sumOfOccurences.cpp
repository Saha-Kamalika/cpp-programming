#include<bits/stdc++.h>
using namespace std;
int freqSum(string &s1, string &s2){
    int sum=0;
    unordered_map<char,int> mp;
    for(char c: s1) mp[c]++;
    for(char c: s2) sum+=mp[c];
    return sum;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<freqSum(s1,s2)<<endl;
    return 0;
}

/*
find the sum of occurences of the characters of s2 in s1

1: 
helloworld do
3
2:
developer dev
5
*/