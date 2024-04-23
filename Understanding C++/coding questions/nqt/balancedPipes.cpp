#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,r;
    cin>>n>>m>>r;
    vector<int> in(n);
    vector<int> out(m);
    int inS=0,outS=0;
    for(int i=0;i<n;i++) {
        cin>>in[i];
        inS+=(in[i]-r);
    }
    for(int i=0;i<m;i++) {
        cin>>out[i];
        outS+=(out[i]-r);
    }
    if(inS==outS) cout<<"BALANCED";
    else{
        if(inS>outS) cout<<"-"<<inS-outS+r<<endl;
        else cout<<outS-inS+r<<endl;
    }
    return 0;
}
/*5 6 1
10 26 33 40 50
20 7 53 25 45 10
BALANCED
*/