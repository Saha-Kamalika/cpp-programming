#include<bits/stdc++.h>
using namespace std;
int checkDiv(string &s){
    int size=s.size();
    if(size==0) return 0;
    if(size==1){
        return (stoi(s)%4==0);
    }
    int l=s[size-1];
    int sl=s[size-2];
    int num=sl*10+l;
    return (num%4==0);
}
int main(){
    string n;
    cin>>n;
    cout<<checkDiv(n);
    return 0;
}