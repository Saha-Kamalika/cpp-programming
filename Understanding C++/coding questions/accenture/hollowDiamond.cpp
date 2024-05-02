#include<bits/stdc++.h>
using namespace std;
void printPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++) cout<<"* ";
        for(int j=1;j<4*i-1;j++) cout<<" ";
        for(int j=(n-i+1);j>=1;j--) cout<<"* ";
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<"* ";
        for(int j=1;j<4*(n-i+1)-1;j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"* ";
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

6
* * * * * *   * * * * * * 
* * * * *       * * * * * 
* * * *           * * * * 
* * *               * * * 
* *                   * * 
*                       * 
*                       * 
* *                   * * 
* * *               * * * 
* * * *           * * * * 
* * * * *       * * * * * 
* * * * * *   * * * * * * 
*/
