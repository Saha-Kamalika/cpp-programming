// convert a string into a 2d square matrix and then print the characters column wise
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int sq=sqrt(n),k=0;
    int rem=2*(n-sq*sq);
    string mat[sq][sq];
    for(int i=0;i<sq;i++){
        for(int j=0;j<sq;j++){
            mat[i][j]=s[k++];
            if(n-k<rem) mat[i][j]+=s[k++];
        }
    }
    for(int i=0;i<sq;i++){
        for(int j=0;j<sq;j++) cout<<mat[j][i];
        cout<<" ";
    }
}