#include<bits/stdc++.h>
using namespace std;
bool automorph(int n){
    int sq=n*n;
    while(n>0){
        if(n%10!=sq%10) return false;
        n/=10;
        sq/=10;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(automorph(n)) cout<<"Yes";
    else cout<<"No";
    return 0;
}