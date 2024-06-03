#include<bits/stdc++.h>
using namespace std;
void printMaxSubarray(int arr[],int n){
    int sum=0, max=INT_MIN;
    int start=-1,arrSt=-1,arrEnd=-1;
    for(int i=0;i<n;i++){
        if(sum==0) start=i;
        sum+=arr[i];
        if(sum>max){
            max=sum;
            arrSt=start;
            arrEnd=i;
        }
        if(sum<0) sum=0;
    }
    for(int i=arrSt;i<=arrEnd;i++){
        cout<<arr[i]<<" ";   //op: 4 -1 2 1 5
    }
}
int main(){
    int arr[]={-2,-3,4,-1,2,1,5,-3};
    printMaxSubarray(arr,8);
}