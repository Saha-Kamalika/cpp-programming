#include<bits/stdc++.h>
using namespace std;
int countWays(int arr[][3],int m,int n,int i,int j){
    if(i==m and j==n) return 1;
    if(i>m or j>n) return 0;
    if(arr[i][j]==1) return 0;
    else countWays(arr,m,n,i+1,j)+countWays(arr,m,n,i,j+1);
}
int main(){
    int arr[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int i=2,j=2;
    int arr[i-1][j-1]=1;
    cout<<countWays(arr,3,3,0,0);
}