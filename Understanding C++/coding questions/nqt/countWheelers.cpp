#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,w;
    cin>>v>>w;
    if((w&1) or v>w or w<2) cout<<"INVALID INPUT"<<endl;
    else{
        int tw=((4*v)-w)/2;
        cout<<"TW: "<<tw<<" FW: "<<v-tw<<endl;
    }
    return 0;
}