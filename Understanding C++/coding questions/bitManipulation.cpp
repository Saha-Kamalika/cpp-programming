#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string bin=bitset<4>(n).to_string();
    
    cout<<stoi(bin)<<endl;
    int pos;
    cin>>pos;
    int mask=1<<pos;
    cout<<"Checking bit....";
    if(n&mask) cout<<"bit 1"<<endl;
    else cout<<"bit 0"<<endl;
    
    cout<<"Setting the bit....";
    n=n|mask;
    cout<<n<<endl;
    
    cout<<"Clearing the bit....";
    n&=~mask;
    cout<<n<<endl;
    
    cout<<"Toggling the bit....";
    n^=mask;
    cout<<n<<endl;
    return 0;
}