#include<bits/stdc++.h>
using namespace std;
int checkDiv(string &s){
    int size=s.size();
    if(size==0) return 0;
    if(size<3) return (stoi(s)%8==0);

    string temp="";
    temp.push_back(s[size-3]);
    temp.push_back(s[size-2]);
    temp.push_back(s[size-1]);
    
    return (stoi(temp)%8==0);
}
int main(){
    string n;
    cin>>n;
    cout<<checkDiv(n);
    return 0;
}