/*rearrange the profit losses such that the overall income is never equal to zero

6
-10 2 1 -9 3 2
IMPOSSIBLE

7
2 3 1 4 5 -9 8
POSSIBLE
8 5 4 3 2 1 -9 
*/
#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum<=0){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        cout<<"POSSIBLE"<<endl;
        sort(v.begin(),v.end(),cmp);
        for(int i: v) cout<<i<<" ";
    }
    return 0;
}