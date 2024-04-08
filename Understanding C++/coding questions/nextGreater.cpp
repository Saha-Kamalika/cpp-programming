// Compute the nearest larger number by interchanging its digits updated.Given 2 numbers a and b find the smallest number greater than b by interchanging the digits of a and if not possible print -1.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int b, c;
    cin>>a>>b;

    sort(a.begin(), a.end(), greater<char>());
    c=stoi(a);
    if(b>c) cout<<-1;
    while(b<c){
        prev_permutation(a.begin(), a.end());
        c=stoi(a);
    }
    next_permutation(a.begin(), a.end());
    cout<<a<<endl;
}
