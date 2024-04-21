#include<bits/stdc++.h>
using namespace std;
#define PI 3.1416
int fact(int n){
    if(n==0 or n==1) return 1;
    else return n*fact(n-1);
}
int checkRelative(int n){
    int sum=0,temp=n;
    while(n>0){
        int d=n%10;
        sum+=fact(d);
        n/=10;
    }
    return (sum==temp);
}
int main(){
    int n;
    cin>>n;
    cout<<checkRelative(n)<<endl;
    return 0;
}

/*number is equal to the sum of the factorial of its digits*/