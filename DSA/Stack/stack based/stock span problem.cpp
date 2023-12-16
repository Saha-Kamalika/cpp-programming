//STOCK SPAN PROBLEM
#include <bits/stdc++.h>
using namespace std;
vector<int> NGL(vector<int>& v){
    vector<int> id;
    stack<pair<int, int>> s;
    for(int i=0;i<v.size();i++){
        if(s.empty()) id.push_back(-1);
        else if(s.size()>0 && s.top().first>v[i]) id.push_back(s.top().second);
        else if(s.size()>0 && s.top().first<=v[i]){
            while(s.size()>0 && s.top().first<=v[i]) s.pop();
            if(s.empty()) id.push_back(-1);
            else id.push_back(s.top().second);
        }
        s.push({v[i],i});
    }
    return id;
}
int main(){
    vector<int> v={100, 80, 60, 70, 60, 75, 85};
    vector<int> ind=NGL(v);
    for(int i=0;i<v.size();i++) ind[i]=i-ind[i];
    for(int i=0;i<v.size();i++) cout<<ind[i]<<" ";
}
