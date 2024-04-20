#include<bits/stdc++.h>
using namespace std;
vector<int> findLargeSmall(int n){
    int num=n,sum=0, small=INT_MAX, large=INT_MIN;
    vector<int> v;
    while(n>0){
        int d=n%10;
        small=min(small,d);
        large=max(large,d);
        n/=10;
    }
    v.push_back(large);
    v.push_back(small);
    return v;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans=findLargeSmall(n);
    cout<<"["<<ans[0]<<" "<<ans[1]<<"]"<<endl;
    return 0;
}

/*find largest and smallest digit of a number*/