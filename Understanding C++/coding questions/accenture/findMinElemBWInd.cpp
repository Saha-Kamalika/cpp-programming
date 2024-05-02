//find minimum elements between 2 indices
#include<bits/stdc++.h>
using namespace std;
int findCount(int arr[],int n,int x,int y){
    int ox=-1,oy=-1;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            ox=i;
            if(oy!=-1){
                if(abs(ox-oy)-1<ans) ans=abs(ox-oy)-1;
            }
        }
        if(arr[i]==y){
            oy=i;
            if(ox!=-1){
                if(abs(ox-oy)-1<ans) ans=abs(ox-oy)-1;
            }
        }
    }
    if(ox==-1 or oy==-1) return -1;
    else return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int x,y;
    cin>>x>>y;
    cout<<findCount(arr,n,x,y);
    return 0;
}
/*
10
10 2 3 4 7 8 9 1 2 3
3 9
2
*/