#include<bits/stdc++.h>
using namespace std;
void checkUnequal(vector<int> &v,int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(v[0]!=v[i]) count++;
    }
    cout<<count<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    checkUnequal(v,n);
    return 0;
}