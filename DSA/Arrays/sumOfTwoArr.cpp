#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &ans){
    int s=0, e=ans.size()-1;
    while(s<=e){
        swap(ans[s], ans[e]);
        s++;
        e--;
    }
}
void sum(vector<int> v1, int n, vector<int> v2, int m, vector<int> &ans){
    int i=n-1, j=m-1;
    int carry=0;
    while(i>=0 and j>=0){
        int val1= v1[i];
        int val2= v2[j];
        int sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum=v1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum=v2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    reverse(ans);
    //return ans;
}
int main(){
    vector<int> v1={9,9,9};
    vector<int> v2={9,9,9};
    int n=v1.size(), m=v2.size();
    vector<int> ans;
    sum(v1, n, v2, m, ans);
    for(auto i: ans) cout<<i<<" ";
}
