#include<bits/stdc++.h>
using namespace std;
int findSum(vector<int> &v,int n){
    vector<int> odd,even;
    for(int i=0;i<n;i++){
        if(i%2==0) even.push_back(v[i]);
        else odd.push_back(v[i]);
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    int osl=odd[odd.size()-2];
    int esl=even[even.size()-2];
    return osl+esl;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    cout<<findSum(v,n);
}