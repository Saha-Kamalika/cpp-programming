//T.C: O(n)
#include<bits/stdc++.h>
using namespace std;

void getElem(vector<int> &arr){
    int s=INT_MAX, ss=INT_MAX;
    int l=INT_MIN, sl=INT_MIN;
    
    for(int i=0;i<arr.size();i++){
        s=min(s,arr[i]);
        l=max(l,arr[i]);
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]<ss and arr[i]!=s) ss=arr[i];
        if(arr[i]>sl and arr[i]!=l) sl=arr[i];
    }
    cout<<"Second smallest "<<ss<<endl;
    cout<<"Second largest "<<sl<<endl;
}
int main(){
    vector<int> v1={3,5,2,1};
    getElem(v1);
    return 0;
}