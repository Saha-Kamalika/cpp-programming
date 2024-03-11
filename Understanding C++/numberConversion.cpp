#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int binaryToDecimal(int n){
    int ans=0,x=1,y=0;
    while(n>0){
        y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}
int binaryToOctal(int n){
    int ans=0,x=1,y=0;
    while(n>0){
        y=n%10;
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}
int binaryToHexadecimal(string n){
    int ans=0,x=1;
    int len=n.size();
    for(int i=len-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans+=(n[i]-'0')*x;}
        else if(n[i]>='A' && n[i]<='F'){
            ans+=(n[i]-'A'+10)*x;
        }
        x*=16;
    }
    return ans;
}
int main(){
    int ch;
    while(true){
    cout<<"1. Binary->Decimal\n2. Binary->Octal\n3. Binary->Hexadecimal\nEnter your choice: "<<endl;
    cin>>ch;
    switch(ch){
        case 1:     int n;
                    cout<<"Enter the binary number: "<<endl;
                    cin>>n;
                    cout<<"Decimal -> "<<binaryToDecimal(n)<<endl;
                    break;

        case 2:     int num;
                    cout<<"Enter the binary number: "<<endl;
                    cin>>num;
                    cout<<"Octal -> "<<binaryToOctal(num)<<endl;
                    break;

        case 3:     string s;
                    cout<<"Enter the binary number: "<<endl;
                    cin>>s;
                    cout<<"Hexadecimal -> "<<binaryToHexadecimal(s)<<endl;
                    break;
         }      
    }
}
