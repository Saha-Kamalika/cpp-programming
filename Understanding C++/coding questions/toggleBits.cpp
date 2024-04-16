#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string num=bitset<4>(n).to_string();
    string ans;
    for(int i=0;i<num.size();i++){
        if(num[i]=='1') ans+='0';
        else ans+='1';
    }
    cout<<stoi(ans,0,2);  //binary to decimal
    return 0;
}