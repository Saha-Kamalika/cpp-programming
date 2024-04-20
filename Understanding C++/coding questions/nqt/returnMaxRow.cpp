/*
find the index of the row having largest count of 1s
*/
#include<bits/stdc++.h>
using namespace std;
int fetchRow(vector<vector<int>> &v,int n,int m){
    int row=-1,maxRow=-1,maxInd=-1;
    for(int i=0;i<n;i++){
        row=0;
        for(int j=0;j<m;j++){
            if(v[i][j]==1){
                row++;
            }
        }
        if(row>maxRow and row!=0){
            maxRow=row;
            maxInd=i;
        }
    }
    return maxInd;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    cout<<fetchRow(v,n,m)<<endl;
    return 0;
}