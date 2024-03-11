#include <bits/stdc++.h>
using namespace std;
bool canSort(vector<int> size, vector<int> color){
    vector<int> red;
    vector<int> green;
    for(int i=0;i<color.size();i++){
        if(color[i]==0) red.push_back(size[i]);
        else green.push_back(size[i]);
    }
    if(red.size()!=green.size()) return false;
    else{
        sort(red.begin(),red.end());
        sort(green.begin(),green.end());
        int i=0,j=0;
        while(i<red.size() && j<green.size()){
            int e1= red[i];
            int e2= green[i];
            if(e2>e1){
                if(i+1<red.size() && red[i+1]<e2) return false;
            }
            else if(e1>e2){
                if(j+1<green.size() && green[j+1]<e1) return false;
            }
            i++;
            j++;
        }
    }
}
int main(){
    vector<int> size = {2, 56, 60, 3, 10, 5};
    vector<int> color = {0, 1, 0, 1, 0, 1};
    if(canSort(size, color)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
