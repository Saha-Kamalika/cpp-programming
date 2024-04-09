#include<bits/stdc++.h>
using namespace std;

int main(){
    map<pair<string, string>, vector<int>>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string first, last;
        cin>>first>>last;
        int size;
        cin>>size;
        for(int i=0;i<size;i++){
            int x;
            cin>>x;
            m[{first, last}].push_back(x);
        }
    }

    for(auto &pr: m){
        auto &fullName=pr.first;
        auto &vec=pr.second;

        cout<<fullName.first<<" "<<fullName.second<<" "<<vec.size()<<endl;
        for(auto &e: vec) cout<<e<<" ";
        cout<<endl;
    }
    return 0;
}