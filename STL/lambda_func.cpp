#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{2,3,1};
    cout<<all_of(v.begin(), v.end(), [](int x){return x>0;})<<endl; //1
    cout<<any_of(v.begin(), v.end(), [](int x){return x>0;})<<endl; //1
    cout<<none_of(v.begin(), v.end(), [](int x){return x>0;})<<endl; //0
}