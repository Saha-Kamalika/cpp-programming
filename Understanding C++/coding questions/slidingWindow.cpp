#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &v,int k){
    int ans=INT_MAX;
    for(int i=0;i<v.size();i++){
        if(i+k+1<v.size()){
            vector<int> sub(v.begin(), v.begin()+i+k+1);
            int maxi=*max_element(sub.begin(), sub.end());
            ans=min(ans,maxi);
        }
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    int k;
    cin>>k;
    cout<<func(arr,k)<<endl;
    return 0;
}

/*
return the minimum value from a window of 3 sized which extracts the maximum integer from the current window*/