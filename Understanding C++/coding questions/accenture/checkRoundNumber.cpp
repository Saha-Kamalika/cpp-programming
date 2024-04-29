#include<bits/stdc++.h>
using namespace std;
bool isRound(int n){
    unordered_map<int,bool> mp;
    while(true){
        int sum=0;
        while(n>0){
            int d=n%10;
            sum+=(pow(d,2));
            n/=10;
        }
        if(sum==1) return true;
        else if(mp[sum]==true) return false;
        else mp[sum]=true;
        n=sum;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    if(isRound(n)) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}
/*
a round number is a number defined by the following process:
starting with any positive integer, replace the number by the sum of the squares of its digits.
repeat the same process until the number equals 1, or it loops endlessly in a cycle which does not include 1

19 ...true
*/