#include<bits/stdc++.h>
using namespace std;
int findProPrice(int n){
    int pro=1;
    while(n>0){
        int d=n%10;
        pro*=d;
        n/=10;
    }
    return pro;
}
int main(){
    int n;
    cin>>n;
    cout<<findProPrice(n)<<endl;
    return 0;
}