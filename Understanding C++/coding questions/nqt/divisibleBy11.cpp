#include<bits/stdc++.h>
using namespace std;
int checkDiv(string &s){
    int even=0, odd=0;
    for(int i=0;i<s.size();i++){
        if(i%2==0) even+=(s[i]-'0');
        else odd+=(s[i]-'0');
    }
    if((abs(even-odd))==0) return 1;
    else if (abs(even-odd)%11==0) return 1;
    return 0;
}
int main(){
    string n;
    cin>>n;
    cout<<checkDiv(n);
    return 0;
}