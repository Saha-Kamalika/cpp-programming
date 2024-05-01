#include<bits/stdc++.h>
using namespace std;
int minCost(string &s){
    string vow="aeiou";
    int cost=0;
    for(int i=0;i<s.size();i++){
        vector<int> costs;
        for(int j=0;j<vow.size();j++){
                costs.push_back(abs(s[i]-vow[j]));
        }
        cost+=*min_element(costs.begin(),costs.end());
    }
    return cost;
}
int main(){
    string s;
    cin>>s;
    cout<<minCost(s);
    return 0;
}