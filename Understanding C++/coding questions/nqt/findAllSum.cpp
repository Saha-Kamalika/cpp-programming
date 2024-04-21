/*
Write a program to find the sum of all characters and all possible contiguous character combinations from
the given string.

Consider the string S1="321".

All characters and combinations of contiguous characters from the above string are: 3,2,1,32,21,321.
Adding all the numbers (3+2+1+32+21+321), we get 380 as the result.
*/

#include<bits/stdc++.h>
using namespace std;
int getSum(string &s){
    int sum=0,num=0;
    for(int i=0;i<s.size();i++){
        num=0;
        for(int j=i;j<s.size();j++){
            num=num*10+(s[j]-'0');
            sum+=num;
        }
    }
    return sum;
}
int main(){
    string n;
    cin>>n;
    cout<<getSum(n)<<endl;
    return 0;
}