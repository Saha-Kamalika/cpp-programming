#include <iostream>
#include <bitset>
using namespace std;
int toggleBits(int n){
    int numBits=0, temp=n;
    while(temp!=0){
        temp>>=1;
        numBits++;
    }
    if(numBits==0) return 0;
    int bitmask=(1<<numBits)-1;
    return n^bitmask;
}
int main() {
    int n;
    cin >> n;
    cout<<toggleBits(n);
    return 0;
}
