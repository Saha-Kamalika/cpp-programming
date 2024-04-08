#include<bits/stdc++.h>
using namespace std;
int main(){
    string arrs[8] = {"TH" , "GA", "IC" , "HA" , "TE", "LU" ,"NI","CA"};
    float arr[8]={800,600,750,900,1400,1200,1100,1500};
    string s,d;
    cin>>s>>d;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    transform(d.begin(), d.end(), d.begin(), ::toupper);
    int st=-1, en=-1;
    for(int i=0;i<8;i++){
        if(arrs[i]==s) st=i;
        if(arrs[i]==d) en=i;
    }
    float ans=0.0;
    if(st==en){
        cout<<"INVALID INPUT"<<endl;
        return 0;
    }
    else{
        int i=st+1;
        while(i!=en+1){
            ans+=(arr[i]);
            i=(i+1)%8;
        }
        cout<<(ceil)(ans*0.005)<<" INR"<<endl;
        return 0;
    }
}
