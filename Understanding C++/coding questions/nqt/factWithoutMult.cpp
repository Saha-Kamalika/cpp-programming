#include<bits/stdc++.h>
using namespace std;
int findFact(int n){
    int ans=n,sum=0;  //5
    for(int i=n-1;i>0;i--){ //4
        sum=0;
        for(int j=0;j<i;j++){  // 0 1 2 3
            sum+=ans;
        }
        ans=sum;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<findFact(n)<<endl;
    return 0;
}