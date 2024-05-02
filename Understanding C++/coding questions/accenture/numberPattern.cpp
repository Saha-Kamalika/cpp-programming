#include<bits/stdc++.h>
using namespace std;
void printPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=0;j--) cout<<j<<" ";
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printPattern(n);
    return 0;
}
/*
8
7 6 5 4 3 2 1 0 
6 5 4 3 2 1 0 
5 4 3 2 1 0 
4 3 2 1 0 
3 2 1 0 
2 1 0 
1 0 
0 
*/