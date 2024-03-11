#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a/gcd(a,b))*b;
}
int findLargestLCM(int a[], int n){
    int temp[n-1];
    int ind=0;
    for(int i=0;i<n-1;i++){
        temp[ind++]=lcm(a[i],a[i+1]);
    }
    int maxx=temp[0];
    for(int i=1;i<n-1;i++){
        maxx=max(maxx,temp[i]);
    }
    return maxx;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int res=findLargestLCM(a,n);
    cout<<"Largest LCM : "<<res<<endl;
}
