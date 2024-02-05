#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> s;
        for(int i=0;i<n;i++){
            long long candy;
            cin>>candy;
            s.insert(candy);
        }
        long long eat=0;
        for(int i=0;i<k;i++){
            auto last_it=(--s.end());
            long long count=*last_it;
            eat+=count;
            s.erase(last_it);
            s.insert(count/2);
        }
        cout<<"Total eaten: "<<eat<<endl;
    }
}
