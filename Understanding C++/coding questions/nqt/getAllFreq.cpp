/*Input:
Take two strings as input one is the string stone and other is string metal

Output:
Each character of string metal is to be search is present in the string
stone or not. If it is there then count the number of times it has occurred
individually in string stone and print the count.

Sample Input:
Stone - "aAAbbbb
Metal = "a4"

Sample output:
3
*/
#include<bits/stdc++.h>
using namespace std;
int giveFreq(string &s1, string &s2){
    for(int i=0;i<s1.size();i++) s1[i]=tolower(s1[i]);
    for(int i=0;i<s2.size();i++) s2[i]=tolower(s2[i]);
    
    unordered_map<char,int> mp;
    for(char c: s1) mp[c]++;
    
    int count=0;
    for(char c: s2) count+=mp[c];
    return count;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<giveFreq(s1,s2)<<endl;
    return 0;
}