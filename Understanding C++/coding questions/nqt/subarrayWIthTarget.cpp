#include<bits/stdc++.h>
using namespace std;
void findSub(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==target){
                for(int k=i;k<=j;k++){
                    cout<<arr[k]<<" ";
                }
                cout<<(j-i+1)<<endl;
            }
        }
    }
}
int main(){
    int arr[]={3,4,1,-1,-1,0,2,5,7};
    int n=9;
    int target=7;
    findSub(arr,n,target);
}