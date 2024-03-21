#include<iostream>
using namespace std;
int findInteger(int n){
    int s=0, e=n, ans=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        int sq=mid*mid;
        if(sq<=n){
            ans=mid;
            s=mid+1;
        }
        else e=mid-1;
    }
    return ans;
}
double findFraction(int n, int p, int temp){
    double ans=temp;
    double factor=1;
    for(int i=0;i<p;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int temp = findInteger(n);
    cout<<findFraction(n, 3, temp)<<endl;
}