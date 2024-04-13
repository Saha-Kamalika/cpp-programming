#include<bits/stdc++.h>
using namespace std;
int facto(int n){
    if(n==0 or n==1) return 1;
    return n*facto(n-1);
}
bool checkStrong(int n,int fact[]){
    int num=n,sum=0;
    while(n>0){
        int d=n%10;
        sum+=fact[d];
        n/=10;
    }
    if(sum==num) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    int fact[10];
    fact[0]=1;
    fact[1]=1;
    for(int i=2;i<10;i++){
        fact[i]=facto(i);
    }
    if(checkStrong(n,fact)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}