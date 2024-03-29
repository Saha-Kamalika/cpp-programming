// Sieve of erastosthenes T.C: O(n*log(log n))
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    vector<bool> prime(n+1, true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]) {
            count++;
            for(int j=2*i;j<n;j+=i){
                prime[j]=false;
            }
        }
    }
    cout<<"Total no of prime nos between 1 and "<<n<<" are "<<count<<endl;
    return 0;
}