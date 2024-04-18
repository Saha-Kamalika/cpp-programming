#include<bits/stdc++.h>
using namespace std;
bool isvalid(int i,int j,int m,int n){
    if(i>=0 and i<m and j>=0 and j<n) return true;
    return false;
}
int main(){
    int m,n;
    cin>>m>>n;
    int left,right,down,up,curr;
    vector<vector<int>> mat(m,vector<int> (n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) cin>>mat[i][j];
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(isvalid(i,j-1,m,n)) left=mat[i][j-1];
            else left=INT_MIN;
            if(isvalid(i,j+1,m,n)) right=mat[i][j+1];
            else right=INT_MIN;
            if(isvalid(i-1,j,m,n)) up=mat[i-1][j];
            else up=INT_MIN;
            if(isvalid(i+1,j,m,n)) down=mat[i+1][j];
            else down=INT_MIN;
            
            curr=mat[i][j];
            if(curr>=left and curr>=right and curr>=up and curr>=down) cout<<curr<<" ";
        }
    }
    return 0;
}