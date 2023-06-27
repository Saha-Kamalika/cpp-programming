#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

bool isDig(char c){
    int d=c-'0';
    if(d>=0 && d<=9) return true;
    return false;
}
string sortt(string str){
  vector<int> v;
  for(int i=0;i<str.size();i++){
    if(isDig(str[i])){
    v.push_back(str[i]-'0');
    }
  }
  sort(v.begin(),v.end());
  string ans="";
  for(int i=0;i<v.size();i++){
    ans.push_back(v[i]+'0');
    if(i!=(v.size()-1))
      ans.push_back('+');
  }
  return ans;
}

int main(){
  string str;
  cout<<"Enter the expression: ";
  cin>>str;
  cout<<"Sorted expression: "<<sortt(str);
  return 0;
}