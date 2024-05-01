#include<bits/stdc++.h>
using namespace std;
void fun(int arr[],int n){
    int five=0,zero=0;
    for(int i=0;i<n;i++){
        if(arr[i]==5) five++;
        else zero++;
    }
    if(zero==0) cout<<-1;
    else if(five==0) cout<<0;
    else{
        int c5=floor((five/9)*9);
        while(c5>0){
            cout<<"5";
            c5--;
        }
        while(zero>0){
           cout<<"0";
           zero--;
        }
    }
}
int main(){
    int arr[]={5,5,5,5,5,5,5,5,0,0,5};
    fun(arr,11);
}
//op: 55555555500