#include<bits/stdc++.h>
using namespace std;
int checkPhone(string number){
    if(number.size()!=10) return 1;
    for(int i=0;i<number.size();i++){
        if(!isdigit(number[i])) return 1;
    }
    return 0;
}
int checkValid(vector<string> &nums){
    int count=0;
    for(int i=0;i<nums.size();i++){
        string number=nums[i];
        count+=checkPhone(number);
    }
    return count;
}
int main(){
    string number="";
    vector<string> nums;
    while(1){
        cin>>number;
        if(number=="q" or number=="Q") break;
        nums.push_back(number);
    }
    int count=checkValid(nums);
    cout<<count<<endl;
    return 0;
}