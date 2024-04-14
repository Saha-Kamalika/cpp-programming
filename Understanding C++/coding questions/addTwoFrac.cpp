#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
void simplify(int &a,int &b){
    int hcf=gcd(a,b);
    a/=hcf;
    b/=hcf;
}
int main(){
    int num1,den1,num2,den2;
    cin>>num1>>den1>>num2>>den2;
    int lcm=(den1*den2)/gcd(den1,den2);
    int den3=lcm;
    int num3=num1*(den3/den1)+num2*(den3/den2);
    simplify(num3,den3);
    cout<<num1<<"/"<<den1<<"+"<<num2<<"/"<<den2<<"="<<num3<<"/"<<den3<<endl;
    return 0;
    
}
