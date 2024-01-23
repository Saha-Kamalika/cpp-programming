#include <bits/stdc++.h>
using namespace std;
int main(){
    ////secret message
    // string s,ans;
    // getline(cin, s);
    // for(auto i: s){
    //     if(i<='u') ans+=(i+5);
    //     else ans+=(i-'v'+'a');
    // }
    // cout<<ans;
    
    ////bit toggled
    // int n;
    // cin>>n;
    // int nn=4;
    // int mask= (1<<(int)floor(log2(n))+1)-1;
    // cout<<(n^mask);
    
    ////bikers cross
    int n,a,c=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a) sum+=c;
        else c++;
    }
    cout<<sum;
}
