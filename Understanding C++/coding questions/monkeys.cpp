#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,p,k,j;
    cin>>n>>m>>p>>k>>j;
    float ateKola, ateBadam;
    if(n<0 or m<0 or p<0 or k<0 or j<0){
        cout<<"INVALID INPUT"<<endl;
        return 0;
    }
    else{
        if(k>0){
            ateKola = (float)(m/k);
            m%=k;
        }
        if(j>0){
            ateBadam = (float)(p/j);
            p%=j;
        }
        n=n-ateKola-ateBadam;
        if(m!=0 or p!=0) n--;
        cout<<"Monkeys left: "<<n<<endl;
        return 0;
    }
}
